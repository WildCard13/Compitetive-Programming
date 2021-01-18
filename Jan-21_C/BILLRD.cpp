#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mp make_pair
#define pq priority_queue
#define pb push_back
#define eb emplace_back
#define pf push_front
#define ll long long int






int main()
{
   IOS
   ll t;
   cin >> t;
   while(t--)
   {
    ll n,k,x,y;
    cin >>n>>k>>x>>y;
    
    if(x==y)
    {
        cout<<n<<" "<<n<<endl;
        
    }
    else
    {
        vector<pair<int,int>> v;
        if(x<y)
        {
            v.pb(mp(x+n-y,n));
            v.pb(mp(n,n+x-y));
            v.pb(mp(y-x,0));
            v.pb(mp(0,y-x));
            
        }
        else
        {
            v.pb(mp(n,n+y-x));
            v.pb(mp(y+n-x,n));
            v.pb(mp(0,x-y));
            v.pb(mp(x-y,0));
           
        }
        int t=(k-1)%4;
        cout<<v[t].first<<" "<<v[t].second<<endl;


        
    }
    

    }

     
  
}