
int led= D6;//defining the pin for led

void setup() {
    pinMode(led,OUTPUT); // declaing output pin
    digitalWrite(led,LOW); //turn off led at start
      Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handleWave, ALL_DEVICES); //subscribe the wave updates from Buddy using the unique event

    

}

void loop() {
  //nothing to do in loop for now since we have handled the event updates in handler

}
//handle function to mange wave updates
void handleWave(const char *event, const char *data){ 


if(strcmp(data,"wave")==0){
 
    //calling flash function three times as the notification of receiving wave updates    
    flash(200);
    flash(200);
    flash(200);
     }
 
  

 
}
void flash(int duration){
    //turn on led
      digitalWrite(led,HIGH);
      // for given duration milliseconds 
          delay(duration);
      //then turn off led
         digitalWrite(led,LOW);
         //for another given duration  milliseconds
          delay(duration);
    
}