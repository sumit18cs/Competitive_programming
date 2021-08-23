// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
typedef long long int ll;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define MOD 1000000007
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);  
//*s.find_by_order(p)   returns the value of pth largest starting from 0 
//s.order_of_key(p)   returns no. of items that are strictly < p 
//s.erase(s.upper_bound(p))  p is value and delete only one occurance of p
//string bin = bitset<64>(m).to_string();     convert decimal m to binary


int main()
{
      int n,i;
      cin>>n;
      int dp[n+3],x[n+3],y[n+3];
      for(i=1;i<=n;i++){
            cin>>x[i]>>y[i];
      }
      dp[0]=0;
      dp[1]=x[1];
      for(i=2;i<=n;i++){
            dp[i]=max(dp[i-1]+x[i],dp[i-2]+y[i]);
      }
      cout<<dp[n]<<"\n";
}
