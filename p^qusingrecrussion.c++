//Given two numbers a & b, find the value a^b using a recursive functions

#include<iostream>
using namespace std;

int f(int p, int q){
    //base case
    if(q==0) return 1;
     return p *f(p,q-1);
}
 

int main(){

   int result = f(2,4);
   cout<<result;
    return 0;
}