package exercises

import java.lang.IllegalArgumentException

fun main(){
    val film = Film("jakis");
    val game = Game("RPG super")
    val person = Person("Jan","Nowak",23)
    val person2 = Person("Jan","Nowak",56, height = 189)
    person.showHobby()
    person2.showHobby()
    //println(person.age)
    //println(person.firstName)
    //println(film.getTitle());
    //println(game.info());
}
class Film constructor(title: String){
    private var _title:String = title
    fun getTitle():String{
        return this._title
    }
    override fun toString(): String {
        return "Film o tytule: "+ this._title
    }
}
class Game(title: String){
    var _title = title;
    fun info(){
        println("Gra o tytule: "+ _title)
    }
}
class Person(private var firstName:String,private var lastName:String){
    var age: Int? = null
    var hobby:String = "Lezenie bykiem"
    var myFirstName = firstName
    var height:Int = 0

    constructor(firstName: String, lastName: String, age: Int) :this(firstName,lastName){
        this.age = if (age>0) age else throw IllegalArgumentException("wiek musi byc dodatni")
    }

    constructor(firstName: String, lastName: String, age: Int, height:Int) :this(firstName,lastName){
        this.height = height
        this.age = age
    }

    fun showHobby(){
        var result = if (age!=null) age else "nie podano wieku"
        println("Inicjowanie obiektu klasy Person firstName = $firstName lastName = $lastName age = $result")
        println("Osoba $firstName ma hobby: $hobby wiek: $age")

    }
}