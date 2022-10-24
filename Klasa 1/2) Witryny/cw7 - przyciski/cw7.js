window.onload = function(){

	const btn = document.querySelector("#btn");
	btn.onmouseover = function(){
		this.src = "secondprzycisk.png";
	};
	btn.onmouseout = function(){
		this.src = "firstprzycisk.png";
	};
	btn.onmousedown = function(){
		this.src = "thirdprzycisk.png";
	};
	btn.onmouseup = function(){
		this.src = "secondprzycisk.png";
	};
	document.querySelector("#btn").onclick = function (){

		var d = new Date();
		var x = document.getElementById("data").value;
		var x = new Date(x);
		document.getElementById("wynik").innerHTML = Math.round((d - x) / 1000 / 60 / 60 / 24 / 365);
		
		var n = new Date(x);
		var months = [" Styczeń", " Luty", " Marzec", " Kwiecień", " Maj", " Czerwiec", " Lipiec", " Sierpień", " Wrzesień", " Październik", " Listopad", " Grudzień"];
		document.getElementById("datad").innerHTML = n.getDate();
		document.getElementById("datam").innerHTML = months[n.getMonth()];
		document.getElementById("datar").innerHTML = n.getFullYear();

		
	};
};
//oblicz wiek i podaj date urodzin w jezyku polskim w divie obok
