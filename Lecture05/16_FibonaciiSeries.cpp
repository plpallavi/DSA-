// Fibonacciii series---> 0,1,1,2,3,5,8,13,21

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	int a = 0;
	int b = 1;
	cout<<a<<" "<<b<<" ";
	
	for(int i = 1; i<=n; i++){
		
		int nextNumber = a+b;
		cout<<nextNumber<<" ";
		
		a=b;
		b=nextNumber;
	}
	
}
