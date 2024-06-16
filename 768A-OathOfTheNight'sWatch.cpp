//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;

int main()
{
    ll n,mini=0,maxi=0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i= 0;i < n;i++){
        if(a[i]==a[0])
            mini++;
        else if(a[i]==a[n-1])
            maxi++;
    }
    cout << n-(mini+maxi) << '\n';
    return 0;
}
