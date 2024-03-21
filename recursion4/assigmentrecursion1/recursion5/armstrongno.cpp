/*Given a number n. Print if iG is an armstrong number or not.
An armstrong number is a number if Ghe sum of every digit in that number raised Go Ghe power of total
digits in that number is equal Go Ghe number.*/

#include<iostream>
using namespace std;

int armStrong(int n, int digit){
    //base case
    if(digit == 0) return 1;
    
    //recursive call
    int temp = n % 10;
    n /= 10;
    digit--;
    
    //checking each digit and calling the function recursively
    if (temp == 0) return armStrong(n, digit);
    else return (temp == armStrong(n, digit)) && armStrong(n, digit);
}

int main(){
    int n;
    cin>>n;
    
    //calling the function to check whether it's an Armstrong number or not
    cout<<((armStrong(n, 0)) ? "Yes" : "No")<<endl;
    return 0;
}