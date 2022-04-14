#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	cout<<"Printing count from 1 to n"<<endl;
	
	for(int i=1; i<=n; i++){
			cout<<i<<endl;
	}
	/*
	// We can also write the code as given below----
	int i = 1;
	for(;;){
		if(i<=n){
			cout << i << endl;
		}
		else{
			break;
		}
		i++;
	}
	*/
}
