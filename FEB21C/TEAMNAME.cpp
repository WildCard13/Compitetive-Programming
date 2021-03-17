#include <bits/stdc++.h>
using namespace std;
 

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define mp make_pair
#define pq priority_queue
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define pf push_front
#define ppf pop_front
#define loop(i,n) for(ll i=0;i<n;i++)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a, 0,sizeof(a))


int common (vector<char> a, vector<char> b)
{
	set<char> s(a.begin(), a.end());
	ll ans = 0;
	for(auto x : b)
	{
		if(s.find(x) != s.end())
			ans++;
	}
	return ans;
}


void solve()
{
	ll n;
		cin >> n;

		map<string,vector<char>> m;
		map<string,vector<char>> :: iterator i1,j1;

		string s;
		for(ll i=0; i<n; i++)
		{
			cin >> s;
			if(s.length()>0)
			    m[s.substr(1)].pb(s[0]);
        }

        ll ans = 0;
        for(auto i : m)
        {
        	for(auto j : m)
        	{
        		if(i.first != j.first)
        		{
        			ll temp = common(i.second,j.second);
				    ans +=(i.second.size()-temp)*(j.second.size()-temp);
        		}
        	}
        }
 
        cout << ans <<endl;

}


int main()
{
	IOS
	ll t;
	cin >> t;

	while(t--)
	{
		solve();
	
	}
	return 0;
}	
