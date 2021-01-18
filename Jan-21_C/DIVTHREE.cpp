#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mp make_pair
#define pq priority_queue
#define pb push_back
#define eb emplace_back
#define pf push_front
#define ll long long int






int main()
{
   IOS
   int t;
    cin>>t;
    while (t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        int sum=0;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        int s = sum/k; 
        if(s<d)
            cout << s <<endl;
        else
            cout << d<< endl;
    }
    return 0;
   
  
}