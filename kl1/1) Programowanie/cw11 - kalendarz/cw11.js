window.onload = function(){
    GetTime();
    -setInterval(GetTime,1000);
    const current = new Date();
    GetDate(current);
};
function GetTime(){
    document.querySelector("#timer").innerHTML = (new Date()).toLocaleTimeString();
    }
function GetDate(arg){
    const months = ["Styczeń","Luty","Marzec","Kwiecień","Maj","Czerwiec","Lipiec","Sierpień","Wrześnień","Październik","Listopad","Grudzień"];
    const days = ["Niedziela","Poniedziałek","Wtorek","Środa","Czwartek","Piątek","Sobota"];
    const card = {
        year: arg.getFullYear(),
        date: arg.getDate(),
        day: days[arg.getDay()],
        month: months[arg.getMonth()],
        setcolor: function(){
           switch(arg.getDay()){
               case 0 : return "sun";
               case 6 : return "sut";
               default : return "normal";
           }
        }
    }
    document.querySelector("#year").innerHTML = card.year;
    document.querySelector("#date").innerHTML = card.date;
    document.querySelector("#day").innerHTML = card.day;
    document.querySelector("#month").innerHTML = card.month;
    document.querySelector("#day").className = card.setcolor();
}//uruchamiana jest funkcja, która przekształca date wyjściową na tą wybraną w okienku
 //- zmiana wartości w okienku
document.querySelector("#now").onchange = function () {
    GetDate(new Date(document.querySelector("#now").value));
}
