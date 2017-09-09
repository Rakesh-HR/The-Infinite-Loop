package com.example.shubham.theinfiniteloop;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends AppCompatActivity {


    public void water(View view)
    {
        Intent i1=new Intent(MainActivity.this,WaterBillActivity.class);
        startActivity(i1);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
