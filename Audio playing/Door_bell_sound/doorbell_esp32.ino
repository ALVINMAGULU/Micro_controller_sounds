

#include "XT_DAC_Audio.h";
#include "SoundData.h";
 
XT_Wav_Class DoorBellSound(doorBell);     // create an object of type XT_Wav_Class that is used by 
                                      // the dac audio class (below), passing wav data as parameter.
                                      
XT_DAC_Audio_Class DacAudio(25,0);    // Create the main player class object. 
                                      // Use GPIO 25, one of the 2 DAC pins and timer 0
 
uint32_t DemoCounter=0;               // Just a counter to use in the serial monitor
                                      // not essential to playing the sound
 
void setup() {
  Serial.begin(115200);               // Not needed for sound, just to demo printing to the serial
                                      // Monitor whilst the sound plays, ensure your serial monitor
                                      // speed is set to this speed also.
}
 
 
void loop() {
  DacAudio.FillBuffer();                // Fill the sound buffer with data
  if(DoorBellSound.Playing==false)       // if not playing,
    DacAudio.Play(&DoorBellSound);       //                play it, this will cause it to repeat and repeat...
  Serial.println(DemoCounter++);      // Showing that the sound will play as well as your code running here.
}
