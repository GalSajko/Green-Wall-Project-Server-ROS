scale = 3.8

//Funkcija v novem oknu odpre obrazec za dodajaje nove rastline
function add() { 
    $.post('./add',this.id);
    window.open('http://192.168.1.25:5000/add', '_blank');
    
}
function deleteCirc(){
    var element = document.getElementById("test")
    element.remove()
}
function cleanLines(){
    for(let i = 0; i<lines.length; i++){
        lines[i].remove()
    }
    for(let i = 0; i< bubbleElems.length; i++){
        bubbleElems[i].remove()
    }
    for(let i = 0; i< pathPoints.length; i++){
        pathPoints[i].remove()
    }
    for(let i = 0; i< texts.length; i++){
        texts[i].remove()
    }
    lines = []
    bubbleElems = []
    pathPoints = []
    texts = []
    if (goalPos != null){
    goalPos.remove()
    }
    goalPos = null
}
//Funkcija v novem oknu odpre obrazec za posodabljanje obstoječe rastline
function updt() { 
    $.post('./getId',this.id, function(response){
        window.open('http://192.168.1.25:5000/updt/'+response, '_blank');
    }); 
}

//Funkcija požene generiranje poti
$(".link").on("click", function(e) {
    $.post("./start", function (data) {
    })
});
function updateOpacity(){
    for(let x = 0; x< positions.length; x++){
        if(x<=posInd)
        positions[x].setAttribute('opacity', 1 - (x)*0.02)
    }
}

//Uporabljene globalne spremenljivke
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
document.getElementById("plantName").innerHTML = "Not selected"
document.getElementById("plantNameLatin").innerHTML = "Not selected"
document.getElementById("areas").innerHTML = "Not selected"
document.getElementById("needs").innerHTML = "Not selected"
document.getElementById("cha").innerHTML = "Not selected"
//Risanje pinov
for (var x = 0; x < numPinsX; x++) {
    for (var y = numPinsY - 1; y >= 0; y--) {
        pinLocations.push([pad + x * xDim * scale, pad + y * yDim * scale])
        var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id','circle');
        circle.setAttribute("cx", pad + x * xDim * scale); 
        circle.setAttribute("cy", pad + y * yDim * scale); 
        circle.setAttribute("r", 3); 
        circle.setAttribute("fill", "gray");
        $("svg").append(circle);
    }
}

//Risanje praznih krogcev za senzorje
let n = 0;
let k = 0;
let index = 0;
let panel = 0;
for(let i = 0; i < 3; i++){
    panel++
    k=0;
    n=0;
    for(let j = 0; j < 36; j++){
        if(n == 6){
            k++;
            n=0;
        }
        var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id',panel+':'+(k+1)+':'+(n+1));
        circle.setAttribute("cx", 30 * scale + pad + n* xDim*scale + i*6*scale*xDim);
        circle.setAttribute("cy", (12 * yDim * scale + 20)-((299-k*yDim) * scale - 7.5 * scale)); 
        circle.setAttribute("r", 2.5*Math.PI);
        circle.setAttribute("stroke", "black");
        circle.setAttribute("fill","white")
        circle.addEventListener('click', add);
        $("svg").append(circle);
        n++;
        empty_slots.push(circle)
    }
}
    
for(let i = 0; i < 3; i++){
    panel++;
    k=0;
    n=0;
    for(let j = 0; j < 36; j++){
        if(n == 6){
            k++;
            n=0;
        }
        var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id',panel+':'+(k+1)+':'+(n+1));
        circle.setAttribute("cx", 30 * scale + pad + n* xDim*scale + i*6*scale*xDim);
        circle.setAttribute("cy", (12 * yDim * scale + 20)-((299-(k+6)*yDim) * scale - 7.5 * scale));
        circle.setAttribute("r", 2.5*Math.PI); 
        circle.setAttribute("stroke", "black"); 
        circle.setAttribute("fill","white")
        circle.addEventListener('click', add);     
        $("svg").append(circle);
        n++;
        empty_slots.push(circle)
    }
}


//Nastavljanje višine in širine svg okna
width = 40 + (numPinsX - 1) * xDim * scale
height = 350 * scale
document.getElementById("canv").setAttribute('width', width)
document.getElementById("canv").setAttribute('height', height)

//Funkcija nariše obrobo panelov
function draw_grid(){

    //leva stranica
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1','10');
    newLine.setAttribute('y1','10');
    newLine.setAttribute('x2','10');
    newLine.setAttribute('y2',30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //zgornja stranica
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1','10');
    newLine.setAttribute('y1','10');
    newLine.setAttribute('x2',30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2','10');
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //spodnja stranica
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1','10');
    newLine.setAttribute('y1',30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute('x2',30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2',30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //desna stranica
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1',30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y1','10');
    newLine.setAttribute('x2',30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2',30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //leva mejna
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1',70 + ((numPinsX / 3) - 1) * xDim * scale);
    newLine.setAttribute('y1','10');
    newLine.setAttribute('x2',70 + ((numPinsX / 3) - 1) * xDim * scale);
    newLine.setAttribute('y2',30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //desna mejna
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1',30 + ((numPinsX / 3) * 2 - 1) * xDim * scale);
    newLine.setAttribute('y1','10');
    newLine.setAttribute('x2',30 + ((numPinsX / 3) * 2 - 1) * xDim * scale);
    newLine.setAttribute('y2',30 + (numPinsY - 1) * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);

    //sredina
    var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
    newLine.setAttribute('id','line3');
    newLine.setAttribute('x1','10');
    newLine.setAttribute('y1',30 + 6 * yDim * scale);
    newLine.setAttribute('x2',30 + (numPinsX - 1) * xDim * scale);
    newLine.setAttribute('y2',30 + 6 * yDim * scale);
    newLine.setAttribute("stroke", "black")
    $("svg").append(newLine);
}
draw_grid()
//priprava korgcev za pozicije
for(let i = 0; i<50; i++){
    var circle = document.createElementNS("http://www.w3.org/2000/svg", "circle");
        circle.setAttribute('id',"spiderPos");
        circle.setAttribute("cx", 0* 100 * scale + pad);
        circle.setAttribute("cy", (12 * yDim * scale + 20) - (0 * 100 * scale));
        circle.setAttribute("r", 2*Math.PI+6); 
        circle.setAttribute("stroke", "none"); 
        circle.setAttribute("fill","none")
        circle.setAttribute("opacity",0)
        circle.addEventListener('click', add);     
        $("svg").append(circle);
        positions.unshift(circle)
}
function get_routes(data){
    try{
        current = data[6]
        next = data[7]
        stringCurrent = ""
        stringNext = ""
        for(let i = 1; i<current.length-1;i++){
            stringCurrent = stringCurrent+" "+JSON.parse(current[i])['index']+","
            stringNext = stringNext+" "+JSON.parse(next[i])['index']+","
        }
        stringCurrent = stringCurrent+" "+JSON.parse(current[current.length-1])['index']
        stringNext = stringNext+" "+JSON.parse(next[current.length-1])['index']
        document.getElementById("routeCurr").innerHTML = stringCurrent
        document.getElementById("routeNext").innerHTML = stringNext
    }
    catch{
        console.log("NO ROUTE WAS GIVEN")
    }
}
function goal(data){
        
        coords = data[1]
        index = data[2]
        let txtCont1 = ""
        let txtCont2 = ""
        let name_latin =""
        let areas = ""
        let needs = ""
        let charact = ""
        
        cleanLines()
            
    
        if (lines.length ==0){
            for(let i = 0; i<coords.length-1; i++){

                //Risanje črt ob prvi generaciji poti
                var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
                newLine.setAttribute('id','line'+i);
                newLine.setAttribute('x1',(JSON.parse(coords[i]))["x"]* 100 * scale + pad);
                newLine.setAttribute('y1',(12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale));
                newLine.setAttribute('x2',(JSON.parse(coords[i+1]))["x"]* 100 * scale + pad);
                newLine.setAttribute('y2',(12 * yDim * scale + 20) - ((JSON.parse(coords[i+1])["y"]) * 100 * scale - 7.5 * scale));
                newLine.setAttribute("stroke-width", 5)
                newLine.setAttribute("stroke", "pink")
                $("svg").append(newLine);

                //Risanje roza pik za označevanje vozlišč na poti
                var pathPoint = document.createElementNS('http://www.w3.org/2000/svg','circle');
                pathPoint.setAttribute('id',"pathPoint"+i);
                pathPoint.setAttribute("cx", (JSON.parse(coords[i]))["x"]* 100 * scale + pad); 
                pathPoint.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale)); 
                pathPoint.setAttribute("r", 2.5*Math.PI+3);
                pathPoint.setAttribute("fill","pink")
                $("svg").append(pathPoint);
                lines.push(newLine)
                pathPoints.push(pathPoint)
            }

            //Zadnja črta na poti
            var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
            newLine.setAttribute('id','line'+coords.length);
            newLine.setAttribute('x1',(JSON.parse(coords[coords.length-1]))["x"]* 100 * scale + pad);
            newLine.setAttribute('y1',(12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length-1])["y"]) * 100 * scale - 7.5 * scale));
            newLine.setAttribute('x2',(JSON.parse(coords[0]))["x"]* 100 * scale + pad);
            newLine.setAttribute('y2',(12 * yDim * scale + 20) - ((JSON.parse(coords[0])["y"]) * 100 * scale - 7.5 * scale));
            newLine.setAttribute("stroke-width", 5)
            newLine.setAttribute("stroke", "pink")
            $("svg").append(newLine);
            lines.push(newLine)

            //Zadnje vozlišče na poti
            var pathPoint = document.createElementNS('http://www.w3.org/2000/svg','circle');
            pathPoint.setAttribute('id',"pathPoint");
            pathPoint.setAttribute("cx", (JSON.parse(coords[coords.length-1]))["x"]* 100 * scale + pad); 
            pathPoint.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length-1])["y"]) * 100 * scale - 7.5 * scale));
            pathPoint.setAttribute("r", 2.5*Math.PI+3); 
            pathPoint.setAttribute("fill","pink")
            $("svg").append(pathPoint)
            pathPoints.push(pathPoint)

            //Risanje trenutnega cilja robota (modra pika)
            goalPos = document.createElementNS('http://www.w3.org/2000/svg','circle');
            goalPos.setAttribute('id',"goalPos");
            goalPos.setAttribute("cx", (JSON.parse(coords[index]))["x"]* 100 * scale + pad); 
            goalPos.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale));
            goalPos.setAttribute("r", 2.5*Math.PI); 
            goalPos.setAttribute("fill","blue")
            $("svg").append(goalPos);
            if((12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale)< 150){
                //Kvadrat za oblaček
                var bubble = document.createElementNS("http://www.w3.org/2000/svg", "rect");
                bubble.setAttribute("x", parseInt(goalPos.getAttribute('cx'))-225);
                bubble.setAttribute("y", parseInt(goalPos.getAttribute('cy'))+15);
                bubble.setAttribute("width", "450");
                bubble.setAttribute("height", "180");
                bubble.setAttribute("rx", "10");
                bubble.setAttribute("fill","white")
                bubble.setAttribute("stroke","black")
                $("svg").append(bubble);
                bubbleElems.push(bubble)

                //Obroba puščice
                var arrow = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
                arrow.setAttribute("stroke","black")
                arrow.setAttribute("fill","white")
                arrow.setAttribute("points",(goalPos.getAttribute('cx')-7)+","+((parseInt(goalPos.getAttribute('cy')))+15)+" " +goalPos.getAttribute('cx')+","+goalPos.getAttribute('cy')+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+((parseInt(goalPos.getAttribute('cy')))+15));
                $("svg").append(arrow);
                bubbleElems.push(arrow)

                //Puščica
                var arrow2 = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
                arrow2.setAttribute("stroke","none")
                arrow2.setAttribute("fill","white")
                arrow2.setAttribute("points", (goalPos.getAttribute('cx')-7)+","+((parseInt(goalPos.getAttribute('cy')))+16)+" " +goalPos.getAttribute('cx')+","+goalPos.getAttribute('cy')+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+((parseInt(goalPos.getAttribute('cy')))+16));
                $("svg").append(arrow2);
                bubbleElems.push(arrow2)
                
                if(texts.length == 0){
                //Text za ime oz. informacijo o polnjenju
                var text = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text.setAttribute("x", goalPos.getAttribute('cx'));
                text.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+40);
                text.setAttribute("text-anchor", "middle");
                text.setAttribute("alignment-baseline", "middle");
                text.setAttribute("font-weight", "bold");
                text.setAttribute("visibility", "hidden");
                text.textContent = "Latin name:"
                $("svg").append(text);

                //Text za prikaz vlažnosti zemlje
                texts.push(text)
                var text2 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text2.setAttribute("x", goalPos.getAttribute('cx'));
                text2.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+60);
                text2.setAttribute("text-anchor", "middle");
                text2.setAttribute("alignment-baseline", "middle");
                text2.setAttribute("font-style", "italic");
                text2.setAttribute("visibility", "hidden");
                text2.textContent = "Epipremnum Pinnatum Neon";
                $("svg").append(text2);
                texts.push(text2)  

                var text3 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text3.setAttribute("x", goalPos.getAttribute('cx'));
                text3.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+80);
                text3.setAttribute("text-anchor", "middle");
                text3.setAttribute("alignment-baseline", "middle");
                text3.setAttribute("font-weight", "bold");
                text3.setAttribute("visibility", "hidden");
                text3.textContent = "Areas found:";
                $("svg").append(text3);
                texts.push(text3)  

                var text4 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text4.setAttribute("x", goalPos.getAttribute('cx'));
                text4.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+100);
                text4.setAttribute("text-anchor", "middle");
                text4.setAttribute("alignment-baseline", "middle");
                text4.setAttribute("font-style", "italic");
                text4.setAttribute("visibility", "hidden");
                text4.textContent = "Forest floors, rock crevices, river banks, coastal cliffs";
                $("svg").append(text4);
                texts.push(text4)  

                var text5 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text5.setAttribute("x", goalPos.getAttribute('cx'));
                text5.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+120);
                text5.setAttribute("text-anchor", "middle");
                text5.setAttribute("alignment-baseline", "middle");
                text5.setAttribute("font-weight", "bold");
                text5.setAttribute("visibility", "hidden");
                text5.textContent = "Plant needs:";
                $("svg").append(text5);
                texts.push(text5)  

                var text6 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text6.setAttribute("x", goalPos.getAttribute('cx'));
                text6.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+140);
                text6.setAttribute("text-anchor", "middle");
                text6.setAttribute("alignment-baseline", "middle");
                text6.setAttribute("font-style", "italic");
                text6.setAttribute("visibility", "hidden");
                text6.textContent = "150 ml water / 96 hours, moderate sunlight";
                $("svg").append(text6);
                texts.push(text6)  

                var text7 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text7.setAttribute("x", goalPos.getAttribute('cx'));
                text7.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+160);
                text7.setAttribute("text-anchor", "middle");
                text7.setAttribute("alignment-baseline", "middle");
                text7.setAttribute("font-weight", "bold");
                text7.setAttribute("visibility", "hidden");
                text7.textContent = "Time since last watering:";
                $("svg").append(text7);
                texts.push(text7)  

                var text8 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text8.setAttribute("x", goalPos.getAttribute('cx'));
                text8.setAttribute("y", (parseInt(goalPos.getAttribute('cy')))+180);
                text8.setAttribute("text-anchor", "middle");
                text8.setAttribute("alignment-baseline", "middle");
                text8.setAttribute("font-style", "italic");
                text8.setAttribute("visibility", "hidden");
                text8.textContent = hours+" hours";
                $("svg").append(text8);
                texts.push(text8)  

                
                text9.setAttribute("x", goalPos.getAttribute('cx'));
                text9.setAttribute("y", goalPos.getAttribute('cy')-90);
                text9.setAttribute("text-anchor", "middle");
                text9.setAttribute("font-style", "italic");
                text9.setAttribute("visibility", "visible");
                text9.setAttribute("font-size", "30px")
                text9.setAttribute("alignment-baseline", "middle");
                text9.textContent = "Refilling";
                $("svg").append(text9);
                texts.push(text9)  
                }
            }
            else{
                var bubble = document.createElementNS("http://www.w3.org/2000/svg", "rect");
                bubble.setAttribute("x", parseInt(goalPos.getAttribute('cx'))-225);
                bubble.setAttribute("y", parseInt(goalPos.getAttribute('cy'))-194);
                bubble.setAttribute("width", "450");
                bubble.setAttribute("height", "180");
                bubble.setAttribute("rx", "10");
                bubble.setAttribute("fill","white")
                bubble.setAttribute("stroke","black")
                $("svg").append(bubble);
                bubbleElems.push(bubble)

                //Obroba puščice
                var arrow = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
                arrow.setAttribute("stroke","black")
                arrow.setAttribute("fill","white")
                arrow.setAttribute("points",(goalPos.getAttribute('cx')-7)+","+(goalPos.getAttribute('cy')-15)+" " +goalPos.getAttribute('cx')+","+goalPos.getAttribute('cy')+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+(goalPos.getAttribute('cy')-15));
                $("svg").append(arrow);
                bubbleElems.push(arrow)

                //Puščica
                var arrow2 = document.createElementNS("http://www.w3.org/2000/svg", "polygon");
                arrow2.setAttribute("stroke","none")
                arrow2.setAttribute("fill","white")
                arrow2.setAttribute("points", (goalPos.getAttribute('cx')-7)+","+(goalPos.getAttribute('cy')-16)+" " +goalPos.getAttribute('cx')+","+goalPos.getAttribute('cy')+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+(goalPos.getAttribute('cy')-16));
                $("svg").append(arrow2);
                bubbleElems.push(arrow2)
                
                if(texts.length == 0){
                //Text za ime oz. informacijo o polnjenju
                var text = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text.setAttribute("x", goalPos.getAttribute('cx'));
                text.setAttribute("y", goalPos.getAttribute('cy')-170);
                text.setAttribute("text-anchor", "middle");
                text.setAttribute("alignment-baseline", "middle");
                text.setAttribute("font-weight", "bold");
                text.setAttribute("visibility", "hidden");
                text.textContent = "Latin name:"
                $("svg").append(text);

                //Text za prikaz vlažnosti zemlje
                texts.push(text)
                var text2 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text2.setAttribute("x", goalPos.getAttribute('cx'));
                text2.setAttribute("y", goalPos.getAttribute('cy')-150);
                text2.setAttribute("text-anchor", "middle");
                text2.setAttribute("alignment-baseline", "middle");
                text2.setAttribute("font-style", "italic");
                text2.setAttribute("visibility", "hidden");
                text2.textContent = "Epipremnum Pinnatum Neon";
                $("svg").append(text2);
                texts.push(text2)  

                var text3 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text3.setAttribute("x", goalPos.getAttribute('cx'));
                text3.setAttribute("y", goalPos.getAttribute('cy')-130);
                text3.setAttribute("text-anchor", "middle");
                text3.setAttribute("alignment-baseline", "middle");
                text3.setAttribute("font-weight", "bold");
                text3.setAttribute("visibility", "hidden");
                text3.textContent = "Areas found:";
                $("svg").append(text3);
                texts.push(text3)  

                var text4 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text4.setAttribute("x", goalPos.getAttribute('cx'));
                text4.setAttribute("y", goalPos.getAttribute('cy')-110);
                text4.setAttribute("text-anchor", "middle");
                text4.setAttribute("alignment-baseline", "middle");
                text4.setAttribute("font-style", "italic");
                text4.setAttribute("visibility", "hidden");
                text4.textContent = "Forest floors, rock crevices, river banks, coastal cliffs";
                $("svg").append(text4);
                texts.push(text4)  

                var text5 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text5.setAttribute("x", goalPos.getAttribute('cx'));
                text5.setAttribute("y", goalPos.getAttribute('cy')-90);
                text5.setAttribute("text-anchor", "middle");
                text5.setAttribute("alignment-baseline", "middle");
                text5.setAttribute("font-weight", "bold");
                text5.setAttribute("visibility", "hidden");
                text5.textContent = "Plant needs:";
                $("svg").append(text5);
                texts.push(text5)  

                var text6 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text6.setAttribute("x", goalPos.getAttribute('cx'));
                text6.setAttribute("y", goalPos.getAttribute('cy')-70);
                text6.setAttribute("text-anchor", "middle");
                text6.setAttribute("alignment-baseline", "middle");
                text6.setAttribute("font-style", "italic");
                text6.setAttribute("visibility", "hidden");
                text6.textContent = "150 ml water / 96 hours, moderate sunlight";
                $("svg").append(text6);
                texts.push(text6)  

                var text7 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text7.setAttribute("x", goalPos.getAttribute('cx'));
                text7.setAttribute("y", goalPos.getAttribute('cy')-50);
                text7.setAttribute("text-anchor", "middle");
                text7.setAttribute("alignment-baseline", "middle");
                text7.setAttribute("font-weight", "bold");
                text7.setAttribute("visibility", "hidden");
                text7.textContent = "Time since last watering:";
                $("svg").append(text7);
                texts.push(text7)  

                var text8 = document.createElementNS("http://www.w3.org/2000/svg", "text");
                text8.setAttribute("x", goalPos.getAttribute('cx'));
                text8.setAttribute("y", goalPos.getAttribute('cy')-30);
                text8.setAttribute("text-anchor", "middle");
                text8.setAttribute("alignment-baseline", "middle");
                text8.setAttribute("font-style", "italic");
                text8.setAttribute("visibility", "hidden");
                text8.textContent = hours+" hours";
                $("svg").append(text8);
                texts.push(text8)  

                
                text9.setAttribute("x", goalPos.getAttribute('cx'));
                text9.setAttribute("y", goalPos.getAttribute('cy')-90);
                text9.setAttribute("text-anchor", "middle");
                text9.setAttribute("font-style", "italic");
                text9.setAttribute("visibility", "visible");
                text9.setAttribute("font-size", "30px")
                text9.setAttribute("alignment-baseline", "middle");
                text9.textContent = "Refilling";
                $("svg").append(text9);
                texts.push(text9)  
                }
            }
            if(index!=0){
                if(index > coords.length-1){
                    index = 0
                }
                console.log("here")
                //Pridobivanje informacij za izpis
                txtCont1 = JSON.parse(coords[index])["plantName"]
                txtCont2 = JSON.parse(coords[index])["cap"]
                name_latin = JSON.parse(coords[index])["latin_name"]
                needs = JSON.parse(coords[index])["needs"]
                areas = JSON.parse(coords[index])["areas"]
                charact = JSON.parse(coords[index])["characteristics"]
                var date = new Date(coords[index]["lastAlive"]*1000)
                var dateNow = new Date()
                var hours = Math.abs(dateNow - date) / 36e5;
                for(let x = 0; x < texts.length; x++){
                    texts[x].setAttribute("visibility", "visible")
                }
                text9.setAttribute("visibility", "hidden")
            }
            else{

                console.log("reset")
                txtCont2 = "Refilling!"
                for(let x = 0; x < texts.length; x++){
                    texts[x].setAttribute("visibility", "hidden")
                }
                text9.setAttribute("visibility", "visible")
            
            }
        }
    
        
    
}
function spiderPos(data){
    try{
        pose = data[3]
        //spiderLocation[i][0] * 100 * scale + pad, (12 * yDim * scale + 20) - (spiderLocation[i][1] * 100 * scale), 10 * scale, 0, 2 * Math.PI
        if(JSON.stringify(pose)!=lastPose){
            lastPose = JSON.stringify(pose)
            if(posInd<50){
                posInd++;
                newPos = positions.pop()
                newPos.setAttribute("cx",pose[0]* 100 * scale + pad)
                newPos.setAttribute("fill","#2f547d")
                newPos.setAttribute("cy",(12 * yDim * scale + 20) - (pose[1] * 100 * scale))  
                positions.unshift(newPos)
            }
            else{
                newPos = positions.pop()
                newPos.setAttribute("cx",pose[0]* 100 * scale + pad)
                newPos.setAttribute("cy",(12 * yDim * scale + 20) - (pose[1] * 100 * scale))
                positions.unshift(newPos)
            }
            updateOpacity()
    }
}
    catch(error){
        console.log("ERROR GETTING SPIDER POSITION "+ error)
    }
}
function stations(data){
    station_data = data[9]
    humidity = station_data["humidity"]
    /*
    <p>Temperature: <span id="temp1"></span></p>
            <p>Light Level: <span id="light1"></span></p>
            <p>Oxygen concentration: <span id="oxy1"></span></p>
            <p>CO2: <span id="co1"></span></p>
            <p>TVOC: <span id="tvoc1"></span></p>
    */
    document.getElementById("temp1").innerHTML = station_data["temperature"]
    document.getElementById("light1").innerHTML = station_data["luminosity"]
    document.getElementById("oxy1").innerHTML = station_data["o2"]
    document.getElementById("co1").innerHTML = station_data["co2"]
    

}
//Funkcija vsake 2 sekundi pridobi podatke iz strežnika in jih posodobi
function update(){
    
    //Pridobivanje informacij o aktivnih senzorjih
    $.get("./update", function (data) {
        for(let i = 0; i<data[4].length;i++){
            let arduino = data[4][i]['arduino']
            let line = data[4][i]['line']
            let sensor = data[4][i]['sensorID']
            let cap = data[4][i]['cap']
            let name = data[4][i]['plantName']
            let index = ((arduino-1)*36+line*6+sensor)
            
                if(cap == null && empty_slots[index].getAttribute('fill')!="pink"){
                    empty_slots[index].setAttribute("fill","red");
                }
                else if(empty_slots[index].getAttribute('fill')!="pink"){
                    empty_slots[index].setAttribute("fill","green");
                }
                empty_slots[index].setAttribute("stroke","none");
                if(name != null && empty_slots[index].getAttribute('fill')!="pink"){
                    empty_slots[index].removeEventListener('click',add)
                    empty_slots[index].addEventListener('click',updt)
                }
                else if(empty_slots[index].getAttribute('fill')!="pink"){
                    empty_slots[index].setAttribute("fill","yellow");
                }
        }
        document.getElementById("plantsNo").innerHTML= JSON.parse(data[5])
        document.getElementById("status").innerHTML = data[0]
        document.getElementById("water").innerHTML = data[8]/1000
        spiderPos(data)
        get_routes(data)
        stations(data)
        goal(data)
        
    });

    //Preverjanje izbrisanih rastlin
    $.get("./deleted",function(data){
        
        for(let i = 0; i<data.length;i++){
            empty_slots[data[i]].setAttribute("fill","white");
            empty_slots[data[i]].setAttribute("stroke","black");
            empty_slots[data[i]].removeEventListener('click',updt)
            empty_slots[data[i]].addEventListener('click',add)
        }
    })
}
var inrvalId = setInterval(function () {
    update();
}, 2000) 

