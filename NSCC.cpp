#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    s+='+';
    int a=s.size();

    int i=0,ans=0,x=1,plus=0;
    while (i<a)
    {
        if (x==a)
        {
            ans+=a;
            break;
        }
        if (s[i]=='+')
        {
            plus++;
            x++;
            i++;
            continue;
        }
        else
        {
            if (plus>0)
            {
                x++; 
                plus--;
                i++;
                continue; 
            }
            else 
            {
                ans+=x;
                x++;
                i++;
            }
        }
    }

    cout<<ans-1<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}