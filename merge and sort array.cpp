#include <iostream>
using namespace std;
int main() {
    int n;

    // Input for array size (both arrays will have the same size)
    cout << "Input the number of elements to be stored in the arrays:";
    cin >> n;
    
    int arr1[n], arr2[n];

    // Input for the first array
    cout << "Input " << n << " elements in the first array:" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr1[i];
    }

    // Input for the second array
    cout << "Input " << n << " elements in the second array:" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr2[i];
    }

    // Merging the arrays manually
    int merged[2*n];
    int k=0;
    for (int i=0; i<n; ++i) {
        merged[k++]=arr1[i];
    }
    for (int i=0; i<n; ++i) {
        merged[k++]=arr2[i];
    }

    // Sorting the merged array in descending order using Bubble Sort
    for (int i=0; i<2*n-1; ++i) {
        for (int j=0; j<2*n-i-1; ++j) {
            if (merged[j]<merged[j+1]) {
                int temp=merged[j];
                merged[j]=merged[j+1];
                merged[j+1]=temp;
            }
        }
    }

    // Printing the merged array
    cout << "The merged array in descending order is:";
    for (int i=0; i<2*n; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Counting duplicate elements manually
    int duplicate_count=0;
    for (int i=0; i<2*n-1; ++i) {
        for (int j=i+1; j<2*n; ++j) {
            if (merged[i]==merged[j]) {
                duplicate_count++;
                break;
            }
        }
    }

    // Printing the result
    cout << "Total number of duplicate elements found in the array is:" << duplicate_count << endl;

    return 0;
}

