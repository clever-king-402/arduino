import serial
import time

arduinoData = serial.Serial('/dev/cu.usbmodem101',9600)
time.sleep(1)
while True:
    while(arduinoData.inWaiting() == 0):
        pass
    dataPacket = arduinoData.readline()
    dataPacket = str(dataPacket,'utf-8')
    dataPacket = dataPacket.strip('\r\n')
    dataPacket = dataPacket.split(',')
    x=dataPacket[0]
    y=dataPacket[1]
    z=dataPacket[2]
    print(f"{x} and {y} and {z}")