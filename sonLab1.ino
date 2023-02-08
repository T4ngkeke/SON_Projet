#include <Audio.h>
#include "MyDsp.h"

MyDsp myDsp;
AudioOutputI2S out;
AudioControlSGTL5000 audioShield;
AudioConnection patchCord0(myDsp,0,out,0);
AudioConnection patchCord1(myDsp,0,out,1);

void setup() {
  AudioMemory(2);
  audioShield.enable();
  audioShield.volume(0.5);
}

void loop() {
  const int MIDI_Notes[]={69,78,98,110,120};
  for (int i=0;i<5;i++){
    int d=MIDI_Notes[i];
    int f=pow(2,(d-69)/12)*440;
    myDsp.setFreq(f);
    delay(100);
    
    }

  
  
}
