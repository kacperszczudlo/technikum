package com.example.procent

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.EditText
import android.widget.SeekBar
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    var startPoint = 0
    var endPoint = 0
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val seekBarInfo = findViewById<SeekBar>(R.id.seekBar2);
        val textViewInfo = findViewById<TextView>(R.id.textViewProcent);
        val wynik = findViewById<TextView>(R.id.wynik);
        val kwotaZam = findViewById<EditText>(R.id.kwotaZam);
        seekBarInfo.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener{
            override fun onProgressChanged(p0: SeekBar?, p1: Int, p2: Boolean) {
                textViewInfo.text = p1.toString()+"%";
                var kwota = kwotaZam.text.toString().toInt();
                var result = p1*kwota/100;
                wynik.text = result.toString()+"zł";
            }

            override fun onStartTrackingTouch(p0: SeekBar?) {
                if(p0 != null){
                    startPoint = p0.progress;
                }
            }

            override fun onStopTrackingTouch(p0: SeekBar?) {
                if(p0!=null){
                    endPoint = p0.progress;
                }
                Toast.makeText(this@MainActivity,"zmiana ${endPoint-startPoint}",Toast.LENGTH_SHORT)
                    .show()
            }
        });
    }
}