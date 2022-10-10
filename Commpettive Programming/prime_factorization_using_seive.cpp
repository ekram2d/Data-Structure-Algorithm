#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const ll N =1e6+5;
ll spf[N];
void minimum_prime(){

ll i,j;
for(i = 2 ;  i <= N ; i++) {
    spf[i]=i;
}
for(i = 2 ; i <=  N ; i++) {

    for(j = i ; j <= N ; j+=i) {
spf[j]=min(spf[j],i);

    }
}


}
int main(){
ll i , j;

minimum_prime();
ll query;
cin >> query;
while (query--)
{
    /* code */
    ll n;
    cin >> n ;
vector<ll>ans;
    while (n>1)
    {
        /* code */
       ans.push_back(spf[n]);
       n/=spf[n];

    }
   

    for(auto u: ans){
        cout<<u<< " ";
    }
    cout<<endl;
}

}