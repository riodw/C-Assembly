/* Decimal to Binary
 * 10/12/2015
 * Rio Weber
 */
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h> // for atoi
 
 void dec2hex(char *bits, long unsigned value);
 void reverse_in_place(char *str);
 
 int main(int argc, char **argv)
 {
 
 	unsigned i;
 	long unsigned decimal;
 	char bitstring[65];
 	
 	for(i=1; i < argc; i++)
 	{
 		decimal = atoi(*(argv+i));
 		
 		dec2hex(bitstring, decimal);
 		reverse_in_place(bitstring);
 		
 		printf("%lu = %s\n", decimal, bitstring);
 	}
 	
 	return 0;
 }
 
  void dec2hex(char *bits, long unsigned value)
  {
  	long unsigned quotient, remainder;
  	char  *bp;
  	
  	bp = bits;
  	do {
  		quotient = value / 16;
  		remainder = value % 16;
  		//*bp = remainder; NO! *Must convert remainder from value to char
  		//*bp = (remainder == 1 ? '1' : '0'); *option 1
  		if(remainder < 10)
  			*bp = '0' + remainder; // *option 2
  		else
  			*bp = 'a' + (remainder - 10);
  		bp++;
  		
  		value = quotient;
  	} while(value != 0);
  	*bp = '\0';
  }
  
  void reverse_in_place(char *str)
  {
  	unsigned length = strlen(str);
  	char *end = str + length - 1; // don't touch terminal
  	
  	do{
  		char t;
  		t = *str, *str = *end, *end = t;
  		str++; end--;
  	} while(str < end);
  }
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
