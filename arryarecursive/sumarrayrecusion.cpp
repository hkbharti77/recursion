//Find the sum of the value of the array[2,3,5,20,1].
#include<iostream>
using namespace std;

int fun(int *arr, int idx, int n){
    if(idx == n-1)  return arr[idx];
    else return arr[idx] + fun(arr, idx+1, n);
}

int main(){
     int arr[]={2,3,5,20,1};
     int n = 5;
     cout<<fun(arr,0,n);
    return 0;
}