/******************
 * EZDJ Duo code. Reads in voltages from analog sensors, prints to serial.
 */

// turn off cloud functionality
#if defined(ARDUINO) 
SYSTEM_MODE(MANUAL); 
#endif

const int pos = A1;
const int amp = A2;
const int tamber = A3;

void setup() {
  Serial.begin(115200);
  pinMode(pos, INPUT);
  pinMode(amp, INPUT);
  pinMode(tamber, INPUT);

}

void loop() {

  int pos_val = analogRead(pos);
  Serial.printf("Position, %d\n", pos_val);

  int amp_val = analogRead(amp);
  Serial.printf("Amplitude, %d\n", amp_val);
    
  int tamber_val = analogRead(tamber);
  Serial.printf("Tamber, %d\n", tamber_val); 
  //note: what are the correct ranges?
  
  delay(1000);
    
  
}
