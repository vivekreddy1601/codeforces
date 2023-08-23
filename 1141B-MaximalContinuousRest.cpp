//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    long long n,ans=0,m=0;
    cin >> n;
    long long a[2*n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = n,j=0;i<2*n && j <n;i++,j++){
        a[i]=a[j];
    }
    for(int i = 0; i < (2*n)-1;i++){
        if(a[i]==1){
            m++;
            if(m > ans)
                ans = m;
        }else
            m = 0;
    }
    cout << ans << endl;
    return 0;
}