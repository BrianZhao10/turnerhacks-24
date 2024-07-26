import serial
import time
import main

arduino = serial.Serial(port='/dev/cu.usbmodem14101',  baudrate=115200, timeout=.1)

def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    time.sleep(0.05)
    data = arduino.readline()
    return data

while True:
    sortrf = main.x
    threshold = write_read(sortrf)
    print(threshold)
