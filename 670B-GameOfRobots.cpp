//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;
    long long a[n+1];
    for(int i = 1; i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n;i++){
        if(i >= k)
            break;
        k-=i;
    }
    cout << a[k] << endl;
    return 0;
}