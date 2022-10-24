window.onclick = start;
function start() {
	document.getElementById("wynik").style.color = "blue";
	document.getElementsByTagName("BODY")[0].style.backgroundColor = "yellow";//Jeśli klikniesz w oknie to kolor tła ustawi się na żółty
	document.querySelector("#sprawdz").onclick = lol;
	function lol() {
		var x = Number(document.formularz.liczba.value);
		if (x % 2) {
			document.getElementById("wynik").innerHTML = "Liczba NIE należy do liczb parzystych";
		} else {
			document.getElementById("wynik").innerHTML = "Liczba należy do liczb parzystych";
		}
	}
	document.querySelector("#pierwsza").onclick = lil;
	function lil() {
		var y = Number(document.formularz.liczba.value);	
			if (y==1) {
				document.getElementById("wynik").innerHTML = "Liczba NIE należy do liczb pierwszych";
				return;}
			if (y==2) {
				document.getElementById("wynik").innerHTML = "Liczba należy do liczb pierwszych";
				return;}
		for (var d = 2; d < y; d++) {
			if (y % d == 0) {
				document.getElementById("wynik").innerHTML = "Liczba należy do liczb pierwszych";
				return;
			}else{
			document.getElementById("wynik").innerHTML = "Liczba NIE należy do liczb pierwszych";
			return;
		}
	}
	}
}

