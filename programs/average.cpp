#include<iostream>
using namespace std;
int main(){
	int x,sum=0,count=0;
	cout<<"enter 9999 to stop!"<<endl;
	cout<<"Enter the series of number: ";
	for(;;){
		cin>>x;
		cout<<endl;
		if (x==9999){
			break;
		}
		sum+=x;
		count++;
		
		
	}
	double aveg=sum/count;
	cout<<"Average is:"<<aveg;
	
	
}