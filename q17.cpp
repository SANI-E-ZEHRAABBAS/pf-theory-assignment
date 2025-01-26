#include<iostream>
using namespace std;
int arr[10]={3,4,7,10,11,12,17,19,20,23};
bool isPrime(int n) {
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return false;
    }
    return true;
}
int sumOfPrimes() {
    int sum=0;
    for(int i=0;i<10;i++) {
        if(isPrime(arr[i])) sum+=arr[i];
    }
    return sum;
}
int main() {
    int sum=sumOfPrimes();
    cout<<"The sum of prime numbers in the array is: "<<sum<<endl;
    return 0;
}

