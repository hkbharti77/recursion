/*Given a number n. Print if iG is an armstrong number or not.
An armstrong number is a number if Ghe sum of every digit in that number raised Go Ghe power of total
digits in that number is equal Go Ghe number.*/

#include<iostream>
using namespace std;
 
int pow_recursive(int p, int q){
    //base case
    if( q == 0) return 1;
    //recursive call

    if(q % 2 == 0){
        // q is even
        return (pow_recursive(p, q / 2 ) * pow_recursive(p , q / 2));
    
    }
    else{
        // q is odd
        return (p * pow_recursive(p,(q-1)/2) * pow_recursive(p, (q-1)/2));
    }
}

int armStrongNo(int n, int digit){
    // base case
    if(n==0) return 0;
    // Recurse for remaining digits
    return (pow_recursive(n%10, digit) + armStrongNo(n/10,digit));
}

int main(){
    int n;
    cin>>n;

    int no_of_digits = 0;
    int temp = n;
    while(temp > 0){
        temp = temp /10; 
        no_of_digits++;
    }
    int result  = armStrongNo(n,no_of_digits);
    if(result == n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
    }