int led_pin = 13; // Define the LED interface
int switch_pin = 3; // Definition of mercury tilt switch sensor interface
int val; // Defines a numeric variable

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
  pinMode (13, OUTPUT);
}

void loop()
{
  val = digitalRead(switch_pin); // check mercury switch state
  if(val == HIGH)
  {
    digitalWrite(led_pin, HIGH);
    digitalWrite (13, HIGH); // set the LED on

  delay (2000); // wait for a second

  digitalWrite (13, LOW); // set the LED off

  delay (2000); // wait for a second
  }
  else
  {
    digitalWrite(led_pin, LOW);
  }
}
