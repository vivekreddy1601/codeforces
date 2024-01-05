//code by Vivek Reddy
#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int vt;cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n;i++)
            cin >> a[i];
        int mini = INT_MAX;
        int ind = -1;
        sort(a.begin(),a.end());
        for(int i =1;i < n;i++){
            if(abs(a[i]-a[i-1])<mini){
                mini = abs(a[i]-a[i-1]);
                ind = i;
            }
        }
        vector<int> small,big;
        for(int i = 0; i < n;i++){
            if(i == ind||i == ind-1) continue;
            if(a[i]>a[ind-1]) big.push_back(a[i]);
        }
        for(int i = 0; i < n;i++){
            if(i == ind || i == ind-1) continue;
            if(a[i]<=a[ind])small.push_back(a[i]);
        }
        cout << a[ind-1] << ' ';
        for(auto i : big)cout << i << ' ';
        for(auto i : small)cout << i << ' ';
        cout << a[ind] << endl;
    }
    return 0;
}
