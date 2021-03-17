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

	int num;
	cin >> num;
	int wet[num];
	int len[num];
	loop(i,num)  cin>>wet[i];
	loop(i,num)  cin>>len[i];
	if(num == 2)
	{
		if(wet[0]==1 && wet[1]==2)
			cout<<"0"<<endl;
		else
		{
			if(len[0]==1)
				cout<<"2"<<endl;
			else
				cout<<"1"<<endl;
		}

	}
	else if(num ==3)
	{
		int p,q,r,pp,qq,rr;
		int ans = 0;
		loop(i,num)
		{
			if(wet[i]==1)
			{
				p = i;
				pp = i;
			}
			else if(wet[i]==2)
			{
				q = i;
				qq = i;
			}
			else if(wet[i]==3)
			{
				r = i;
				rr = i;
			}
		}
		while(r<=q || q<=p || r<=p)
		{
			while(q<=p)
			{
				q+=len[qq];ans++;
			}
			while(r<=q || r<=p)
			{
				r+=len[rr];ans++;
			}

		}
		cout<<ans<<endl;

	}
	else if(num==4)
	{
		int p,q,r,s,pp,qq,rr,ss;
		int ans = 0;
		loop(i,num)
		{
			if(wet[i]==1)
			{
				p = i;
				pp = i;
			}
			else if(wet[i]==2)
			{
				q = i;
				qq = i;
			}
			else if(wet[i]==3)
			{
				r = i;
				rr = i;
			}
			else if(wet[i]==4)
			{
				s = i;
				ss = i;
			}
		}
		while(s<=p || s<=q || s<=r || r<=q || q<=p || r<=p)
		{
			while(q<=p)
			{
				q+=len[qq];ans++;
			}
			while(r<=q || r<=p)
			{
				r+=len[rr];ans++;
			}
			while(s<=p || s<=q || s<=r)
			{
				s+=len[ss];ans++;
			}

		}
		cout<<ans<<endl;


	}
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
	
}