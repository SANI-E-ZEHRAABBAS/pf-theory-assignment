#include<iostream>
using namespace std;
int main(){
	int starting,ending,productofodd=1;;
	cout<<"enter your starting point"<<endl;
	cin>>starting;
	cout<<"enter your ending point"<<endl;
	cin>>ending;
	
	for(int i=starting;i<=ending;i++){
		if(i%2==0){
			cout<<i<<endl;
		}
		else{
			productofodd=productofodd*i;
			
			
		}
	}
	cout<<productofodd;
	cout<<endl;
	
}
