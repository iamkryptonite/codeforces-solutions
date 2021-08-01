//https://codeforces.com/contest/1549/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
  int t=1;
  while(t--){
    int n,m,q,ans = 0;
    cin>>n>>m;
    int dp[n+1];
    memset(dp,0,sizeof(dp));


    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        if(u<v)
            dp[u]++;
        else
            dp[v]++;
        
    }

    for(int i=1;i<=n;i++)
        if(dp[i]==0)
            ans++;   

    cin>>q;
    while(q--){
        int p;
        cin>>p;
        if(p==3)
            cout << ans << "\n";
        else{
            int u,v;
            cin >> u >> v;
            if(p==1){
                int prevu = dp[u];
                int prevv = dp[v];
                if(u < v){
                    dp[u]++;
                    if(prevu==0) ans--;
                }else{
                    dp[v]++;
                    if(prevv==0) ans--;
                }
            }else{
                if(u<v){
                    dp[u]--;
                    if(dp[u]==0) ans++;
                }else{
                    dp[v]--;
                    if(dp[v]==0) ans++;
                }
            }
        }
    }
    
  }      
  return 0; 
}
//author @thesatyakidas.00220033