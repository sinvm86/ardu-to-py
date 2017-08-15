import serial

RATIO = 9600
PORT = 'COM3'
ser = serial.Serial(PORT, RATIO)

while True:
        op = int(input())
        if op == 0:
                ser.write(b'0')
        elif op == 1:
                ser.write(b'1')
        else:
                break
ser.close()
