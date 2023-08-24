#include<iostream>
using namespace std;
int main(){
	int x,max1=-1,max2=-1;
	cout<<"Enter 0 to submit!"<<endl;
	
	for(;;){
		
	cout<<"enter the num:";
	
	cin>>x;
	

	
		if(x==0){
			
				break;
				
		}
			if(x>max1){
				
			max2=max1;
		
		max1=x;
		
		}
		
		if(x>max1 && x<max2){
			
			max2=x;
	}
	if(max2==max1){
		cout<<max1;
	}

	}
	cout<<"The second largest is"<<max2;
	
}