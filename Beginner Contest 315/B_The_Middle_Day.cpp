#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    int a[t];
    int sum = 0;
    while(t--) {
        int n; cin >> a[n];
        sum += a[n];
    }
    int middle;
    if(sum % 2 == 0) middle = sum / 2;
    else middle = (sum + 1) / 2;
    int day_count = 0, month;
    for(int i = 0; i < t; i++) {
        day_count += a[i];
        if(middle - day_count <= 30)
        month = i;
    }
    return 0;
}