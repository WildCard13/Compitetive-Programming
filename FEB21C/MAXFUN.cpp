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
    int T;
    ll N;
    ll f1=0, f2=0,s1=0, s2=0,t1=0,t2=0,ans1=0,ans2=0;
    cin>>T;
    while(T--)
    { 
        
        cin>>N;
        ll arr[N];
        for(int i=0;i<N;i++){  
            cin>>arr[i];
        }
        sort(arr,arr+N);
         f1=arr[N-1];
         s1=arr[0];
         t1=arr[1];
         f2=arr[N-1];
         s2=arr[N-2];
         t2=arr[0];
         ans1=abs(f1-s1)+abs(s1-t1)+abs(t1-f1);
         ans2=abs(f2-s2)+abs(s2-t2)+abs(t2-f2);
        cout<<max(ans1,ans2)<<endl;
         
        
    }
          
        
        
        
        
        
 }
    
    
	