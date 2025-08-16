
#include "alphabot_drivers.h"
#include "line_follower.h"
#define IR_SENSOR_PIN_LEFT 7
#define IR_SENSOR_PIN_CENTER 8
#define IR_SENSOR_PIN_RIGHT 9
#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem _mem;


void setup()
{
  init_devices();
  motion_init();
  forward(); 
  pinMode(IR_SENSOR_PIN_LEFT,INPUT);
  pinMode(IR_SENSOR_PIN_CENTER,INPUT);
  pinMode(IR_SENSOR_PIN_RIGHT,INPUT);
  Serial.begin(115200);
}

void loop()
{

  bool value_left = digitalRead(IR_SENSOR_PIN_LEFT);
  bool value_center = digitalRead(IR_SENSOR_PIN_CENTER);
  bool value_right = digitalRead(IR_SENSOR_PIN_RIGHT);
  
  AnalogRead(sensorValues);
  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], value_left, value_center, value_right, &_res, &_mem);

///
//  
  SetSpeed(_res.v_r, _res.v_l);
  if(_res.direction == 0){
    forward();   
  }else if(_res.direction == 1){
    left();
  }
  else if(_res.direction == 2){
    right();
  }
  else if(_res.direction == 3){
    backward();
  }
  else stop();

  
}
