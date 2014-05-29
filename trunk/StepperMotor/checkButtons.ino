int checkValue(int waarde)
{
  if ( waarde > ( 1023- 25)  && waarde < (1023 + 25))
  {
    return 1023;
  }
  else if ( waarde > ( 513- 25)  && waarde < (513 + 25))
  {
    return 513;
  }
  else if ( waarde > ( 340- 25)  && waarde < (340 + 25))
  {
    return 340;
  }
  else if ( waarde > ( 254- 25)  && waarde < (254 + 25))
  {
    return 254;
  }
  else if ( waarde > ( 0- 25)  && waarde < (0 + 25))
  {
    return 0;
  }
  return -99;
}
