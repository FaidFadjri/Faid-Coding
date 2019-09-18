float f = 29.00; // example
String mystring(f);
uint8_t first  = atoi (mystring.c_str ());   




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(first);
 
  
  
  
 

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
