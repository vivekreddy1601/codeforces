//code by Vivek Reddy
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll sum = 0;
    for(int i = 0; i < n-1; i+=2){
        ll s1 = abs(a[i]+1) + abs(a[i+1]+1);
        ll s2 = abs(a[i]-1) + abs(a[i+1]-1);
        sum += min(s1,s2);
    }
    if(n%2==1) 
        sum += abs(a[n-1]-1);
    cout << sum << endl;
    return 0;
}
