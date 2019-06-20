#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

bool vis[262144];
long long b[262144];

int main(){
    long long n,x,kol=1;
    cin >> n >> x;
    vis[x]=true;
    b[0]=0;
    for(long long i=1;i<(1<<n);i++){
        if (vis[i]) continue;
        vis[i^x]=true;
        b[kol++]=i;
    }
    cout << kol-1 << endl;
    for(long long i=1;i<kol;i++) {
        cout << (b[i]^b[i-1]) << " ";
    }
    return 0;
}