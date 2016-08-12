volatile int state = LOW; // déclartion d'une variable volatile


void setup()
{
// Défini l'interruption
  attachInterrupt(0, interupteur, CHANGE); // attache l'interruption externe n°0 à la fonction blink
}

void loop()
{
  
  if (state==HIGH)
  {
    
    
    
    
  }
  
  delay(100);
}


// Fonction lancée au moment de l'interruption
void interupteur() // la fonction appelée par l'interruption externe n°0
{
  state = !state; // inverse l'état de la variable
}
