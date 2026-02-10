#include<iostream>
using namespace std;
long long hh(long long n){
    long long i , fact=1;
    for(i=1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}
int main(){
    long long N;
    cout<<"Enter a number: ";
    cin>>N;
    cout<<"factorial: "<<hh(N)<<endl;
    return 0;
}