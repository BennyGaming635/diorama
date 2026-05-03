int pos = 0;
int dino = 0;
int i = 0;

Servo servo_2;

Servo servo_4;

void setup()
{
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    servo_2.attach(2, 500, 2500);
    servo_4.attach(4, 500, 2500);
    pinmODE(9, OUTPUT);
    pinMode(8, OUTPUT);
}

void loop()
{
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(15);
    digitalWrtite(7, HIGH);
    digitalWrite(6, LOW);
    delay(15);

    if (random(1, 10 + 1) == 5) {
        for (pos = 0; pos <= 45; pos += 1) {
            servo_2.write(pos);
            delay(100);
        }
        for (dino = 45; dino >= 0; dino -= 1) {
            servo_4.write(dino);
            delay(100);
        }
        delay(2000);
        for (pos = 45; pos >= 0; pos -= 1) {
            servo_2.write(pos);
            delay(100);
        }
        for (dino = 0; dino <= 45; dino += 1) {
            servo_4.write(dino);
            delay(100);
        }
    } else {
    }

    if (pos != 1 || pos != 0) {
        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        delay(15);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        delay(15);
    } else {
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
    }
}