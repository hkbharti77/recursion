//Given a number n, print the following pattern without using any loop. 
#include<iostream>
using namespace std;

void fun(int n, int m, bool flag){
    cout<<m<<" ";
   if(flag == false && n == m )
   return ;
   if(flag){
    if(m - 5 > 0)  fun(n,m - 5,true);
   else
    fun(n,m - 5, false);
}
   else  fun(n, m + 5, false);
}
int main(){
    int n;
    cin>>n;
    fun(n,n,true);
    return 0;
}