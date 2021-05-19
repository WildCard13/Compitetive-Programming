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
	ll n;
	cin >> n;

	vector<int> v;

	for(int i=0; i<n; i++)
	{
		int num;
		cin >> num;
		v.pb(num);
	}

	sort(v.begin(),v.end());

	ll x=0,y=0;

	for(int j=0; j<n; j++)
	{
		if(j+1-v[j] < 0)
		{
			x = 1;
			break;
		}

		y = y+(j+1-v[j]);
	}

	if(x ==1)
		cout << "Second"<<endl;
	else{
		if(y%2 == 1)
		{
			cout<<"First"<<endl;

		}
		else
			cout<<"Second"<<endl;
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