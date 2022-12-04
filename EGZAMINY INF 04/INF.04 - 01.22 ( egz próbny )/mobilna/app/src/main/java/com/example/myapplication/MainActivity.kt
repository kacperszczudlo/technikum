package com.example.myapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    /*************************
     * nazwa funkcji: <OnCreate>
     * parametry wejściowe: <brak>
     * wartość zwracana: <funkcja zwraca wynik działąnia programu>
     * autor: <Kacper Szczudło>
     *************************/
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val email = findViewById<EditText>(R.id.email);
        val haslo = findViewById<EditText>(R.id.haslo);
        val haslo2 = findViewById<EditText>(R.id.haslo2);
        val przycisk = findViewById<Button>(R.id.button);
        val wynik = findViewById<TextView>(R.id.wynik);

        przycisk.setOnClickListener(){
            if(email.toString() != ""){
                val email : String = email.text.toString()
                val check : Boolean = "@" in email
                if(check != true){
                    wynik.text = "Nieprawidłowy adres e-mail";
                } else{
                    if (haslo.text.toString() == haslo2.text.toString()){
                        wynik.text = "Witaj: " + email.toString();
                    }else{
                        wynik.text = "Hasła się różnią";
                    }
                }
            }
        }
    }
}