#include <bits/stdc++.h>

using namespace std;

long long mas[222000];

int main(){
    long long n;
    cin >> n;
    long long j=0;
    for(long long i=2;i<=n;i++){
        if(mas[i]==0) {
            j++;
            for(long long k=i;k<=n;k+=i)
                mas[k]=j;
        }
    }
    for( long long i=2;i<=n;i++) {
        cout << mas[i] << " ";
    }
}