//Remove all the occurence of 'a', from string s = 'a b c a x'.
#include<iostream>
using namespace std;

string fun(string &s, int idx, int n){
    // base case
    if (idx == n) return "";
   string curr = "";
    curr+= s[idx];
    return ((s[idx] == 'a')? "" : curr) + fun(s,idx+1,n);
   
}

int main(){
   string s = "abcax";
   int n=5;
   cout<<fun(s,0,n);
    return 0;
}