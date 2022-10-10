#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

const ll N=1e7+10;
vector<ll>prime;
bool f[N];


int main() {
    auto st=clock();

int n;
cin >> n ;
vector<int>vec;

for(int i = 2 ; i*i <= n ; i++){
if(n%i == 0 ){

    while (n%i==0)
    {
        vec.push_back(i) ;

        n/=i;
        /* code */
    }

    
}}
if(n>1){
    vec.push_back(n);

}
for(auto u : vec) {
    cout<< u <<" ";
}


//cout<<1.0*(clock()-st)/CLOCKS_PER_SEC<<'\n';
}
