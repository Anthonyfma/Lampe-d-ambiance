


void setup()
{
// Défini l'interruption
  attachInterrupt(0, blink, CHANGE); // attache l'interruption externe n°0 à la fonction blink
}


// Fonction lancée au moment de l'interruption
void blink() // la fonction appelée par l'interruption externe n°0
{
  state = !state; // inverse l'état de la variable
}
