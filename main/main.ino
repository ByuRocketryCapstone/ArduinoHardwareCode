void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.write("Hello this is dog\n");
    delay(1000);
}
