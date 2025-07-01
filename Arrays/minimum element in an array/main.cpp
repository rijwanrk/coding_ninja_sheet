#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int arr[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	cout<<min;
}
