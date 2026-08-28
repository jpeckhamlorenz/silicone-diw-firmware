/*
A test program to mimic the behavior of a 4-channel waveform oscilloscope via Serial Plotter.
*/

/* Pin Configuration */
const int numChannel = 4;   // number of channels involved
const int channels[numChannel] = {A0, A1, A2, A3};   // digital pins for channel inputs (can be modified later)

/*
Caution: 
If we are inspecting pins with amplitude 24V, please use the following configuration:
  RAMBo pin --> 10kΩ resistor (brown, black, orange, gold) --> Arduino input pin --> 1kΩ resistor (brwon, black, red, gold) --> GND
  This is to scale down voltage to suitable range (below 3.3V and automatically below 5V) and reduce Joule heat
Also, the GND of breadboard should be somehow connected to one GND on RAMBo board!
*/

/**
 * @brief The setup jobs and other jobs to run before the main loop.
 * @note This function will be executed only once.
 */
void setup() {
  Serial.begin(115200);   // set baud rate

  for (int i = 0; i < numChannel; ++i) {
    pinMode(channels[i], INPUT);
  }

}


/**
 * @brief The main loop of the program
 * @note This function will be executed repeatedly.
 */
void loop() {
  int valuesInflated[numChannel] = {0};
  for (int i = 0; i < numChannel; ++i) {
    valuesInflated[i] = analogRead(channels[i]) * 10;   // use inflated int instead of float for faster serial transmission
  }
  for (int i = 0; i < numChannel; ++i) {
    Serial.print("Ch");
    Serial.print(i);
    Serial.print(":");   // serial plotter can only recognize label and value separate by a mere colon, no space!
    Serial.print(valuesInflated[i] * 0.1);
    Serial.print("\t");   // comma, tab, space can all serve as separation
  }
  Serial.println("");

}
