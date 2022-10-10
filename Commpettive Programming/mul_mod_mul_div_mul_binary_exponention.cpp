 #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int

    long long mulmod(long long a, long long b, long long m) {
        long long res = 0LL;
        a = a % m;
        while (b > 0) {
            if (b & 1) res = (res + a) % m;
            a = (a + a) % m;
            b >>= 1;
        }
        return res;
    }
    ll power(ll base,ll p,ll m)
    {
        ll res=1;
        while(p)
        {
            if(p%2==1)
            {
                res=mulmod(res,base,m);
              //  res=(res*base)%m;
                p--;
            }
            else{
                    base=mulmod(base,base,m);
              //  base=(base*base)%m;
                p/=2;
            }
        }
        return res%m;
    }
    int main()
    {

         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll a,b,m;
        cin>>a>>b>>m;  //(a/b)%m
    ll pow=power(a,b,m);
    cout<<pow<<endl;
    cout<<mulmod(a,b,m)<<endl;
        ll x = power(b,m-2,m);
        ll ans=mulmod(a,x,m);
        cout<<ans<<endl;
        return 0;

    }