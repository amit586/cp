#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second

using namespace std;

int main()
{
    fio
    int TC;
    cin>>TC;
    //TC=1;
    while(TC--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n+k*2<<endl;
            continue;
        }
        else
        {
            k--;
            ll fn = n;
            for(int i=2;i*i<=n;i++)
                if(n%i==0)
                {
                    fn = i;
                    break;
                }
            n = fn+n;
            cout<<n+k*2<<endl;
        }
    }
    return 0;
}
