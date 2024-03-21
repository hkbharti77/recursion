//Given two numbers a & b, find the value a^b using a recursive functions

#include<iostream>
#include<math.h>
using namespace std;

int fun(int p, int q){
    //base  case
    if(q==0) return 1;
    if(q%2 == 0){
        //if q is even
        return fun(p, q/2) * fun(p, q/2); 
    }
    else{
        //if q is odd
        return p * fun(p, (q-1)/2) * fun(p, (q-1)/2);  
    }

}

int main(){
    
    int result = fun(2,3);
    cout<<result;

    return 0;
}