scale = 2.5 //Scale for drawing the working surface.

function add() { //Function opens a form for adding a new plant to the wall.   
    $.post('./add', this.id);
    window.open('http://192.168.1.20:5000/add', '_blank');
}

function deleteCirc() {
    var element = document.getElementById("test")
    element.remove()
}

function cleanLines() { //Function cleans the objects that need redrawing.
    for (let i = 0; i < lines.length; i++) {
        lines[i].remove()
    }
    for (let i = 0; i < bubbleElems.length; i++) {
        bubbleElems[i].remove()
    }
    for (let i = 0; i < pathPoints.length; i++) {
        pathPoints[i].remove()
    }
    for (let i = 0; i < texts.length; i++) {
        texts[i].remove()
    }
    lines = []
    bubbleElems = []
    pathPoints = []
    texts = []
    if (goalPos != null) {
        goalPos.remove()
    }
    goalPos = null
}

function updt() { //Function opens a form for updating plant data.
    $.post('./getId', this.id, function (response) {
        window.open('http://192.168.1.20:5000/updt/' + response, '_blank');
    });
}

$(".link").on("click", function (e) { //Function starts the working loop.
    $.post("./start", function (data) {
    })
});

function updateOpacity() { //Function sets the opacity for the spider position circles.
    for (let x = 0; x < positions.length; x++) {
        if (x <= posInd)
            positions[x].setAttribute('opacity', 1 - (x) * 0.02)
    }
}

//Global variables
var pathPoints = []
var texts = []
var lastPose = "sth"
var positions = []
var firstPath = true
var startPos = null
var goalPos = null
var lastRoute = []
var bubbleElems = []
var colors = ["#75EB00", "#53BBF4", "#FF85CB", "#FF432E", "#FFAC00",];
var pinLocations = []
var pinLocationsLegs = [[], [], [], [], [], []]
var spiderPins = []
var goalPin = []
var lines = []
var goalPinDraw = []
var sensorLoc = []
var pad = 20
var yDim = 25
var xDim = 20
var numPinsY = 13
var numPinsX = 21
var start = 20
var goalIndex = 0
var spiderLocation = []
var empty_slots = []
var posInd = 0
var text9 = document.createElementNS("http://www.w3.org/2000/svg", "text");

//Loop that draws the pins on the wall.
for (var x = 0; x < numPinsX; x++) {
    for (var y = numPinsY - 1; y >= 0; y--) {
        pinLocations.push([pad + x * xDim * scale, pad + y * yDim * scale])
        var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id', 'circle');
        circle.setAttribute("cx", pad + x * xDim * scale);
        circle.setAttribute("cy", pad + y * yDim * scale);
        circle.setAttribute("r", 3);
        circle.setAttribute("fill", "gray");
        $("svg").append(circle);
    }
}

//Drawing empty circles on the wall where the sensors could be.
let n = 0;
let k = 0;
let index = 0;
let panel = 0;
for (let i = 0; i < 3; i++) {
    panel++
    k = 0;
    n = 0;
    for (let j = 0; j < 36; j++) {
        if (n == 6) {
            k++;
            n = 0;
        }
        var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id', panel + ':' + (k + 1) + ':' + (n + 1));
        circle.setAttribute("cx", 30 * scale + pad + n * xDim * scale + i * 6 * scale * xDim);
        circle.setAttribute("cy", (12 * yDim * scale + 20) - ((299 - k * yDim) * scale - 7.5 * scale));
        circle.setAttribute("r", 1.8 * Math.PI);
        circle.setAttribute("stroke", "black");
        circle.setAttribute("fill", "white")
        circle.addEventListener('click', add);
        $("svg").append(circle);
        n++;
        empty_slots.push(circle)
    }
}

for (let i = 0; i < 3; i++) {
    panel++;
    k = 0;
    n = 0;
    for (let j = 0; j < 36; j++) {
        if (n == 6) {
            k++;
            n = 0;
        }
        var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id', panel + ':' + (k + 1) + ':' + (n + 1));
        circle.setAttribute("cx", 30 * scale + pad + n * xDim * scale + i * 6 * scale * xDim);
        circle.setAttribute("cy", (12 * yDim * scale + 20) - ((299 - (k + 6) * yDim) * scale - 7.5 * scale));
        circle.setAttribute("r", 1.8 * Math.PI);
        circle.setAttribute("stroke", "black");
        circle.setAttribute("fill", "white")
        circle.addEventListener('click', add);
        $("svg").append(circle);
        n++;
        empty_slots.push(circle)
    }
}

//Windows resize.
width = 40 + (numPinsX - 1) * xDim * scale
height = 350 * scale
document.getElementById("canv").setAttribute('width', width)
document.getElementById("canv").setAttribute('height', height)

function draw_grid() { //Functon for drawing the border of the wall.
    //Left border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', '10');
    newLine.setAttribute('y1', '10');
    newLine.setAttribute('x2', '10');
    newLine.setAttribute('y2', 30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //Top border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', '10');
    newLine.setAttribute('y1', '10');
    newLine.setAttribute('x2', 30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2', '10');
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //Bottom border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', '10');
    newLine.setAttribute('y1', 30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute('x2', 30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2', 30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //Right border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', 30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y1', '10');
    newLine.setAttribute('x2', 30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2', 30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //Left inner border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', 70 + ((numPinsX / 3) - 1) * xDim * scale);
    newLine.setAttribute('y1', '10');
    newLine.setAttribute('x2', 70 + ((numPinsX / 3) - 1) * xDim * scale);
    newLine.setAttribute('y2', 30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //Right inner border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', 30 + ((numPinsX / 3) * 2 - 1) * xDim * scale);
    newLine.setAttribute('y1', '10');
    newLine.setAttribute('x2', 30 + ((numPinsX / 3) * 2 - 1) * xDim * scale);
    newLine.setAttribute('y2', 30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //Middle border.
    var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
    newLine.setAttribute('id', 'line3');
    newLine.setAttribute('x1', '10');
    newLine.setAttribute('y1', 30 + 6 * yDim * scale);
    newLine.setAttribute('x2', 30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2', 30 + 6 * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);
}

draw_grid()

//Setup for spider positions.
for (let i = 0; i < 50; i++) {
    var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
    circle.setAttribute('id', "spiderPos");
    circle.setAttribute("cx", 0 * 100 * scale + pad);
    circle.setAttribute("cy", (12 * yDim * scale + 20) - (0 * 100 * scale));
    circle.setAttribute("r", 2 * Math.PI + 6);
    circle.setAttribute("stroke", "none");
    circle.setAttribute("fill", "none")
    circle.setAttribute("opacity", 0)
    circle.addEventListener('click', add);
    $("svg").append(circle);
    positions.unshift(circle)
}

function get_routes(data) { //Function displays the route data in the telematics section.
    try {
        current = data[6]
        next = data[7]
        stringCurrent = ""
        stringNext = ""
        for (let i = 1; i < current.length - 1; i++) {
            stringCurrent = stringCurrent + " " + JSON.parse(current[i])['index'] + ","
            stringNext = stringNext + " " + JSON.parse(next[i])['index'] + ","
        }
        stringCurrent = stringCurrent + " " + JSON.parse(current[current.length - 1])['index']
        stringNext = stringNext + " " + JSON.parse(next[current.length - 1])['index']
        document.getElementById("routeCurr").innerHTML = stringCurrent
        document.getElementById("routeNext").innerHTML = stringNext
    }
    catch {
        console.log("NO ROUTE WAS GIVEN")
    }
}

function goal(data) { //Function draws the path and the bubble that displays data.
    let coords = data[1]
    let index = data[2]
    cleanLines()
    let text_coords1 = [40, 60, 80, 100, 120, 140, 160, 180]
    let text_coords2 = [-170, -150, -130, -110, -90, -70, -50, -30]
    let used_coords = []
    let bubble_coords = []
    let arrow1_coords = 0
    let arrow2_coords = 0
    let visibility = "visible"
    let refill_text = "hidden"
    let txtCont1 = ""
    let txtCont2 = ""
    let name_latin = ""
    let needs = ""
    let areas = ""
    let charact = ""
    let x_marign = 0
    let hours = 0
    if(coords.length != 0){
    if (index != 0) {
        if (index > coords.length - 1) {
            visibility = "hidden"
            refill_text = "visible"
            index = 0
            console.log("hide everything except refill")
        }
        else {
            console.log("here")
            //Collecting data for output.
            name_latin = JSON.parse(coords[index])["latin_name"]
            needs = JSON.parse(coords[index])["needs"]
            areas = JSON.parse(coords[index])["areas"]
            var date = new Date(JSON.parse(coords[index])["lastWater"] * 1000)
            var dateNow = new Date()
            hours = Math.abs(dateNow - date) /36e5;
            visibility = "visible"
            refill_text = "hidden"
        }
        
    }
    else {
        visibility = "hidden"
        refill_text = "visible"
    }
    if (lines.length == 0) {
        for (let i = 0; i < coords.length - 1; i++) {

            //Drawing the path lines.
            var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
            newLine.setAttribute('id', 'line' + i);
            newLine.setAttribute('x1', (JSON.parse(coords[i]))["x"] * 100 * scale + pad);
            newLine.setAttribute('y1', (12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale));
            newLine.setAttribute('x2', (JSON.parse(coords[i + 1]))["x"] * 100 * scale + pad);
            newLine.setAttribute('y2', (12 * yDim * scale + 20) - ((JSON.parse(coords[i + 1])["y"]) * 100 * scale - 7.5 * scale));
            newLine.setAttribute("stroke-width", 3)
            newLine.setAttribute("stroke", "pink")
            $("svg").append(newLine);

            //Drawing the path points.
            var pathPoint = document.createElementNS('http://www.w3.org/2000/svg', 'circle');
            pathPoint.setAttribute('id', "pathPoint" + i);
            pathPoint.setAttribute("cx", (JSON.parse(coords[i]))["x"] * 100 * scale + pad);
            pathPoint.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale));
            pathPoint.setAttribute("r", 2 * Math.PI + 1);
            pathPoint.setAttribute("fill", "pink")
            $("svg").append(pathPoint);
            lines.push(newLine)
            pathPoints.push(pathPoint)
        }

        //Last line on the path.
        var newLine = document.createElementNS('http://www.w3.org/2000/svg', 'line');
        newLine.setAttribute('id', 'line' + coords.length);
        newLine.setAttribute('x1', (JSON.parse(coords[coords.length - 1]))["x"] * 100 * scale + pad);
        newLine.setAttribute('y1', (12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length - 1])["y"]) * 100 * scale - 7.5 * scale));
        newLine.setAttribute('x2', (JSON.parse(coords[0]))["x"] * 100 * scale + pad);
        newLine.setAttribute('y2', (12 * yDim * scale + 20) - ((JSON.parse(coords[0])["y"]) * 100 * scale - 7.5 * scale));
        newLine.setAttribute("stroke-width", 3)
        newLine.setAttribute("stroke", "pink")
        $("svg").append(newLine);
        lines.push(newLine)

        //Last line point.
        var pathPoint = document.createElementNS('http://www.w3.org/2000/svg', 'circle');
        pathPoint.setAttribute('id', "pathPoint");
        pathPoint.setAttribute("cx", (JSON.parse(coords[coords.length - 1]))["x"] * 100 * scale + pad);
        pathPoint.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length - 1])["y"]) * 100 * scale - 7.5 * scale));
        pathPoint.setAttribute("r", 2 * Math.PI + 1);
        pathPoint.setAttribute("fill", "pink")
        $("svg").append(pathPoint)
        pathPoints.push(pathPoint)

        //Drawing current goal on the path (blue dot).
        goalPos = document.createElementNS('http://www.w3.org/2000/svg', 'circle');
        goalPos.setAttribute('id', "goalPos");
        goalPos.setAttribute("cx", (JSON.parse(coords[index]))["x"] * 100 * scale + pad);
        goalPos.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale));
        goalPos.setAttribute("r", 1.8 * Math.PI);
        goalPos.setAttribute("fill", "blue")
        $("svg").append(goalPos);

        if ((12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale) < 150) {
            used_coords = [...text_coords1]
            bubble_coords = [-175, 15]
            arrow1_coords = 15
            arrow2_coords = 16
        }
        else {
            used_coords = [...text_coords2]
            bubble_coords = [-175, -194]
            arrow1_coords = -15
            arrow2_coords = -16
        }
        
        if(goalPos.getAttribute("cx")> 17*xDim*scale ){
            x_marign = -(2*xDim*scale)
        }
        //Bubble.
        var bubble = document.createElementNS("http://www.w3.org/2000/svg", "rect");
        bubble.setAttribute("x", parseInt(goalPos.getAttribute('cx')) + bubble_coords[0] + x_marign);
        bubble.setAttribute("y", parseInt(goalPos.getAttribute('cy')) + bubble_coords[1]);
        bubble.setAttribute("width", "350");
        bubble.setAttribute("height", "180");
        bubble.setAttribute("rx", "10");
        bubble.setAttribute("fill", "white")
        bubble.setAttribute("stroke", "black")
        $("svg").append(bubble);
        bubbleElems.push(bubble)

        //Arrow border.
        var arrow = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
        arrow.setAttribute("stroke", "black")
        arrow.setAttribute("fill", "white")
        arrow.setAttribute("points", (goalPos.getAttribute('cx') - 7) + "," + ((parseInt(goalPos.getAttribute('cy'))) + arrow1_coords) + " " + goalPos.getAttribute('cx') + "," + goalPos.getAttribute('cy') + " " + (parseInt(goalPos.getAttribute('cx')) + 7) + "," + ((parseInt(goalPos.getAttribute('cy'))) + arrow1_coords));
        $("svg").append(arrow);
        bubbleElems.push(arrow)

        //Arrow
        var arrow2 = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
        arrow2.setAttribute("stroke", "none")
        arrow2.setAttribute("fill", "white")
        arrow2.setAttribute("points", (goalPos.getAttribute('cx') - 7) + "," + ((parseInt(goalPos.getAttribute('cy'))) + arrow2_coords) + " " + goalPos.getAttribute('cx') + "," + goalPos.getAttribute('cy') + " " + (parseInt(goalPos.getAttribute('cx')) + 7) + "," + ((parseInt(goalPos.getAttribute('cy'))) + arrow2_coords));
        $("svg").append(arrow2);
        bubbleElems.push(arrow2)

        if (texts.length == 0) {
            //Text for Latin name prompt.
            var text = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[0]);
            text.setAttribute("text-anchor", "middle");
            text.setAttribute("alignment-baseline", "middle");
            text.setAttribute("font-weight", "bold");
            text.setAttribute("font-size", "12px");
            text.setAttribute("visibility", visibility);
            text.textContent = "Latin name:"
            $("svg").append(text);

            //Text for displaying the latin name of the plant.
            texts.push(text)
            var text2 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text2.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text2.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[1]);
            text2.setAttribute("text-anchor", "middle");
            text2.setAttribute("alignment-baseline", "middle");
            text2.setAttribute("font-style", "italic");
            text2.setAttribute("visibility", visibility);
            text2.setAttribute("font-size", "12px");
            text2.textContent = name_latin;
            $("svg").append(text2);
            texts.push(text2)

            //Text for Areas prompt.
            var text3 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text3.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text3.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[2]);
            text3.setAttribute("text-anchor", "middle");
            text3.setAttribute("alignment-baseline", "middle");
            text3.setAttribute("font-weight", "bold");
            text3.setAttribute("font-size", "12px");
            text3.setAttribute("visibility", visibility);
            text3.textContent = "Areas found:";
            $("svg").append(text3);
            texts.push(text3)

            //Text for displaying the areas data of the plant.
            var text4 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text4.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text4.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[3]);
            text4.setAttribute("text-anchor", "middle");
            text4.setAttribute("alignment-baseline", "middle");
            text4.setAttribute("font-style", "italic");
            text4.setAttribute("font-size", "12px");
            text4.setAttribute("visibility", visibility);
            text4.textContent = areas;
            $("svg").append(text4);
            texts.push(text4)

            //Text for Plant needs prompt.
            var text5 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text5.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text5.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[4]);
            text5.setAttribute("text-anchor", "middle");
            text5.setAttribute("alignment-baseline", "middle");
            text5.setAttribute("font-weight", "bold");
            text5.setAttribute("visibility", visibility);
            text5.setAttribute("font-size", "12px");
            text5.textContent = "Plant needs:";
            $("svg").append(text5);
            texts.push(text5)

            //Text for displaying the needs of the plant.
            var text6 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text6.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text6.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[5]);
            text6.setAttribute("text-anchor", "middle");
            text6.setAttribute("alignment-baseline", "middle");
            text6.setAttribute("font-size", "12px");
            text6.setAttribute("font-style", "italic");
            text6.setAttribute("visibility", visibility);
            text6.textContent = needs;
            $("svg").append(text6);
            texts.push(text6)

            //Text for the Time since last watering prompt.
            var text7 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text7.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text7.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[6]);
            text7.setAttribute("text-anchor", "middle");
            text7.setAttribute("alignment-baseline", "middle");
            text7.setAttribute("font-weight", "bold");
            text7.setAttribute("visibility", visibility);
            text7.setAttribute("font-size", "12px");
            text7.textContent = "Time since last watering:";
            $("svg").append(text7);
            texts.push(text7)

            //Text for displaying the time passed since the last watering in hours.
            var text8 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text8.setAttribute("x", (parseInt(goalPos.getAttribute('cx'))) + x_marign);
            text8.setAttribute("y", (parseInt(goalPos.getAttribute('cy'))) + used_coords[7]);
            text8.setAttribute("text-anchor", "middle");
            text8.setAttribute("alignment-baseline", "middle");
            text8.setAttribute("font-style", "italic");
            text8.setAttribute("visibility", visibility);
            text8.setAttribute("font-size", "12px");
            text8.textContent = hours.toFixed(0) + " hours";
            $("svg").append(text8);
            texts.push(text8)

            //Text for displaying the Refilling message.
            text9.setAttribute("x", goalPos.getAttribute('cx'));
            text9.setAttribute("y", goalPos.getAttribute('cy') - 90);
            text9.setAttribute("text-anchor", "middle");
            text9.setAttribute("font-style", "italic");
            text9.setAttribute("visibility", refill_text);
            text9.setAttribute("font-size", "30px")
            text9.setAttribute("alignment-baseline", "middle");
            text9.textContent = "Refilling";
            $("svg").append(text9);
            texts.push(text9)

            console.log(text3.getAttribute("visibility"))
            console.log(goalPos.getAttribute("cx"))
        }
    }
}
}

function spiderPos(data) {
    try {
        pose = data[3]
        //spiderLocation[i][0] * 100 * scale + pad, (12 * yDim * scale + 20) - (spiderLocation[i][1] * 100 * scale), 10 * scale, 0, 2 * Math.PI
        if (JSON.stringify(pose) != lastPose) {
            lastPose = JSON.stringify(pose)
            if (posInd < 50) {
                posInd++;
                newPos = positions.pop()
                newPos.setAttribute("cx", pose[0] * 100 * scale + pad)
                newPos.setAttribute("fill", "#2f547d")
                newPos.setAttribute("cy", (12 * yDim * scale + 20) - (pose[1] * 100 * scale))
                positions.unshift(newPos)
            }
            else {
                newPos = positions.pop()
                newPos.setAttribute("cx", pose[0] * 100 * scale + pad)
                newPos.setAttribute("cy", (12 * yDim * scale + 20) - (pose[1] * 100 * scale))
                positions.unshift(newPos)
            }
            updateOpacity()
        }
    }
    catch (error) {
        console.log("ERROR GETTING SPIDER POSITION " + error)
    }
}
function stations(data) {
    try{
    station_data = data[9]
    document.getElementById("tvoc1").innerHTML = station_data["humidity"]
    document.getElementById("temp1").innerHTML = station_data["temperature"]
    document.getElementById("light1").innerHTML = station_data["luminosity"]
    document.getElementById("oxy1").innerHTML = station_data["o2"]
    document.getElementById("co1").innerHTML = station_data["co2"]

    station_data = data[11]
    document.getElementById("tvoc2").innerHTML = station_data["humidity"]
    document.getElementById("temp2").innerHTML = station_data["temperature"]
    document.getElementById("light2").innerHTML = station_data["luminosity"]
    document.getElementById("oxy2").innerHTML = station_data["o2"]
    document.getElementById("co2").innerHTML = station_data["co2"]

    station_data = data[12]
    document.getElementById("tvoc3").innerHTML = station_data["humidity"]
    document.getElementById("temp3").innerHTML = station_data["temperature"]
    document.getElementById("light3").innerHTML = station_data["luminosity"]
    document.getElementById("oxy3").innerHTML = station_data["o2"]
    document.getElementById("co3").innerHTML = station_data["co2"]
    }
    catch{
        console.log("err")
    }
}

function update() { //Function gets data from the server and updates it on the graphical interface every 2 seconds.
    $.get("./update", function (data) {
        spiderPos(data)
        get_routes(data)
        stations(data)
        
        try{
        for (let i = 0; i < data[4].length; i++) {
            let arduino = data[4][i]['arduino']
            let line = data[4][i]['line']
            let sensor = data[4][i]['sensorID']
            let cap = data[4][i]['cap']
            let name = data[4][i]['plantName']
            let index = ((arduino - 1) * 36 + line * 6 + sensor)

            if (cap == null && empty_slots[index].getAttribute('fill') != "pink") {
                empty_slots[index].setAttribute("fill", "red");
            }
            else if (empty_slots[index].getAttribute('fill') != "pink") {
                empty_slots[index].setAttribute("fill", "green");
            }
            empty_slots[index].setAttribute("stroke", "none");
            if (name != null && empty_slots[index].getAttribute('fill') != "pink") {
                empty_slots[index].removeEventListener('click', add)
                empty_slots[index].addEventListener('click', updt)
            }
            else if (empty_slots[index].getAttribute('fill') != "pink") {
                empty_slots[index].setAttribute("fill", "yellow");
            }
        }
        data[5]!=null ? document.getElementById("plantsNo").innerHTML = JSON.parse(data[5]) : console.log("Plants not found")
        data[0]!=null ? document.getElementById("status").innerHTML = data[0] : console.log("Status not found")
        data[8]!=null ? document.getElementById("water").innerHTML = data[8] / 1000 : console.log("Water not found")
        data[13]!=null ? document.getElementById("moves").innerHTML = data[13] : console.log("No move data")
        data[10]!=null ? document.getElementById("voltage").innerHTML = data[10].toFixed(2) : console.log("Voltage not found")
        data[14]!=null ? document.getElementById("walked").innerHTML = data[14].toFixed(2) : console.log("Walked distance not found")
        console.log(data[11])
        console.log(data[12])
    }
    catch(err){
        console.log(err);
    }
    goal(data)
    });

    $.get("./deleted", function (data) { //Checks if any of the plants have been deleted.
        for (let i = 0; i < data.length; i++) {
            empty_slots[data[i]].setAttribute("fill", "white");
            empty_slots[data[i]].setAttribute("stroke", "black");
            empty_slots[data[i]].removeEventListener('click', updt)
            empty_slots[data[i]].addEventListener('click', add)
        }
    })
}

var inrvalId = setInterval(function () { //Calls the update function every 2 seconds.
    update();
}, 2000)

