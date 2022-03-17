// C++ code
//
int flexA5 = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(A1, INPUT);
  pinMode(A3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(A5, INPUT);
  pinMode(9, OUTPUT);
  pinMode(A4, INPUT);
  pinMode(A2, INPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  Serial.print("A1: ");
  Serial.println(analogRead(A1));

  Serial.print("A3: ");
  Serial.println(analogRead(A3));

  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  Serial.print("A5: ");
  Serial.println(analogRead(A5));
  Serial.println("");

  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  Serial.print("A4: ");
  Serial.println(analogRead(A4));

  Serial.print("A2: ");
  Serial.println(analogRead(A2));

  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}