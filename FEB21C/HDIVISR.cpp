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
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a, 0,sizeof(a))


 void solve()
{
	ll num;
	cin >> num;
	vector<int> v;
	for(int i=1;i<=10;i++)
	{
		if(num % i == 0)
			v.pb(i);
	}
	sort(v.begin(), v.end(), greater<int>());
	cout<<v[0]<<endl;
}


int main() 
{ 
	IOS
	solve();
	
}

