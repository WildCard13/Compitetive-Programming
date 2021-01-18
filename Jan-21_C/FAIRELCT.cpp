#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pq priority_queue
#define pb push_back
#define pf push_front
#define ll long long int






int main()
{
   IOS
   ll t;
   cin >> t;
   while (t--)
   {
        ll n,m;
        cin>>n>>m;
        ll s1=0,s2=0,c=0;
        pq<ll,vector<ll>,greater<int>> p1;
        pq<ll> p2;

        for(auto i=0;i<n;i++)
        {
            ll a;
            cin>>a;

            s1+=a;
            p1.push(a);
        }
        for(auto i=0; i<m; i++)
        {
            ll a;
            cin>>a;

            s2+=a;
            p2.push(a);
        }
        if(s1>s2)
        {
            c=1;
            cout<<"0";
        }
        else
        {
            for(auto i=0;i<n;i++)
            {

                ll a=p1.top();
                ll b=p2.top();
                s1-=a;
                s1+=b;
                s2-=b;
                s2+=a;
                p1.pop();
                p2.pop();
                p1.push(b);
                p2.push(a);
                if(s1>s2)
                {
                    c=1;
                    cout<<i+1;
                    break;
                }

            }
            if(c==0)
                cout<< "-1";    

        }
        cout << endl;
        
    } 
     
   
}