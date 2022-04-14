// Scope of Variables

#include <iostream>
using namespace std;
int main(){
	
	int a = 5;
	cout<<a<<endl;
	/*
	if(true){
		cout<<a;
	}
	*/
	if(true){
		int a = 9;
		cout<<a<<endl;
	}
	
	cout<<a<<endl;
}
