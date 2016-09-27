#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void base2dec(long unsigned decimal, char *bitstring, unsigned base);
void reverse(char *bitstring);
int length(long unsigned decimal);
void rightToDec(long unsigned decimal, int base, char *bitRight);

int main(int argc, char **argv)
{

  long unsigned decimal = 1;
  unsigned base = 10;
  char bitstring[33];
  char bitLeft[33];
  char bitRight[33];
  int i;



  printf("Enter a decimal value, and a desired base: ");
  scanf("%s %u", bitstring, &base);

  for(i = 0; i < strlen(bitstring); i++){
    if(bitstring[i] == '.'){
      break;
    }
    bitLeft[i] = bitstring[i];
  }

  bitLeft[i] = '\0';

  if(i < strlen(bitstring)){
    for(i = i + 1;i < strlen(bitstring); i++){
      bitRight[i - strlen(bitLeft) - 1] = bitstring[i];
    }
  }

  bitRight[i] = '\0';

  decimal = atoi(bitLeft);
  base2dec(decimal, bitLeft, base);
  reverse(bitLeft);

  decimal = atoi(bitRight);
  rightToDec(decimal, base, bitRight);

  printf("\n%s equals %s.%s (base-%u)\n", bitstring, bitLeft, bitRight, base);

  return 0;
}

void base2dec(long unsigned decimal, char *bitstring, unsigned base)
{
  char digits[] = {"0123456789abcdef"};
  unsigned remainder;
  long unsigned quotient;
  char *dst = bitstring;

  do{
    remainder = decimal % base;
    quotient = decimal / base;
    *dst = digits[remainder];
    dst++;
    decimal = quotient;
  }while(decimal != 0);
  *dst = '\0';
}

void reverse(char *bitstring)
{
  unsigned length = strlen(bitstring);
  char *end = bitstring + length - 1;
  do{
    char t;
    t = *bitstring, *bitstring = *end, *end = t;
    bitstring++;
    end --;
  }while(bitstring < end);
}

void rightToDec(long unsigned decimal, int base, char *bitRight){

  char buffer[2];
  double number;
  int temp, i;
  number = decimal / pow(10.0, strlen(bitRight));

  for(i = 0; i < 16; i++){
    number *= base;
    temp = number;
    sprintf(buffer, "%d", temp);
    buffer[1] = '\0';
    bitRight[i] = buffer[0];
    number -= temp;

    if(number == 0){
      break;
    }
  }

  i++;
  bitRight[i] = '\0';

}
