import serial
import os
import playsound
from gtts import gTTS
import time
ser = serial.Serial('COM3', baudrate = 9600, timeout=1)
time.sleep(2)
ser.flushInput()
buf = bytearray(3)
def speak(text):
    tts = gTTS(text=text, lang="id")
    filename = "TA2.mp3"
    tts.save(filename)
    playsound.playsound(filename)
while (True):
    rx_raw = ser.read(3)
    if  rx_raw(b'W\r\n'):
        speak("a")
    elif rx_raw(b'W\r\n'):
        speak("W")
    elif rx_raw(b'W\r\n'):
        speak("B")
    elif rx_raw(b'W\r\n'):
        speak("E")
    elif rx_raw(b'W\r\n'):
        speak("D")
    elif rx_raw(b'W\r\n'):
        speak("F")
    elif rx_raw(b'W\r\n'):
        speak("I")
    elif rx_raw(b'W\r\n'):
        speak("L")
    elif rx_raw(b'W\r\n'):
        speak("V")
    elif rx_raw(b'W\r\n'):
        speak("Y")
    else :
        speak("Ko gabisa")
