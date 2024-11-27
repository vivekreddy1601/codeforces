//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,c=0,tot=0;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i]==0){
                if(c > 0){
                    c--;
                    tot++;
                }
            }
            if(a[i]>=k)
                c+=a[i];
        }
        cout << tot << '\n';
    }
    return 0;
}
