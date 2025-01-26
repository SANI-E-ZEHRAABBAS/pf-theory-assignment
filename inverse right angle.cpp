#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"enter the number of rows"<<endl;
	cin>>rows;
		int i=rows;
	do {
		
		int j=i;
		do{
			  
			cout<<j;
			
		j--;	
		}while(j>=1);
		cout<<endl;
		i--;
	}while(i>=1);
}
