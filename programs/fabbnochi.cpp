#include<iostream>
using namespace std;
int main()
{int x,y,z,next;
cout<<"enter the ending figure:";
cin>>x;
 if (x <= 0) {
 	
        cout << "Invalid input. Please enter a positive integer." << endl;
        
    }


	y=0;
	
	z=1;
	
for(int i=1;z<=x;++i){
	
cout<<z<<"  ";
		next=y+z;

y=z;


z=next;

	
}}