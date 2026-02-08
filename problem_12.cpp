#include<iostream>
using namespace std;
void hh(int n) {
    int i, sum=0;
    for(i=0; i<=n ;i++){
        sum=sum+i;
    }
    cout<<"sum of first "<< n <<" natural numbers: "<<sum <<endl;

}
int main() {
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    hh(N);
    return 0;
}