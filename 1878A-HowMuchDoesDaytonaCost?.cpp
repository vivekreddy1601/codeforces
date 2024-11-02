//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,c=0;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i]==k)
                c = 1;
        }
        if(c==0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
