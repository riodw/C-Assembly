long unsigned fact(long unsigned n)
{
	if(n <= 2)
		return n;
	else
		return fact(n-1) * n;
}