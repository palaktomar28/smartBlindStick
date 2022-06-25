int trigger_pin = 10;
int echo_pin = 11;
int buzzer_pin = 7; 
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

  if (distance <= 10) 
  {       
        digitalWrite (buzzer_pin, HIGH);
        delay (500);
        }
  else {
                
        digitalWrite (buzzer_pin, LOW);
        delay (500);        
       } 
}
