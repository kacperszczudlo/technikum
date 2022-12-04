window.onload = start;
//window.addEventListener("load", start);
function start(){
    const div1 = document.querySelector("#pierwszy");//krok 1
    console.log(div1);  
    div1.onclick = klik;//krok 2

    document.querySelector("#drugi").onclick = klik2;//dwa kroki

    //pozawala do 1 zdarzenia click przypisac wiele funcji
    document.querySelector("#trzeci").addEventListener("click",klik3);
}
    function klik3(){
        if(this.style.color != "red"){//jesli nie czerwony
            this.style.color = "red";//to zamien na czerwony
        }else{//w pozostalym przypadku zrób czarny
            this.style.color = "black";
        } 
}
function klik2(){
    if(this.style.backgroundColor != "green"){
        this.style.backgroundColor = "green";
    }else{
        this.style.backgroundColor = "white";
    }
}
function klik(){
    console.log("kliknieto");
    alert("kliknięto 1 div!!!!!!!!!!!!!");
}