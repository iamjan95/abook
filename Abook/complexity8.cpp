#include <iostream>
using namespace std;
int nestedloopcase(int a, int b)
{
	for(int i=0;i<a; i++)
	{
		for(int j=0;j<b;j++)
		{
			cout << i+j;
		}
		cout<<endl;
	}


}