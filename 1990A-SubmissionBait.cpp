//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++)    
            cin >> a[i];
        if(n%2){
            cout << "YES\n";
            continue;
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(int i = 1;i < n && !c;i+=2){
            if(a[i-1]!=a[i])
                c++;
        }
        cout << (c==1?"YES\n":"NO\n");
        
    }
    return 0;
}
