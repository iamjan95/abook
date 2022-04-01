#include <iostream>

int nestedifcase(int a, int b)
{
	int c=0;

	if(a>5)
	{
		if(b>4)
		{
			if(c == 0)
			{
				c=a+b;
			}
			else if (c == 1)
			{
				c=a-b;
			}
		}
	}
	return c;
}