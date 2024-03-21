//Given an integer, find out the sum of its digits using recursion

#include<iostream>
using namespace std;

int sum(int n){
    //base case
    if(n<=9 && n>=0) return n;
    return sum(n/10)+(n%10);
}

int main(){
 
 double result = sum(457333);
 cout<<result;
    return 0;
}
