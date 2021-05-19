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


int solve()
{
	string s;
	cin >> s;
	int count=0;
	if(s[0] =='1')
		count++;
	for(int i=1; i<s.size(); i++)
	{
		if(s[i]=='1' && s[i]!=s[i-1])
			count++;
	}


	return count;
}	

	


int main()
{
 	IOS
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		cout<<solve()<<endl;
 	}
 	
}
