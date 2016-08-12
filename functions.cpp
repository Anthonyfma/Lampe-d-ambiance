int min_vague=180;



void lumiere_blanche__vague_bleue()
{
  p=0.2+0.008*(potar-300);
  
  for (int i=min_vague; i<=254; i=i+1)
  {
    // Avant
    digitalWrite(bluePin2, i);
    // Arrière
    digitalWrite(redPin1, 254*p);
    digitalWrite(greenPin1, 254*p);
    digitalWrite(bluePin1, 254*p);
  }
  for (int i=254; i<=min_vague; i=i-1)
  {
    // Avant
    digitalWrite(bluePin2, i);
    // Arrière
    digitalWrite(redPin1, 254*p);
    digitalWrite(greenPin1, 254*p);
    digitalWrite(bluePin1, 254*p);
  }
}


void vague_bleue()
{
  p=0.2+0.008*(potar-300);
  
  for (int i=min_vague; i<=254; i=i+1)
  {
    // Avant
    digitalWrite(bluePin1, i);
    // Arrière
    digitalWrite(bluePin2, i);
  }
  for (int i=254; i<=min_vague; i=i-1)
  {
    // Avant
    digitalWrite(bluePin1, i);
    // Arrière
    digitalWrite(bluePin2, i);
  }
}


void vague_cyan()
{
  p=0.2+0.008*(potar-300);
  
  for (int i=min_vague; i<=254; i=i+1)
  {
    // Avant
    digitalWrite(bluePin1, i);
    digitalWrite(greenPin1, i);
    // Arrière
    digitalWrite(bluePin2, i);
    digitalWrite(greenPin2, i);
  }
  for (int i=254; i<=min_vague; i=i-1)
  {
    // Avant
    digitalWrite(bluePin1, i);
    digitalWrite(greenPin1, i);
    // Arrière
    digitalWrite(bluePin2, i);
    digitalWrite(greenPin2, i);
  }
}

void vague_alt_cyan()
{
  p=0.2+0.008*(potar-300);
  
  for (int i=min_vague; i<=254; i=i+1)
  {
    // Avant
    digitalWrite(bluePin1, i);
    digitalWrite(greenPin1, i);
    // Arrière
    digitalWrite(bluePin2, 254+min_vague-i);
    digitalWrite(greenPin2, 254+min_vague-i);
  }
  for (int i=254; i<=min_vague; i=i-1)
  {
    // Avant
    digitalWrite(bluePin1, i);
    digitalWrite(greenPin1, i);
    // Arrière
    digitalWrite(bluePin2, 254+min_vague-i);
    digitalWrite(greenPin2, 254+min_vague-i);
  }
}



