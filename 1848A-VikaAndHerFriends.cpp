//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m,k,x,y,c=0;
        cin >> n >> m >> k>> x >> y;
        while(k--){
            int a,b;
            cin >> a >> b;
            int o = abs(x-a)+abs(y-b);
            if(o%2==0)  
                c = 1;
        }
        if(c)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
