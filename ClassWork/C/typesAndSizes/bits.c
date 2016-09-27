/* bit operations */

#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv)
{
	char i;
	for(i = 0; i < 20; i++)
	{
		printf("%2i  %2i  %2i\n", i, i<<1, i>>2);
	}

	return 0;
}
