#include<iostream>
#include<algorithm>
#include<studio>
using namespace std;
int main (){
	int n;
	cout<<"enter the num of integer:";
	cin>>n;
	int a;
	for(int i=1;i<=n;i++)
	{
		cout<<"enter the num :";
		cin>> a;
	}
	int largest=INT_MAX;
	int smallest=INT_MIN;
	int average;
	
	if(a<smallest){
		smallest=a;
	}
	if(a>largest){
		largest=a;
	}
	
	cout<<"the largest num is:"<<largest;
	cout<<"the smallest num is:"<<smallest;
}