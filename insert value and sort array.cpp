#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Input the number of elements to be stored in the array:";
    cin>>n;

    int arr[n+1];

    cout<<"Input "<<n<<" elements in the array:"<<endl;
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }

    int newValue;
    cout<<"Input the value to be inserted:";
    cin>>newValue;

    arr[n]=newValue;

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-i; ++j) {
            if(arr[j]<arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"The array after insertion and sorting in descending order is:"<<endl;
    for(int i=0; i<=n; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

