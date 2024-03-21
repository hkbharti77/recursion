/*Given a number n which denotes the number of variables in the equation and a val which
denotes the sum of these variables, count the number of such non-negative integral solutions
that are possible.*/
#include<iostream>
using namespace std;
int sumNonNegative(int n, int val){
    int total_sum = 0;
    //base case
    if(n == 1 && val >= 0) return  1;
    //recursive case
    else{
    for(int i =0;i<=val;i++){
        total_sum+= sumNonNegative(n-1, val - i);
    }}
    return total_sum;
}
int main(){
    int n, val;
    cin>>n>>val;
    cout<<sumNonNegative(n, val);
    return 0;
}
