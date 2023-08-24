#include<iostream>
using namespace std;
int main(){char choice;
	do{
	
		int x,z=1;
		
		cout<<"Enter the number:";
		cin>>x;
		for(int i=1;i<=x;i++){
			z*=i;
		
		}	cout<<"the factorial is:"<<z<<endl;
			cout<<"enter the choice if you want again factorial:(y/n)!";
		cin>>choice;
}	
	while(choice=='y');{
		cout<<"ok!";
	}}
