//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m,k,c=0;
        cin >> n >> m >> k;
        int a[n],b[m];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(a[i]+b[j]<= k){
                    c++;
                }
            }
        }
        cout << c << '\n';
    }
    return 0;
}
