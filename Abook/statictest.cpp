#include <pthread.h>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
void memoryLeakTest()
{
	int* ptr = new int(5);
	return;
}


int unreachablecode()
{
	int b=2;
	return b;

	int c= 5;	
}


void unreachablecode2()
{
	unsigned char c;
	switch(c)
	{
		case -1:
		{
			int x = 5+6;
			break;
		}
		case 256:
		{
			int y=3;
			break;
		}
	}
}



void segfault(int a)
{
	segfault(a);
}

pthread_mutex_t mtx1;

void mutexerror(void)
{
  pthread_mutex_lock(&mtx1);
  pthread_mutex_destroy(&mtx1);	
}


int uninitialized(int t)
{
	int a;
	if(t==5)
	{
		a=t;
	}
	return a;
}

int memoryLeakTest2()
{
	char* name = (char *) malloc (10);
	if (!name) 
	{
    	return 1;
  	}
  return 0;
}

int freedMemoryTest()
{
	char* name = (char *) malloc (10);
	char* name2 = (char *) malloc (10);
	if (!name) 
	{
    	return 1;
  	}
  	free(name);
  	name2= NULL;
  	name2[3]='å';

  	name[2]='c';
}


void oobwrite()
{
	int a[10]={0};
	a[32]=1;
}




//Objects slicing

class Shapes
{
	int location;
};

class Circle : public Shapes
{
	double radius;

};

void objectSlicing()
{
	std::vector<Shapes> v;
	Circle c;
	v.push_back(c);
}


// file not closed 

void filenotclosed()
{
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
}

enum EHAlign { Left, Middle , Right  };
enum EVAlign { Top,  Center , Bottom };


int compare(EVAlign ev)
{
	if(ev==Middle)
		return 0;
	return 1;
}