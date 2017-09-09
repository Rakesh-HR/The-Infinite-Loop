package com.example.shubham.theinfiniteloop;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

public class WaterBillActivity extends AppCompatActivity {


    public void casesecond(View view)
    {
        Intent i2=new Intent(WaterBillActivity.this,secondActivity.class);
    startActivity(i2);
    }

    public void casethird(View view) {
     Intent i3=new Intent(WaterBillActivity.this,thirdActivity.class);
    }
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_water_bill);
    }
}
