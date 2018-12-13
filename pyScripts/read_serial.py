##############
## Script listens to serial port and writes contents into a file
##############
## requires pySerial to be installed 
import serial
import time
from datetime import datetime

serial_port = u'COM3' # '/dev/ttyACM4';
baud_rate = 115200; #In arduino, Serial.begin(baud_rate)
write_to_file_path = "outputls2.txt";

output_file = open(write_to_file_path, "w+");
ser = serial.Serial(serial_port, baud_rate)

frame_number=0

data='0'
print(ser);

stopcycle=False
while (~stopcycle):
    #line = ser.readline();
    #line = line.decode("utf-8") #ser.readline returns a binary, convert to string
    #print(line);
    #output_file.write(line);
    data= ser.read()
    #data = ser.read().decode("utf-8");
    #print (data)
    if data==b'X' :
        #ms= int(round(time.time() * 1000)) #ms
        #ms= time.time_ns()
        ms=datetime.now()
        #print(ms)
        ms=ms.microsecond
        output_file.write(str(ms)+"\n");        
        frame_number+=1
        if frame_number%(1000) ==0:
            print ("Frames Measured = ",frame_number)
        if frame_number ==2000:
            #    stopcycle=True
            output_file.close()
            break


