void FullStep(boolean motorDirection)
{
  static int counter = 0;
  if (motorDirection)
  {
    counter++;
    if (counter >= 16)
    {
      counter = 0;
    }
  }

  if (!motorDirection)
  {
    counter--;
    if (counter <= 0)
    {
      counter = 16;
    }
  }

  switch(counter % 4)
  {
  case 0: 
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    break;
  case 1:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);
    break;
  case 2:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
    break;
  case 3:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);
    break;

  default:
    counter = 0;
  }
}

void HalfStep(boolean motorDirection)
{  
  static int counter = 0;
  if (motorDirection)
  {
    counter++;
    Serial.println(counter % 8);
    if (counter >= 16)
    {
      counter = 0;
    }
  }

  if (!motorDirection)
  {
    counter--;
    if (counter <= 0)
    {
      counter = 16;
    }
  }

  switch(counter % 8)
  {
  case 0: 
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    break;
  case 1:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, LOW);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    break;
  case 2:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);
    break;
  case 3:
    digitalWrite(E1, LOW);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);
    break;
  case 4:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
    break;
  case 5:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, LOW);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
    break;
  case 6:
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);
    break;
  case 7:
    digitalWrite(E1, LOW);
    digitalWrite(E2, HIGH);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    break;

  default:
    counter = 0;
  } 
}














