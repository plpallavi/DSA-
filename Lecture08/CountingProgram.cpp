#include <iostream>
using namespace std;

//function Signature
void PrintCounting(int n){
	//function Body
	for(int i=1;i<=n;i++){
		cout<< i <<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	
	//function call
	PrintCounting(n);
}
