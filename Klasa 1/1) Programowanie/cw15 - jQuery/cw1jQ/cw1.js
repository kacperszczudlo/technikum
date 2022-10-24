//window.onload = function() {};
// $ --> document.querySelector()
$(document).ready(function () {
    $("#btn1").click(function () {
      //alert("gggg");
      let imie = $("#imie").val();
      if (imie.trim() != "") {
        $("#wynik").html(imie + " Dzisiaj jest: " + (new Date()));
      } else {
        $("#wynik").html("Szkoda, że się nie przedstawiłeś Dzisiaj jest: " + (new Date()));
      }
  
    });
  }); 
 //console.log($("#wynik"));//zwraca obiekt jQuery z divem wewnątrz
 //console.log(document.querySelector("#wynik"));//zwraca obiekt div
 //let t = prompt("podaj tekst");
 //let tekst = $("#wyniik").html("kkkk").css("color","red");
 //alert(tekst);
 //$("wynik").html(t);

 //window.onload = function(){};
//   $ --> document.querySelector()
