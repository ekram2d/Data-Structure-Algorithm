#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

ll const N =1e6;

int main() {
    auto st=clock();

int n;
//cin >> n ;
n=N;
vector<int>vec(n+1,0);

for(int i = 1 ; i <= n ; i++) {
    for(int j= i ; j <= n ;j+=i) {
        vec[j]+=i;
    }
}

for( int i = 1 ; i <= n ; i++) {


    cout<<i<<" "<<vec[i] <<endl;
}

//cout<<1.0*(clock()-st)/CLOCKS_PER_SEC<<'\n';
}
