//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,c=0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n-1;i++){
        if(a[i+1]<=a[i]){
            c+= a[i]-a[i+1]+1;
            a[i+1]=a[i]+1;
        }
    }
    cout << c << '\n';
    return 0;
}
