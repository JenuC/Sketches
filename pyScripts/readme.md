
Reading output from the output files from port using serial port directly

Python 3.7 has time_ns function that can measure microsecond timestamps on serial in

Learning PORT READING>>

ANALOG OUT FROM ARD
https://arduino.stackexchange.com/questions/31664/how-to-output-a-true-analog-voltage-at-output-pin
USE external DAC chip (such as the MCP4821/2) 
USE H bridge like L293d to provide continuous level. 
http://www.instructables.com/id/How-to-Make-an-Inverter-Using-ARDUINO/?ALLSTEPS

ADC voltage divided for 10V-> 5V for PMT SIGNAL OUT FROM PMA-40
https://electronics.stackexchange.com/questions/21963/arduino-mega-0-10v-analog-input
![alt text](https://i.stack.imgur.com/yBGzZ.png)

ARDUINO TO TEXT FILE
https://electronics.stackexchange.com/questions/54/saving-arduino-sensor-data-to-a-text-file

1MhZ readout Arduino
http://forum.arduino.cc/index.php?topic=224664.0
You can only get _reliable_ 1MHz sampling using DMA or disabling all (other) interrupt
handlers (which otherwise may cause lost samples by delaying the ADC code or ISR).

TIME BETWEEN BUTTON PRESSES
https://forum.arduino.cc/index.php?topic=448389.0

Baudrate: 115200
https://forum.arduino.cc/index.php?topic=357083.0 
At 115200, it should only take 8.68uS per bit, with start and stop bit that's 86.8uS per byte and 868uS per 10 characters, so if you keep your parsing minimal and fast, 100mS should be heaps of time, and 10mS shouldn't really be a problem either.

Uno can work much faster than 115200 baud. It should be perfectly reliable at 500,000 baud. 
It is just the Serial Monitor that has an upper limit of 115200.

ARDUINO MEGA
https://www.arduino.cc/en/Hacking/PinMapping2560


