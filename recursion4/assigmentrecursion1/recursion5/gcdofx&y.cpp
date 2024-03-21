//Given two number, x and y. Find the greatest common divisor of x and y u,ing recursion.
#include<iostream>
using namespace std;

int gcd(int x, int y){

    if(y>x) return gcd(y,x);  
    
    /*while (y !=0 ) {  
        x = x % y ;  
        y = y % y ;  
    }   
    return x;  
}*/
    //base case
    if (y == 0) return x; 
    else return gcd(y, x % y); // also use recplace gcd(y, x -y).
}



int main(){
    int x,y;
    cin>>x>>y;
    cout<<"The GCD is "<<gcd(x,y);

    return 0;
}