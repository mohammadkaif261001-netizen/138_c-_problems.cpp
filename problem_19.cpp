#include<iostream>
using namespace std;
void hh(int n){
    int i , a=0 , b=1, next;
    for(i=1; i<=n ; i++){
        cout<<" "<<a;
        next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int N;
    cout<<" Enter a number: ";
    cin>>N;
    cout<<"Febonacci: "<<endl;
    hh(N);
    return 0;

}