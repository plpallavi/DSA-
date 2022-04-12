#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the value of a: "<<endl;
	cin>>a;
	 // if a is positive
	if(a>0){
		cout<<"A is positive"<<endl;
	}
	// if a is negative
	/*
	if (a<0){
		cout<<"A is negative"<<endl;
	}
	*/
	
	/*
	else{
		if(a<0){
		cout<<"A is negative";
		}
		else{
		cout<<"A is 0";
		}
	}
	*/
	else if(a<0){
		cout<<"A is negative"<<endl;
	}
	else{
		cout<<"A is 0";
	}	
}
