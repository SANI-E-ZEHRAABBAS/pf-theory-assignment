#include<iostream>
using namespace std;
int main(){
	int i ,positivecount=0,negativecount=0;
	do{

		cout<<"enter the number"<<endl;
		cin>>i;
		if(i>=0){
			positivecount++;
		}
		else{
		negativecount++;
	}
		
	}while( i!=0);
	cout<<"positive count="<<positivecount;
	cout<<"negative count="<<negativecount;
}
