#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int x,y=1,z,max1=-1,max2=-1,r;
	cout<<"Enetr the number of student:";
	cin>>x;
	for(int i=1;i<=x;i++){
		cout<<"Enter the Marks of Student NO"<<y<<" :";
		cin>>z;
	
		y++;
	
		
	
		if(z>max1){
			max2=max1;
		
		max1=z;
		
		}
		if(z>max1 && z<max2){
			max2=z;
		}
	
		}
			cout<<"The first max marks are:"<<max1;
				cout<<"The first max marks are:"<<max2;
			}