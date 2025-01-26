#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int num, originalnum, n, r, result;
	cout << "Enter a number=";
	cin >> num;
	
	originalnum=num;
	
	//count number of digits in num
	while (num!=0)
	num/=10;
	n++;
	
	while (num!=0)
	{
		r= num%10;
		result+= pow(r,n);
		num/=10;
	}
	
	if (result == originalnum) 
	{
    	cout << originalnum << " is an Armstrong number." << endl;
	} 
	else
	 {
   		 cout << originalnum << " is not an Armstrong number." << endl;
	}
}
