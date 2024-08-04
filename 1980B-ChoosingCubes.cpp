//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,f,k,c=0;
        cin >> n >> f >> k;
        int a[n];
        for(int i = 0;i < n;i++)
            cin >> a[i];
        int fav=a[f-1];
        sort(a,a+n);
        reverse(a,a+n);
        for(int i = 0;i < k;i++){
            if(a[i]==fav){
                c++;
            }
        }
        for(int i = k;i < n;i++){
            if(a[i]==fav && c>0){
                c = -1;
                break;
            }else if(a[i]==fav)
                c = 0;
        }
        if(c==-1)
            cout << "MAYBE\n";
        else if(c>0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
