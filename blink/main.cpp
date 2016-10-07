/*
 * File		: main.cpp
 * Author	: leandrobpedro@gmail.com
 * Date		: 2016/10/07
 */

int led = 13;

void setup ()
{
	pinMode(led, OUTPUT);
}

void loop ()
{
	digitalWrite(led, !digitalRead(led));
	delay(1000);
}
