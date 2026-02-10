#include<iostream>
using namespace std;
int hh(int n){
    if((n%400==0)||(n%4==0)&&(n%100!=0)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int N;
    cout<<"Enter a numbers: ";
    cin>>N;
    if(hh(N)){
        cout<<" "<<N<<" this year is leap year.";
    }
    else{
        cout<<" "<<N<<" this year is not a leap year.";
    }
    return 0;
}
