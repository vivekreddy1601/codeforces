//code by Vivek reddy
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i*i <= n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
void sol(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 2;i <= n+1;i++){
        if(isprime(i))
            v.push_back(1);
        else
            v.push_back(2);
    }
    if(n<3)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    for(int i : v)
        cout << i << " ";
    cout << endl;
}
int main()
{
    sol();
    return 0;
}
