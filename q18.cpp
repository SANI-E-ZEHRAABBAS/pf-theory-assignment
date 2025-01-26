#include<iostream>
using namespace std;

void solve(int n) {
    cout<<"Table of "<<n<<":\n";
    for(int i=1;i<=10;i++) cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}

void solve(float x, float y, float z) {
    float sum=x*x+y*y+z*z;
    cout<<"Sum of squares: "<<sum<<endl;
}

float solve(int a, int b, int c, int d) {
    return (a+b+c+d)/4.0;
}

template<typename T>
void solve(T x, T y, T z) {
    cout<<"Sum of squares: "<<x*x+y*y+z*z<<endl;
}

int main() {
    solve(5); // First
    solve(3.5f,4.6f,2.1f); // Second
    cout<<"Average: "<<solve(3,4,5,6)<<endl; // Third
    solve(3,4,5); // Template execution with integers
    solve(3.5f,4.5f,2.3f); // Template execution with floats
    return 0;
}

