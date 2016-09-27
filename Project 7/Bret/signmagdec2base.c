#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

long unsigned base2dec(char *bitstring, unsigned base);

int main(int argc, char **argv)
{
  
  unsigned base = 10;
  char tempBitstring[65];
  char bitstring[65];
  char sign;
  int i;

  printf("Enter a value, and the base it is in: ");
  scanf("%s %u", tempBitstring, &base);

  if(tempBitstring[0] == '-'){
    sign = '-';
    i = 1;
  }
  else{
    sign = '+';
    i = 0;
  }

  if(i == 1){
    for(; i < strlen(tempBitstring); i++){
      bitstring[i - 1] = tempBitstring[i];
    }
  }
  else{

    for(; i < strlen(tempBitstring); i++){
      bitstring[i] = tempBitstring[i];
    }
  }

  bitstring[i] = '\0';

  printf("Bitstring = %s\n", bitstring);

  printf("\n%s (base-%u) equals %c%lu\n", bitstring, base, sign, base2dec(bitstring, base));

  return 0;
}

long unsigned base2dec(char *bitstring, unsigned base)
{
    unsigned long value = 0;
    char *end = bitstring + strlen(bitstring) - 1;
    unsigned power = 0;

    do{
      char temp = *end;
      int number = temp - '0';

      value += number * pow(base, power);
      end--;
      power++;

    }while(power < strlen(bitstring));

    return value;

}
