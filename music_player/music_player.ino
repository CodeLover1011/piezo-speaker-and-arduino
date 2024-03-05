#define buzzerPin 9  //Change to your pin
int default_delay = 100; //Tempo

//Music sheet
int freqs[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 0};

//Setup -> main code
void setup() {
  pinMode(buzzerPin, OUTPUT);
}
//Loop -> main code
void loop() {
  //Cheking every note from sheet
  for (int index = 0; index <= 8; index++) {
    if (freqs[index] == 0) {
      //If the frequency equal to 0, just dont play the note

      noTone(buzzerPin);

    } else {

      //If the frequency isn'n equal to 0, play the note
      tone(buzzerPin, freqs[index]);
      
    }
    //Some delay for tempo
    delay(default_delay);

    //Default pause between notes
    noTone(buzzerPin);
    delay(default_delay);
  }
}
