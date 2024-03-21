// Given a number num and a value k. print k multiplea of num.

#include<iostream>
using namespace std;

void fun(int n, int k){
    //base case
    if(k < 1) return;

    fun(n,k-1);
    cout<<n*k<<" ";

}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    fun(n,k);

    return 0;
}