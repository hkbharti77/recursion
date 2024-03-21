// Given array, print all the element of the array recursive.
#include<iostream>
#include<vector>
using namespace std;

int fun(int *arr, int idx, int n){
    //base case
    if(idx == n) return 0;
    // selft work
    cout<<arr[idx]<<" \n";
    //assume that
    fun(arr, idx+1, n);
}

int main(){
    
    int n = 5;
   
    int arr[] = {23,46,78,9};
    fun(arr, 0, n);
    


    return 0;
}