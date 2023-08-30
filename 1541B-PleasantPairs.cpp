//code by Vivek Reddy
#include <iostream>
#define int long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n;i++)
            cin >> a[i];
        int an = 0;
        for(int i = 1; i <= n;i++){
            for(int j = a[i]-i;j <=n;j+=a[i]){
                if(j >= 0)
                    if(a[i]*a[j]==i+j && i < j)
                        an++;
            }
        }
        cout << an << endl;
    }
    return 0;
}