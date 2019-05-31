void setup() {
  Serial.begin(250000);
}


int lastThree[] = {0, 0, 0};
long n = 0;

void loop() {
  int x = analogRead(A0); 

  lastThree[n%3] = x;

  n++;

  int av = (lastThree[0] + lastThree[1] + lastThree[2]) /3;

if(n%1000  == 0){
  Serial.println(av);
}
}
