# define red 8
# define yellow 9
# define green 10
# define button 4
int counter=0;
int Read=0;
int n=0;
void setup()
{
  for(int i=8 ; i<=10 ; i++){
    pinMode(i,OUTPUT);
  }
  pinMode(4,INPUT);
}

void loop()
{
 Read=digitalRead(4);
  if(Read!=n)
  {
    if(Read==HIGH){counter++;}
    n=Read;
  }
    if(counter==1){digitalWrite(8,1);}
   else if(counter==2){digitalWrite(9,1);}
   else if(counter==3){digitalWrite(10,1);}
   else if(counter==4){
     counter=0;
     digitalWrite(8,0);
     digitalWrite(9,0);
     digitalWrite(10,0);
   
  }
}