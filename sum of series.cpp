#include<iostream>
using namespace std;
int main(){
	int firstterm,nthterm,sum=0;
	cout<<"enter first term"<<endl;
	cin>>firstterm;
	cout<<"enter nth term"<<endl;
	cin>>nthterm;
	int i;
while(firstterm<=nthterm){

i=firstterm*firstterm;
sum=sum+i;

firstterm++;
}
cout<<sum;
}

