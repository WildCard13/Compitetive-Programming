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


int solve(string s)
{
	ll l = s.length();
	if(l==0){
		return true;
	}
	ll left = 0, up = 0;
	for(int i=0; i<l; i++)
	{
		if(s[i] == 'L'){
			left++;
		}
		if(s[i] == 'R'){
			left--;
		}
		if(s[i] == 'U'){
			up++;
		}
		if(s[i] == 'D'){
			up--;
		}
	}
	if(left == 0 && up == 0)
		return true;
	else
		return false;
}


  
int main() 
{ 
	IOS
	string s;
	cin >> s;
	ll val = solve(s);
	if(val == 1)
		cout <<"true"<<endl;
	else
		cout <<"false"<<endl;
	
	
}

