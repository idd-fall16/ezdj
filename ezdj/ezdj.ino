/******************
 * EZDJ Duo code. Reads in voltages from analog sensors, prints to serial.
 */

// turn off cloud functionality
#if defined(ARDUINO) 
SYSTEM_MODE(MANUAL); 
#endif

const int pos = A1;
const int amp = A2;
const int timbre = A3;

void setup() {
  Serial.begin(115200);
  pinMode(pos, INPUT);
  pinMode(amp, INPUT);
  pinMode(timbre, INPUT);

}

void loop() {

  int pos_val = analogRead(pos);
  Serial.printf("Position %d\n", pos_val);

  int amp_val = analogRead(amp);
  Serial.printf("Amplitude %d\n", amp_val);
    
  int timbre_val = analogRead(timbre);
  Serial.printf("Timbre %d\n", timbre_val); 
  //note: what are the correct ranges?
  Serial.printf("Done \n");
  delay(1000);
    
  
}
