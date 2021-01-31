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
    ll t;
    cin >> t;
    
    ll sum;
    while(t--)
    {
    	int l,r;
    	cin >>l>>r;
    	if(l==r)
    	{
    		cout<<'1'<<endl;

    	}
    	else
    	{
    		sum = r-l+1;
    		cout<<sum+(sum-1)<<endl;

    	}
    	
    }	
    	
}