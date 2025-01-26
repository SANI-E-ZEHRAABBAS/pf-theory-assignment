#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of elements to store in an array"<<endl;
	cin>>n;
	int arr[n],arr2[n],sum=0;
	for(int i=0;i<n;i++){
		cout<<"enter"<<i+1<<"element"<<endl;
		cin>>arr[i];
		
		arr2[i]=arr[i];
		if(arr[i]%2==0){
			sum=sum+arr[i];
		}
	}
	cout<<"elements stored in first array are"<<endl;
	for ( int i=0;i<n;i++) {
		cout<<arr[i]<<endl;
	}
	cout<<"elements copied in second array are"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<endl;
	}
	cout<<"the sum of even elements of the array are"<<endl;
	cout<<sum;
		
}
