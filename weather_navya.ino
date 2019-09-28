const int sensormin=0;
const int sensormax=1024;
int sensorreading;
int range;
void setup()
{
  Serial.begin(9600);
    Serial.println("Weather sensing....");
  delay(1000);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorreading=analogRead(A0);
  range=map(sensorreading,sensormin,sensormax,0,3);

  switch(range)
  {
    case 0:
      Serial.println("Flood");
      break;
    case 1:
      Serial.println("Rain Warning");
      break;
    case 2:
      Serial.println("Not raining");
      break;
    default:
      Serial.println("Unpredictable");
      
  }
  
    delay(1000);
  }
