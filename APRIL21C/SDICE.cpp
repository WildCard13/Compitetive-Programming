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
	ll n,rem,sum;
	cin >> n;
	ll val = 0;
	val = (n/4)*44;

	rem = (n%4);

	if(n >= 4)
	{
		if(rem == 0)
		{
			val = val + 16;
		}
		if(rem == 1)
		{
			val = val + 32;
		}
		if(rem == 2)
		{
			val = val + 44;
		}
		if(rem == 3)
		{
			val = val + 55;
		}
		cout << val <<"\n";
	}
	else
	{
		if(rem == 1)
		{
			sum = 20;
		}
		if(rem == 2)
		{
			sum = 36;
		}
		if(rem == 3)
		{
			sum = 51;
		}

		cout<<sum<<"\n";

	}	


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