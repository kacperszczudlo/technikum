window.onload = function (){//funkcja anonimowa
     let t1 = [12,56,"trzeci",[23,78,true],45,89];
     console.log(t1);
     //alert(t1);
     document.querySelector("#t1").innerHTML = t1+"<br>";
     t1[1] = "fajna liczba tu była";
     document.querySelector("#t1").innerHTML += t1+"<br>";
    // t1[10] = "uppsss";
    //document.querySelector("#t1").innerHTML += t1+"<br>";
    t1.push("pushony nowy");//dodaje na koniec
    document.querySelector("#t1").innerHTML += t1+"<br>";
    t1.unshift("na początek");//dodaje na poczatek
    document.querySelector("#t1").innerHTML += t1+"<br>";
    let elem = t1.pop();//zabiera z końca
    document.querySelector("#t1").innerHTML += t1+"<br>";
    t1.shift();//zabiera z początku
    document.querySelector("#t1").innerHTML += t1+"<br>";
   
    document.querySelector("#t2").innerHTML = toList(t1);

};
function toList(dane){
     let html = "<ol>";
     for(let i=0;i<dane.length;i++){
          html += "<li>"+dane[i]+"</li>";
     }
     html += "</ol>";
     return html;
}