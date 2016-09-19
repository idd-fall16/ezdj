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
const int mode = D3;
bool pitch_mode = false;
int old_amp = 0;
//const int amp_low = 3200; //low end of 'not pressed'
//const int amp_high = 3350; //high end of 'not pressed'
int last_amp = 0;


void setup() {
  Serial.begin(115200);
  pinMode(pos, INPUT_PULLDOWN);
  pinMode(amp, INPUT);
  pinMode(timbre, INPUT);
  pinMode(mode, INPUT_PULLDOWN);
}

void loop() {
  int mode_val = digitalRead(mode); 
  Serial.printf("/switch %d\n", mode_val);
  int pos_val = analogRead(pos);
  Serial.printf("/position %d\n", pos_val);
    
  int amp_val = analogRead(amp);
  Serial.printf("/amplitude %d\n", amp_val);
  
  int timbre_val = analogRead(timbre);
  Serial.printf("/timbre %d\n", timbre_val); 
  Serial.printf("Done \n");
  
  
  delay(100);
    
}
