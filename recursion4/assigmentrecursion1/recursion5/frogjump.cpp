/* There are N stones, numbered 1,2,...,N. For each i (1≤i≤N), the height of Stone i is hi. There is a frog who
is initially on Stone 1T He will [repeat the following action so?e nu?be[ of ti?es to [each Stone N:
If the frog is currently on Stone i, jump to Stone i+1 of Stone ,i+2 Here, a cost of ∣ hi - hj∣ is incurred, where j is the
stone to land on.*/

#include<vector>
#include<iostream>
using namespace std;

int frogJump(int *hight, int n, int  i) {
    //base case
    if(i == n-1) return 0;
    if(i == n-2) return frogJump(hight,n,i + 1) + abs(hight[i] - hight[i + 1]);

    return min(frogJump(hight, n, i+1) + abs(hight[i] - hight[i + 1]), frogJump(hight, n, i+2)+ abs(hight[i] - hight[i + 2]));
}

int main() {
    int n;
    cin>>n;
    
    int stones[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> stones[i];
        }
      cout<<frogJump(stones, n,0);
    return 0;
}