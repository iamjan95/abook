#include <iostream>

int switchcase()
{
	int x= 2;
	switch(x)
	{
		case 1:
		{
			x=x+1;
		}
		break;
		case 2:
		{
			x=x+2;
			break;
		}
		default:
		{
			x--;
		}
	}
	return x;
}