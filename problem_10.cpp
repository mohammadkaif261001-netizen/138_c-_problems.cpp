#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch== 'i' || ch=='o' || ch=='u' ||ch=='A' ||ch=='E' || ch=='I' || ch=='O' ||ch=='U') {
 cout<<"This character is vowel.";
    }  
else{
    cout<<"This character is consonent.";
}
return 0;  }
