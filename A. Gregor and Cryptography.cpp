//https://codeforces.com/contest/1549/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{ 
  ios_base::sync_with_stdio(false);cin.tie(NULL);   
  #ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
  freopen("error.txt", "w", stderr); 
  freopen("output.txt", "w", stdout); 
  #endif  
  int t=1;
  cin>>t;
  while(t--){
    ll p;
    cin>>p;
    cout<<2<<" "<<p-1<<"\n";    
  }      
  return 0; 
}