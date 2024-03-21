#include<iostream>
using namespace std;

void  fun(int n){
    //base case
    if(n<1) return ;
    //go and print first n-1 natural number --> asumption

    fun(n-1);
    cout<<n<<" \n";  //printing the current element of array/

}

int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}