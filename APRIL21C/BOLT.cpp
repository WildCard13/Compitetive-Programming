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
	float k1,k2,k3,v;
	cin >> k1 >> k2 >> k3 >> v;

	float time = k1*k2*k3*v;
	float var = 100.00/time;
	float temp = 9.575;
	if(var >= temp)
		cout <<"NO"<<endl;
	else
		cout<<"YES"<<endl;
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