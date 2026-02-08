#include<iostream>
using namespace std;
int hh(int n){
    if((n%400==0)|| (n%4==0 && n%100!=0)){
    return true;}
    else {
        return false;
    }
}
int main(){
    int N;
    cout<<"Enter a year: ";
    cin>>N;
    if(hh(N)){
        cout<<"This year is leap year.";

    }
    else {
        cout<<"This year is not a leap year. ";
    }
    
    return 0;

}