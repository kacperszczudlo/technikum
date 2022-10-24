window.onload = start;
let secret = Math.floor(Math.random()*100+1); //1-100
let runda = 0; //zlicza ilość prób
function start(){
    document.querySelector("#liczba").onkeyup = enter;
    document.querySelector("#sprawdz").onclick = sprawdz;
}
function enter()
    {
 if (event.keyCode === 13) {
     event.praventDefault();
     document.querySelector("#sprawdz").click();
 }
    };

function sprawdz(){
    runda++;//runda = runda + 1;
    let liczba =  parseInt(document.querySelector("#liczba").value);
    document.querySelector("#liczba").value="";
    if(isNaN(liczba)){
        document.querySelector("#wynik").innerHTML += `<span class= "error">
        Poproszę lizcbę.  Ilośc prób: ${runda}</span><br>`;
        return;
    }
    if(liczba===secret){
        document.querySelector("#wynik").innerHTML += `<span class= "success">
        Brawo zgałeś/aś liczbę:${liczba}. Ilośc prób: ${runda}</span><br>`;
        return;
    }
    if(liczba<secret){
        document.querySelector("#wynik").innerHTML += `<span class= "less">
        Za mała liczba:${liczba}. Ilośc prób: ${runda}</span><br>`;
        return;
    }
    if(liczba>secret){
        document.querySelector("#wynik").innerHTML += `<span class= "more">
        Za duża liczba:${liczba}. Ilośc prób: ${runda}</span><br>`;
        return;
    }
}