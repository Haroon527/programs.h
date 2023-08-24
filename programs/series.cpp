#include<iostream>
using namespace std;
int main ()
{
	float x=100,y=1,i;
	for( i =4;i<=100;++i)
	{  
	 y+=1/i;
	  i=i*2;
		
	}
	cout<<"the sum is "<<y;
}