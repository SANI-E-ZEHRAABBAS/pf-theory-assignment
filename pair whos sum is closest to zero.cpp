#include<iostream>
using namespace std;

int main() {
    int arr[]={38,44,63,-51,-35,19,84,-69,4,-46};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minSum=(arr[0]+arr[1]<0)?-(arr[0]+arr[1]):(arr[0]+arr[1]);
    int pair1=arr[0],pair2=arr[1];

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            int sum=arr[i]+arr[j];
            int absSum=(sum<0)?-sum:sum;
            if(absSum<minSum) {
                minSum=absSum;
                pair1=arr[i];
                pair2=arr[j];
            }
        }
    }

    cout<<"The given array is: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"\nThe Pair of elements whose sum is minimum are:\n["<<pair1<<", "<<pair2<<"]\n";

    return 0;
}

