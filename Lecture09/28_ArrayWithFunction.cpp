#include<iostream>
using namespace std;

void printArray(int arr [], int size){
	
	cout<<"Printing the array"<<endl;
	// Print the Array
	for(int i=0; i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Printing DONE"<<endl;
}

int main(){
	
	int arr[5]={1,2,3};
	int n=5;
	printArray(arr,5);
	cout<<endl;
	
	int arr1[8]={2,4,6};
	n=5;
	printArray(arr1,8);
	cout<<endl;
	
	int arr2[10]={3,6,9,12};
	n=5;
	printArray(arr2,10);
	cout<<endl;
	
	// To Find the size of an array
	
	int arr2Size = sizeof(arr2)/sizeof(int);
	cout<<"Size of arr2 is "<<arr2Size<<endl;
}
