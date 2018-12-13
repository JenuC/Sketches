import serial # pip install pyserial

port = serial.Serial("COM4", baudrate=9600) # '/dev/ttyACM4'; #for LINUX

while True:
    #port.write("\r\nSay something:")
    rcv = port.read(10)
    #port.write("\r\nYou sent:" + repr(rcv))
    print(rcv);

