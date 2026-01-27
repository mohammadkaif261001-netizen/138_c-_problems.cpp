#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        cout<<"This number is negative.";
    }
    else if(n>0) {
        cout<<"This number is positive.";
    }
    else {
        cout<<"This number is Zero.";
    }
    return 0;
}