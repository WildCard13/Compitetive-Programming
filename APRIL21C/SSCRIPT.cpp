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
	ll n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll i,max = 0,count = 0;

	for (i=0; i<n; i++)
	{
		if(s[i] == '*')
		{
			count++;
			if(count >= max)
			{
				max = count;
			}
		}
		else
			count = 0;
	}
	if(max >= k)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


	
	
}	


	



int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		solve();
	}
	return 0;
}