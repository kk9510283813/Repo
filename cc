#!/usr/bin/env python3
import time, Rpi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)
while True:
    LEDon = GPIO.output(17, 1)   #LED燈亮
    time.sleep(1)
    LEDoff = GPIO.output(17,0)   #LED燈熄
    time.sleep(1)
