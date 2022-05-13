#include<iostream>
using namespace std;
int main(){
	
	// Declaration of an array
	int num[12];
	
	// Access an array
	// gives garbage value as output
	cout<< "Value at 0 index " << num[0] << endl;     
	cout<< "Value at 1 index " << num[1] << endl;
	cout<< "Value at 2 index " << num[2] << endl;
	cout<< "Value at 8 index " << num[8] << endl;
	
	//Accessing element out of range ---- throw error
	//cout<< "Value at 20 index" << num[20] << endl;
	
	// Initialization of Array
	int arr[5]={2,4,6,8,10};
	
	//Accessing the element
	cout<< endl << "Value at 4 index " << arr[4] << endl;


	// Initailizing all locations with 0
	
	int arr1[5] = {0};
	int n=5;
	cout<<"Printing the array"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	
		// Initailizing all locations with 1 [Not possible with the code below]
	
	int arr2[4] = {1};
	n=4;
	cout<<"Printing the array"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr2[i]<<" ";
	}
		
}

