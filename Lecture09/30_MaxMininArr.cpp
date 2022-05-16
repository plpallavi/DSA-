#include<iostream>
using namespace std;

int getMin(int num[],int n){
	int mini = INT_MAX;
	
	for(int i=0; i<n; i++){
		
		mini = min(mini, num[i]);
		
		/*
		if(num[i]>max){
			max=num[i];
		}
		*/
	}
	
	// Returning min value
	return mini;
}


int getMax (int num[],int n){
	int maxi = INT_MIN;
	
	for(int i=0; i<n; i++){
		maxi = max(maxi,num[i]);
		
		/*
		if(num[i]>min){
			max=num[i];
		}
		*/
	}
	
	// Returning max value
	return maxi;
}


int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	
	
	int num[100];
	//taking input in array
	for(int i=0;i<size;i++){
		cin>>num[i];
	}
	
	cout<<"Maximum Value is "<<getMax(num,size)<<endl;
	cout<<"Minimum Value is "<<getMin(num,size)<<endl;
	
	return 0;
}
