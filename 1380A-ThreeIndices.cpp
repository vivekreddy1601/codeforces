//code by Vivek reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,f=-1,s=-1,t=-1;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        for(int i = 1;i < n-1;i++){
            for(int j = 0;j < i;j++){
                if(a[j]<a[i]){
                    f = j;
                    break;
                }
            }
            for(int j = i+1;j < n;j++){
                if(a[i]>a[j]){
                    t = j;
                    break;
                }
            }
            if(f == -1 || t == -1){
                f = -1;
                t = -1;
            }else{
                s = i;
                break;
            }
        }
        if(f == -1 || t == -1 || s == -1)
            cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << f+1 << ' ' << s+1 << ' ' << t+1 << endl;
        }
    }
    return 0;
}
