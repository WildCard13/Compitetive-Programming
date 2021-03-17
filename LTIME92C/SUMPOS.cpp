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



  
int main() 
{ 
	IOS
	int t;
	cin >> t;
	
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(x==y+z)
		{
			cout<<"YES"<<endl;
		}
		else if(y==x+z)
		{
			cout<<"YES"<<endl;
		}
		else if(z==x+y)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
	
}
