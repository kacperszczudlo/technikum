<?php
function getFromdb():array{
    return[
        ["Antoni","Tomecki","12345432"],
        ["Monika","Gryk","12345432"],
        ["Henryk","Górka","12345432"],
        ["Tomasz","Rek","12345432"],
        ["Ryszard","Jogurt","12345432"],
        ["Bożena","Chryniecka","12345432"],
        ["Karolina","Nowak","12345432"],
    ];
}
function toTable(array $dane):string{
    $html = "<table>\n";
    $html .= "<tr><th>LP</th><th>Imie</th><th>Nazwisko</th><th>Telefon</th></td>";
    $i = 0;
    foreach($dane as $row){
        $i++;
        $html.= "<tr><td>{$i}</td><td>{$row[0]}</td><td>{$row[1]}</td><td>{$row[2]}</td></tr>";
    }

    return $html."<table>\n";
}
function getAsscocArray():array{
    return[
        "white" => "biały",
        "yellow" => "żółty",
        "green" => "zielony",
        "blue" => "niebieski",
        "pink" => "różowy",
        "red" => "czerwony",
    ];
}

function colorsToSelect(array $colors):string{
    $html = "<select id='colors'>\n ";
    foreach($colors as $key => $value){
        $html .= "<option value='{$key}'>{$value}</option>\n";
    }
    return $html."</select>\n";
}