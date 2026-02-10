#include<iostream>
using namespace std;
int main(){
    double num1, num2;
    char op;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter an oparetor ";
    cin>>op;
    switch(op){
        case '+':
        cout<<"Result : "<<num1 + num2<<endl;
        break;
        case '-':
        cout<<"Result : "<<num1 - num2<<endl;
        break;
        case '*':
        cout<<"Result : "<<num1 * num2<<endl;
        break;
        case '/':
        if(num2!=0){
            cout<<"Result : "<<num1 / num2<<endl;
        }
        else {
            cout<<"Cannot divide by Zero.";
        }
        break;
        default :
        cout<<"Invalid oparetor.";
    }
    return 0;
}