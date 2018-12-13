
int main (void)
{
    int i, j;
    float voltage = 0;
    float current = 0;
    float primaryVoltage[256];
    float primaryCurrent[256];

    char buffer [64]; // must be large enough for string size
    char dstrbuf[16]; // buffer for dtostrf

    init ();
    Serial.begin (115200);

///////////// just fill the arrays with dummy data for test ////////////
    for (i = 0; i < 256; i++) {
        // put in simulated data alternating 120 and 240 volts
        primaryVoltage[i] = (i % 2) ? 120.0 : 240.0;
        // put in simulated data alternating 5 and 8 amps
        primaryCurrent[i] = (i % 2) ? 5.0 : 8.0;
    }
////////////////////////////////////////////////////////////////////////

    for (i = 0; i < 256; i++) {
        dtostrf (primaryVoltage[i], 0, 2, dstrbuf); // float value to buffer
        sprintf (buffer, "Voltage at array index %d is %s\r\n", i, dstrbuf); // generate string into buffer
        Serial.print (buffer); // print the "voltafe" string
        dtostrf (primaryCurrent[i], 0, 2, dstrbuf); // float value to buffer
        sprintf (buffer, "Current at array index %d is %s\r\n", i, dstrbuf); // generate string into buffer
        Serial.print (buffer); // print the "voltage" string
        Serial.print ("\r\n"); // print a separator line if you want it
        delay (1000); // just a 1 sec delay so you can see it print
    }  
}
