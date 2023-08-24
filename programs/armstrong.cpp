#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int x ,y=0 ,r,sum=0,numDigits=0;
	cout<<"Enter the number:";
	cin>>x;
	for(int i=1;i<=x;i++){
		
		int tempNum = i;
        while (tempNum > 0) {
            tempNum /= 10;
            numDigits++;
        }
	while (tempNum > 0) {
		tempNum =i;
		r=tempNum %10;
	sum += pow(r, numDigits);
	tempNum /= 10;
	if(sum==i){
	cout<<i<<"  ";
	}
	}}
	}
	
	
	
