#include<iostream>
using namespace std;
int main(){
	
	for(int  i=2;i<=25;i++){
		if(i==13||i==16||i==9){
			continue;
		}
		 else if(i==23){
		 	cout<<i;
			break;
		}
		else{
			cout<<i;
		}
			cout<<endl;
		}
	}

