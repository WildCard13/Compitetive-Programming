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

void solve()
{
	long int n; 
	cin >> n;
	long int x=0,y=1;

	while(n>=x)
	{
		x = pow(2,y);
		y++;
	}

	long int p = pow(2,y-2)-1;
	long int sum = x-n;
	long int ans = p*(p+sum);
	
	cout<<ans<<endl;
}

	


int main()
{
 	IOS
 	long int t;
 	cin >> t;
 	while(t--)
 	{
 		solve();
 	}
 	return 0;
 	
}