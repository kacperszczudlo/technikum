package com.example.cwegzamin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


    }


    var a = 0

    fun addLike(view: View) {
        val licznik = findViewById<TextView>(R.id.licznik)
        val btn = findViewById<Button>(R.id.polub)
        btn.setOnClickListener {
            a++
            licznik.text = ("${a} polubień")
        }
    }
    fun deleteLike(view: View){
        val licznik = findViewById<TextView>(R.id.licznik)
        val btn2 = findViewById<Button>(R.id.usun)
        btn2.setOnClickListener {

            if (a>=1){
                a--
                licznik.text = ("${a} polubień")
            }
        }
    }
}