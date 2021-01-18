#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pf push_front
#define ll long long int


int btod(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
 
    return dec_value;
}




int main()
{
    IOS
    string encoder = "abcdefghijklmnop";
    list<int> ls;
    int t;                                                                                          
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        list<int> ls;
        string s;
        cin >> s;
        for(auto i=0;i<s.size();i=i+4)
        {
            string sub = s.substr(i,4);
            int real = stoi(sub);
            int d= btod(real);
            ls.pb(d);
            cout << encoder[d];

        }
        cout << endl; 

    }

    return 0;
}