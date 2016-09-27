/* mystrlen() implementation
* 11/16/2015
*/
long unsigned mystrlen(char *str)
{
	char *p = str;
	while(*p != '\0')
		p++;
	return (p - str);
}