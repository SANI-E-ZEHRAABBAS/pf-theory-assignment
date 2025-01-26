#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int freq[256]={0};
    for(int i=0;i<str.length();i++) freq[str[i]]++;
    cout<<"The count of each character in the string "<<str<<" is:\n";
    for(int i=0;i<256;i++) {
        if(freq[i]>0) cout<<(char)i<<"\t"<<freq[i]<<endl;
    }
    return 0;
}

