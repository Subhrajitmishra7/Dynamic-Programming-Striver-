#include<iostream>
#include<vector>
using namespace std;
// int f(int n,vector<int> &dp)
// {
//     if(n <= 1)
//     return n;
    
//     if(dp[n] != -1)
//     return dp[n];

//     return dp[n] = f(n-1,dp) + f(n-2,dp);
// }
// time complexity = O(N)(linear calling)
// space complexity = O(N)(for stack space)+O(N)(for array space)
int main(){
    int n;
    cin>>n;
    // vector<int> dp(n+1,-1);
    // cout<<f(n,dp);
    
    
    //Approach 2 (Tabulation)
    // int dp[n+1];
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=2;i<=n;i++)
    // {
    //     dp[i] = dp[i-1]+dp[i-2];
    // }
    // cout<<dp[n];
    // time complexity = O(N)
    // space complexity =O(N)(for array space)

    //Approach 3
    int prev=1;
    int prev2=0;
    for(int i=2;i<=n;i++)
    {
        int curi = prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
    // time complexity = O(N)
    // space complexity = O(1) (in constant time)
    return 0;
}