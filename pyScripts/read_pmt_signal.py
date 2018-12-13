##############
## Script listens to serial port and writes contents into a file
##############
## requires pySerial to be installed 
import serial
import time

serial_port = u'COM3' # '/dev/ttyACM4';
baud_rate = 115200; #In arduino, Serial.begin(baud_rate)
write_to_file_path = "output_lines.txt";

output_file = open(write_to_file_path, "w+");
ser = serial.Serial(serial_port, baud_rate)

frame_number=0

print(ser);

while True:
    #line = ser.readline();
    #line = line.decode("utf-8") #ser.readline returns a binary, convert to string
    #print(line);
    #output_file.write(line);
    data = ser.read().decode("utf-8");
    if data == '1' :
        ms= int(round(time.time() * 1000)) #ms
        output_file.write(str(ms)+"\n");        
        frame_number+=1
        if frame_number%(100*272) ==0:
            print "Frames Measured = {0}".format(frame_number)


