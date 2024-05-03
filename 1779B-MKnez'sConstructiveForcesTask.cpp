//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        if(n==3){
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        if(n%2==0){
            for(int i = 0;i < n/2;i++){
                cout << 1 << ' ' << -1 << ' ';
            }
            cout << '\n';
        }else{
            for(int i = 0;i < n;i++){
                if(i%2==0)
                    cout << (n/2)-1 << ' ';
                else
                    cout << -(n/2)<< ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
