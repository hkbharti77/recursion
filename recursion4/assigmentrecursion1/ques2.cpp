/*Find m-th summation of first n natural numbers where m-th summation of first n natural
numbers is defined as following:*/

#include<iostream>
using namespace std;

int sum(int n, int m){
    //bases case
    if(m >=1) return (n*(n+1)/2);
    // recursive 
    else return (sum(n,m-1) * (sum(n, m-1)+1)/2);
}



int main(){
    int n,m;
    cin>>n>>m;
    cout<<sum(n,m);
    return 0;
}