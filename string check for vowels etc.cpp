#include<iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int vowels=0, consonants=0, upperCase=0, lowerCase=0, specialChar=0, digits=0, words=1;

    for(int i=0;i<str.length();i++) {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') vowels++;
            else consonants++;
            if(str[i]>='A'&&str[i]<='Z') upperCase++;
            else lowerCase++;
        }
        else if(str[i]>='0'&&str[i]<='9') digits++;
        else if(str[i]==' '&&i>0&&i<str.length()-1) words++;
        else specialChar++;
    }

    cout<<"Vowels: "<<vowels<<"\nConsonants: "<<consonants<<"\nUppercase letters: "<<upperCase<<"\nLowercase letters: "<<lowerCase<<"\nSpecial characters: "<<specialChar<<"\nDigits: "<<digits<<"\nWords: "<<words<<"\n";
    return 0;
}

