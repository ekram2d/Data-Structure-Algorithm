#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

const ll N=1e7+10;
vector<ll>prime;
bool f[N];

void prime_build(){
    f[1]=true;
for(ll i  = 2; i <= N ; i++) {
if(f[i]==false){
prime.push_back(i);
    for(ll j =i*i ;  j <= N ; j+=i) {
f[j]=true;

    }
}

}
}

int main() {
    auto st=clock();
prime_build();
cout<<prime.size()<<endl;
for(int i =0 ; i <prime.size(); i++) {
    //cout<<prime[i]<<" ";
}


//cout<<1.0*(clock()-st)/CLOCKS_PER_SEC<<'\n';
}
