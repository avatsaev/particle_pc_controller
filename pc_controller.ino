
int power = D1;

void setup() {
  pinMode(power, OUTPUT);
  digitalWrite(power, HIGH);
  Particle.subscribe("pc_on_", pc_on);
  Particle.subscribe("pc_off_", pc_off);
}

void loop() {
}


void pc_on(const char *event, const char *data){

  digitalWrite(power, LOW);
  delay(500);
  digitalWrite(power, HIGH);

}

void pc_off(const char *event, const char *data){

  digitalWrite(power, LOW);
  delay(5000);
  digitalWrite(power, HIGH);

}
