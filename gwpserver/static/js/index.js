scale = 2.8

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
    lines = []
    bubbleElems = []
    pathPoints = []
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
        positions[x].setAttribute('opacity', 1.0 - x*0.02)
    }
}

//Uporabljene globalne spremenljivke
var pathPoints = []
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
        circle.setAttribute("r", 2); 
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
        circle.setAttribute("r", 2*Math.PI);
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
        circle.setAttribute("r", 2*Math.PI); 
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
    newLine.setAttribute('x1',60 + ((numPinsX / 3) - 1) * xDim * scale);
    newLine.setAttribute('y1','10');
    newLine.setAttribute('x2',60 + ((numPinsX / 3) - 1) * xDim * scale);
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
//Funkcija vsake 2 sekundi pridobi podatke iz strežnika in jih posodobi
function update(){
    
    //Pridobivanje informacij o aktivnih senzorjih
    $.get("./update", function (data) {
        for(let i = 0; i<data.length;i++){
            let arduino = data[i]['arduino']
            let line = data[i]['line']
            let sensor = data[i]['sensorID']
            let cap = data[i]['cap']
            let name = data[i]['plantName']
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
    $.get('./spider_position',function(data){
        try{
        pose = data["pose"]
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
    catch{
        console.log("ERROR GETTING SPIDER POSITION")
    }
        
    })
    //Risanje poti in oblačka
    $.get("./goal", function(data){
        try{
        coords = data[0]
        index = data[1]
        let txtCont1 = ""
        let txtCont2 = ""
        let name_latin =""
        let areas = ""
        let needs = ""
        let charact = ""
        if (JSON.stringify(data) != JSON.stringify(lastRoute)){
            cleanLines()
        }
        if (lines.length ==0){
            for(let i = 0; i<coords.length-1; i++){
                if(index!=0){

                    //Pridobivanje informacij za izpis
                    txtCont1 = JSON.parse(coords[index])["plantName"]
                    txtCont2 = JSON.parse(coords[index])["cap"]
                    name_latin = JSON.parse(coords[index])["latin_name"]
                    needs = JSON.parse(coords[index])["needs"]
                    areas = JSON.parse(coords[index])["areas"]
                    charact = JSON.parse(coords[index])["characteristics"]
                }
                else{
                    txtCont2 = "Refilling!"
                }

                //Risanje črt ob prvi generaciji poti
                var newLine = document.createElementNS('http://www.w3.org/2000/svg','line');
                newLine.setAttribute('id','line'+i);
                newLine.setAttribute('x1',(JSON.parse(coords[i]))["x"]* 100 * scale + pad);
                newLine.setAttribute('y1',(12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale));
                newLine.setAttribute('x2',(JSON.parse(coords[i+1]))["x"]* 100 * scale + pad);
                newLine.setAttribute('y2',(12 * yDim * scale + 20) - ((JSON.parse(coords[i+1])["y"]) * 100 * scale - 7.5 * scale));
                newLine.setAttribute("stroke-width", 4)
                newLine.setAttribute("stroke", "pink")
                $("svg").append(newLine);

                //Risanje roza pik za označevanje vozlišč na poti
                var pathPoint = document.createElementNS('http://www.w3.org/2000/svg','circle');
                pathPoint.setAttribute('id',"pathPoint"+i);
                pathPoint.setAttribute("cx", (JSON.parse(coords[i]))["x"]* 100 * scale + pad); 
                pathPoint.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale)); 
                pathPoint.setAttribute("r", 2*Math.PI+3);
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
            newLine.setAttribute("stroke-width", 4)
            newLine.setAttribute("stroke", "pink")
            $("svg").append(newLine);
            lines.push(newLine)

            //Zadnje vozlišče na poti
            var pathPoint = document.createElementNS('http://www.w3.org/2000/svg','circle');
            pathPoint.setAttribute('id',"pathPoint");
            pathPoint.setAttribute("cx", (JSON.parse(coords[coords.length-1]))["x"]* 100 * scale + pad); 
            pathPoint.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length-1])["y"]) * 100 * scale - 7.5 * scale));
            pathPoint.setAttribute("r", 2*Math.PI+3); 
            pathPoint.setAttribute("fill","pink")
            $("svg").append(pathPoint)
            pathPoints.push(pathPoint)

            //Risanje trenutnega cilja robota (modra pika)
            goalPos = document.createElementNS('http://www.w3.org/2000/svg','circle');
            goalPos.setAttribute('id',"goalPos");
            goalPos.setAttribute("cx", (JSON.parse(coords[index]))["x"]* 100 * scale + pad); 
            goalPos.setAttribute("cy", (12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale));
            goalPos.setAttribute("r", 2*Math.PI); 
            goalPos.setAttribute("fill","blue")
            $("svg").append(goalPos);

            //Kvadrat za oblaček
            var bubble = document.createElementNS("http://www.w3.org/2000/svg", "rect");
            bubble.setAttribute("x", goalPos.getAttribute('cx')-50);
            bubble.setAttribute("y", goalPos.getAttribute('cy')-115);
            bubble.setAttribute("width", "100");
            bubble.setAttribute("height", "100");
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

            //Text za ime oz. informacijo o polnjenju
            var text = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text.setAttribute("x", goalPos.getAttribute('cx'));
            text.setAttribute("y", goalPos.getAttribute('cy')-75);
            text.setAttribute("text-anchor", "middle");
            text.setAttribute("alignment-baseline", "middle");
            
            $("svg").append(text);
            document.getElementById("plantName").innerHTML = txtCont1
            document.getElementById("plantNameLatin").innerHTML = name_latin
            document.getElementById("areas").innerHTML = areas
            document.getElementById("needs").innerHTML = needs
            document.getElementById("cha").innerHTML = charact

            //Text za prikaz vlažnosti zemlje
            bubbleElems.push(text)
            var text2 = document.createElementNS("http://www.w3.org/2000/svg", "text");
            text2.setAttribute("x", goalPos.getAttribute('cx'));
            text2.setAttribute("y", goalPos.getAttribute('cy')-55);
            text2.setAttribute("text-anchor", "middle");
            text2.setAttribute("alignment-baseline", "middle");
            text2.textContent = txtCont2;
            $("svg").append(text2);
            bubbleElems.push(text2)  
        }
    
        else{
            for(let i = 0; i<coords.length-1; i++){
                if(index!=0){

                    //Pridobivanje informacij za izpis
                    txtCont1 = JSON.parse(coords[index])["plantName"]
                    txtCont2 = JSON.parse(coords[index])["cap"]
                    name_latin = JSON.parse(coords[index])["latin_name"]
                    needs = JSON.parse(coords[index])["needs"]
                    areas = JSON.parse(coords[index])["areas"]
                    charact = JSON.parse(coords[index])["characteristics"]
                }
                else{
                    txtCont2 = "Refilling!"
                }

                //Posodobitev lokacij črt
                lines[i].setAttribute('x1',(JSON.parse(coords[i]))["x"]* 100 * scale + pad);
                lines[i].setAttribute('y1',(12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale));
                lines[i].setAttribute('x2',(JSON.parse(coords[i+1]))["x"]* 100 * scale + pad);
                lines[i].setAttribute('y2',(12 * yDim * scale + 20) - ((JSON.parse(coords[i+1])["y"]) * 100 * scale - 7.5 * scale));

                //Posodobitev lokacij vozlišč
                pathPoints[i].setAttribute('cx',(JSON.parse(coords[i]))["x"]* 100 * scale + pad)
                pathPoints[i].setAttribute('cy',(12 * yDim * scale + 20) - ((JSON.parse(coords[i])["y"]) * 100 * scale - 7.5 * scale))
            }

            //Posodobitev lokacije zadnje črte
            lines[coords.length-1].setAttribute('x1',(JSON.parse(coords[coords.length-1]))["x"]* 100 * scale + pad);
            lines[coords.length-1].setAttribute('y1',(12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length-1])["y"]) * 100 * scale - 7.5 * scale));
            lines[coords.length-1].setAttribute('x2',(JSON.parse(coords[0]))["x"]* 100 * scale + pad);
            lines[coords.length-1].setAttribute('y2',(12 * yDim * scale + 20) - ((JSON.parse(coords[0])["y"]) * 100 * scale - 7.5 * scale));

            //Posodobitev lokacije zadnjega vozlišča
            pathPoints[coords.length-1].setAttribute('cx',(JSON.parse(coords[coords.length-1]))["x"]* 100 * scale + pad)
            pathPoints[coords.length-1].setAttribute('cy',(12 * yDim * scale + 20) - ((JSON.parse(coords[coords.length-1])["y"]) * 100 * scale - 7.5 * scale))

            //Posodobitev ciljnega vozlišča
            goalPos.setAttribute('cx',(JSON.parse(coords[index]))["x"]* 100 * scale + pad)
            goalPos.setAttribute('cy',(12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale))
            goalPos.setAttribute('fill','blue')

            //Posodobitev lokacije in texta v oblačku
            if(numPinsY*yDim*scale>(12 * yDim * scale + 20) - ((JSON.parse(coords[index])["y"]) * 100 * scale - 7.5 * scale)){
                bubbleElems[0].setAttribute("x",goalPos.getAttribute('cx')-50)
                bubbleElems[0].setAttribute("y",parseInt(goalPos.getAttribute('cy'))-115)
                bubbleElems[1].setAttribute("points",(goalPos.getAttribute('cx')-7)+","+(parseInt(goalPos.getAttribute('cy'))-15)+" " +goalPos.getAttribute('cx')+","+(parseInt(goalPos.getAttribute('cy')))+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+(parseInt(goalPos.getAttribute('cy'))-15))
                bubbleElems[2].setAttribute("points",(goalPos.getAttribute('cx')-7)+","+(parseInt(goalPos.getAttribute('cy'))-16)+" " +goalPos.getAttribute('cx')+","+(parseInt(goalPos.getAttribute('cy')))+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+(parseInt(goalPos.getAttribute('cy'))-16))
                bubbleElems[3].setAttribute("x",goalPos.getAttribute('cx'))
                document.getElementById("plantName").innerHTML = txtCont1
                document.getElementById("plantNameLatin").innerHTML = name_latin
                document.getElementById("areas").innerHTML = areas
                document.getElementById("needs").innerHTML = needs
                document.getElementById("cha").innerHTML = charact
                bubbleElems[3].setAttribute("y",parseInt(goalPos.getAttribute('cy'))-75)//75
                bubbleElems[4].setAttribute("x",goalPos.getAttribute('cx'))
                bubbleElems[4].textContent=txtCont2
                bubbleElems[4].setAttribute("y",parseInt(goalPos.getAttribute('cy'))-55) //55 
            }
            else{
                bubbleElems[0].setAttribute("x",goalPos.getAttribute('cx')-50)
                bubbleElems[0].setAttribute("y",parseInt(goalPos.getAttribute('cy'))+15)
                bubbleElems[1].setAttribute("points",(goalPos.getAttribute('cx')-7)+","+(parseInt(goalPos.getAttribute('cy'))+15)+" " +goalPos.getAttribute('cx')+","+(parseInt(goalPos.getAttribute('cy')))+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+(parseInt(goalPos.getAttribute('cy'))+15))
                bubbleElems[2].setAttribute("points",(goalPos.getAttribute('cx')-7)+","+(parseInt(goalPos.getAttribute('cy'))+16)+" " +goalPos.getAttribute('cx')+","+(parseInt(goalPos.getAttribute('cy')))+" "+(parseInt(goalPos.getAttribute('cx'))+7)+","+(parseInt(goalPos.getAttribute('cy'))+16))
                bubbleElems[3].setAttribute("x",goalPos.getAttribute('cx'))
                document.getElementById("plantName").innerHTML = txtCont1
                bubbleElems[3].setAttribute("y",parseInt(goalPos.getAttribute('cy'))+55)//75
                bubbleElems[4].setAttribute("x",goalPos.getAttribute('cx'))
                bubbleElems[4].textContent=txtCont2
                bubbleElems[4].setAttribute("y",parseInt(goalPos.getAttribute('cy'))+75) //55 
            }
        }
    }
    catch (error){
        console.log("ERROR GETTING GOAL POSITION "+ error)
    }
    })
    $.get('./get_routes', function(data){
        try{
        current = data[0]
        next = data[1]
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
    })
    $.get('./get_plant_num', function(data){
        document.getElementById("plantsNo").innerHTML= JSON.parse(data)
    })
    $.get('./get_status', function(data){
        document.getElementById("status").innerHTML = data
    })
}
var inrvalId = setInterval(function () {
    update();
}, 2000) 

