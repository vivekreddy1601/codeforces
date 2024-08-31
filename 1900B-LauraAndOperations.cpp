//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int o = 0, e = 0;
        for(int i = 0;i < 3;i++){
            if(a[i]&1)
                o++;
            else
                e++;
        }
        if(o==3 || e==3)
            cout << "1 1 1\n";
        else if(o==1){
            cout << (a[0]%2==0?0:1) << ' ' << (a[1]%2==0?0:1) << ' ' << (a[2]%2==0?0:1)<< '\n';
        }else
            cout << (a[0]%2==1?0:1) << ' ' << (a[1]%2==1?0:1) << ' ' << (a[2]%2==1?0:1)<< '\n';
    }
    return 0;
}
