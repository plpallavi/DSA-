#include<iostream>
using namespace std;

// 1 -> Prime Number
// 0-> Not a Prime Number

bool isPrime (int n){
	// Divide ho gya means not a prime number
	for(int i=2; i<n; i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	if(isPrime(n)){
		cout<<"is a prime number"<<endl;
	}
	else{
	cout<<"is not a prime number"<<endl;
	}
}
