#include <bits/stdc++.h>
using namespace std;
 

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define mp make_pair
#define pq priority_queue
#define ub upper_bound
#define lb lower_bound 
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define pf push_front
#define ppf pop_front
#define loop(i,n) for(ll i=0;i<n;i++)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a, 0,sizeof(a))

void solve()
{
	ll n,e,h,a,b,c;
	cin >>n>>e>>h>>a>>b>>c;

	vector<ll> v1;
	vector<ll> v2;

	for(int i=0; i<=n+1; i++)
	{
		v2.pb(i);
	}

	for(ll j=0; j<=n; j++)
	{
		ll x1 = lb(v2.begin(),v2.end(), (2*n-e-2*j))-v2.begin();
		ll x2 = ub(v2.begin(),v2.end(), (h-3*j))-v2.begin()-1;
		if(x2 < x1 || x1==n+1)
			continue;
		if(x2==n+1 && x2+3*j > h)
			continue;



		ll val;
		if(c > a)
			val = (x1<(n-j)?x1:(n-j));
		else
			val = (x2<(n-j)?x2:(n-j));



		ll flag = n-val-j;
		if(val+2*j >= 2*n-e && val+3*j <= h)
		{
			v1.pb(a*flag+b*j+c*val);
		}
	}

	if(v1.size() ==0)
		cout<<"-1"<<endl;
	else
	{
		ll min = v1[0];
		for(ll i=0; i<v1.size(); i++)
		{
			if(v1[i] < min)
				min = v1[i];
		}

		cout<<min<<endl;
	}


}

	


int main()
{
 	IOS
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		solve();
 	}
 	
}