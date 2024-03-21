// Given a number n. Find the sum of natural numbers till n nut with alternate sign.
// For example, if n=5 then answer will be 1-2+3-4+5=-10
#include<iostream>
using namespace std;

int fun(int  n) {
    //base case
    if(n == 0) return 0;
    //assumption
    return fun(n - 1)+  ((n % 2 == 0)? (-n) : (n));//calculate sum of first n-1 natural num with alternate, amd we will add cont of n
    
}

int main(){
    int n;
    cin>>n;
   cout<<fun(n);
    return 0;
    //return 0;
}