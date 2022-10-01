
int value_pot_1;
int value_pot_2;
int value_pot_3;
int value_pot_4;

int pos1;
int pos2;
int pos3;
int pos4;

char input;

void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  for(int i = 2; i<=8; i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {

  value_pot_1 = analogRead(A0);
  value_pot_2 = analogRead(A1);
  value_pot_3 = analogRead(A2);
  value_pot_4 = analogRead(A3);
  
  pos1 = map(value_pot_1, 0, 1023, 0, 100);
  pos2 = map(value_pot_2, 0, 1023, 0, 100);
  pos3 = map(value_pot_3, 0, 1023, 0, 100);
  pos4 = map(value_pot_4, 0, 1023, 0, 100);

  if(Serial.available() > 0)
  {
    input = Serial.read();
    display_decision(input);

    
  }
}

void displayLed(int numero)
{
  switch(numero)
  {
    case 0:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    break;
    
    case 1:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;

    case 2:
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    break;
    

    case 3: //2,3,5,6,8
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    break;

    case 4: //2,3,5,6,8
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;

    case 5: 
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;

    case 6:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;

    case 7: //2,3,5,6,8
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;

    case 8: 
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;

    case 9: //2,3,5,6,8
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;

    case 10:
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;
    

    
  }
  
}

void display_decision(int input)
{
  switch(input)
    {
      case '0':
      displayLed(0);
      break;
      
      case '1':
      displayLed(1);
      break;
      
      case '2':
      displayLed(2);
      break;

      case '3':
      displayLed(3);
      break;

      case '4':
      displayLed(4);
      break;

      case '5':
      displayLed(5);
      break;

      case '6':
      displayLed(6);
      break;

      case '7':
      displayLed(7);
      break;

      case '8':
      displayLed(8);
      break;

      case '9':
      displayLed(9);
      break;

      default:
      displayLed(10);
      break;
    }
}