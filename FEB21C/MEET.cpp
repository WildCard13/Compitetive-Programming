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


string minute(string str)
{
	string mm = str.substr(3,2);
	return mm;

}


int hour(string str)
{
	int h1 = (int)str[1]-'0';
	int h2 = (int)str[0]-'0';
	int hh = (h2 * 10 + h1);


	if(str[6]=='A')
	{
		if(hh == 12)
		{
			return 0;
		}
		else
		{
			return hh;
		}
	}
	if(str[6]=='P')
	{
		if(hh == 12)
		{
			return 12;
		}
		else
		{
			return (hh +12);
	
		}
	}
	return 0;
	
}
int concatenate(int a, string b)
{
	string p = to_string(a);
	string z = p+b;
	int ans = stoi(z);
	return ans;
}


void solve()
{
	string s1;
	getline(cin,s1);
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		string start,end;
		start = s.substr(0,8);
		end = s.substr(9,8);
		int time = concatenate(hour(s1),minute(s1));
		int s_time =concatenate(hour(start),minute(start));
		int e_time = concatenate(hour(end),minute(end));
		if(time>=s_time && time<=e_time)
			cout<<"1";
		else
		    cout<<"0";
	
    }
    cout<<endl;
    	
    
}

int main() 
{ 
	IOS
	ll t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		solve();

	}
	
}




