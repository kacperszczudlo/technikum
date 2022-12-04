//deklarujemy zmienne: username i password
var objPeople = [
    {
        username: "Kacper",
        password: "123"
    },
    {
        username: "Jacob",
        password: "1234"
    },
    {
        username: "Krzychu",
        password: "12345"
    }
]
/******************************************************
nazwa funkcji: getInfo()
argumenty: <brak>
typ zwracany: string, jeśli poprawny login i hasło: alert(username + " jestes zalogowany!"); 
                      jesli nie poprany login lub hasło: alert("Niepoprawny uzytkownik lub haslo");
informacje: funckja getInfo() sprawdza czy username i password jest poprane z objPeople
autor: Kacper Szczudło
*****************************************************/
function getInfo(){
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;

    for (var i = 0; i < objPeople.length; i++){
        if ( username == objPeople[i].username
            && password == objPeople[i].password){
                alert(username + " jestes zalogowany!");
                console.log(username + " jestes zalogowany!");
                return;
            }
            alert("Niepoprawny uzytkownik lub haslo");
            console.log("Niepoprawny uzytkownik lub haslo");
            return;
    }
}