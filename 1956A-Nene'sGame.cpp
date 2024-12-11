//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int k,q;
        cin >> k >> q;
        int mini = 101;
        int a[q];
        for(int i = 0;i < k;i++){
            int x;
            cin >> x;
            if(x < mini)
                mini = x;
        }
        for(int i = 0;i < q;i++){
            cin >> a[i];
        }
        for(int i = 0;i < q;i++){
            cout << min(a[i],mini-1) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
