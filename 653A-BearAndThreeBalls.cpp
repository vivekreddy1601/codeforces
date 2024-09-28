//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,c=0,m=0;
    cin >> n;
    int a[n];
    vector<int> v;
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    v.push_back(a[0]);
    for(int i = 1;i < n;i++){
        if(a[i]!=a[i-1])
            v.push_back(a[i]);
    }
    
    for(int i = 0;i < n-2;i++){
        if(v[i]==v[i+1]-1 && v[i]==v[i+2]-2){
            c = 1;
            break;
        }
    }
    if(c==0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
