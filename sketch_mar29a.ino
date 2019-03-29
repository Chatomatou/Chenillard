static const int ports[] = {7, 8, 12, 13}; 
static const int portsMaxUsed = sizeof(ports) / sizeof(int);  

static int i = 0;  
static bool bBegin = true; 

void setup() 
{
 
  for(auto i {0}; i < portsMaxUsed; i++)
  {
    pinMode(ports[i], OUTPUT);  
  }
  
}

void loop() 
{
  
  if(bBegin)
  {
    digitalWrite(ports[i], HIGH);
    i++;

    if(i == portsMaxUsed) 
    {
      bBegin = false;
    }
  }
  else 
  {
    digitalWrite(ports[i], LOW);
    i--;

    if(i == -1) 
    {
      bBegin = true;
    }
  }
  delay(300);
}
