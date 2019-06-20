#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n,tr,ntr;
    cin >> n;
    long long mas[n];
    for (long long i=0;i<n;i++){
        cin >> mas[i];
        if (mas[i]%2==1){tr=1;}
        if (mas[i]%2==0){ntr=1;}
    }
    sort(mas,mas+n);
    if (tr==1&&ntr==1) {
        for (long long i=0;i<n;i++){
            cout << mas[i] << " ";
        }
    }
    return 0;
}