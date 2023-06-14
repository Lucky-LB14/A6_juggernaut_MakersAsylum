#define IR_Sensor 18 /*D18 IR pin defined*/
int IR;             /*Variable that will store IR output status*/

void setup()
{
pinMode(IR_Sensor, INPUT); /* define pin and its function*/
Serial.begin(9600); /*begin the Serial Monitor*/
}

void loop()
{
  IR = digitalRead(IR_Sensor);  /*digital read function to check IR pin status*/
 
  if(IR==0)
  {               /*If sensor detect any reflected ray*/
  Serial.println("white");   /*if reflection, it is white as white reflects light*/
  }
  else 
  {
  Serial.println("black");  /*if no reflection, it is black as black absorbs light*/
  }

delay(1000);
}