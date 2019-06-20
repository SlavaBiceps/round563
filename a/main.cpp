#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long mas[2*n+2];
    for (long long i=0;i<2*n;i++){
        cin >> mas[i];
    }
    sort(mas,mas+2*n);
    long long sum1=0,sum2=0;
    for (long long i=0;i<n;i++){
        sum1+=mas[i];
    }
    for (long long i=n;i<2*n;i++){
        sum2+=mas[i];
    }
    if (sum1!=sum2){
        for (long long i=0;i<2*n;i++){
            cout << mas[i] << " ";
        }
    } else {
        cout << "-1";
    }
}