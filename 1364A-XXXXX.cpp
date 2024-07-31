//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,x,td=0,ts=0;
        cin >> n >> x;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i]%x==0)
                td++;
            ts+=a[i];
        }
        if(td==n)
            cout << "-1\n";
        else{
            if(ts%x!=0)
                cout << n << '\n';
            else{
                int maxi = 0,t = ts;
                for(int i = 0;i < n;i++){
                    t-=a[i];
                    if(t%x!=0)
                        maxi = max(maxi,n-i-1);
                }
                t = ts;
                for(int i = n-1;i>=0;i--){
                    t-=a[i];
                    if(t%x!=0)
                        maxi = max(maxi,i);
                }
                cout << maxi << '\n';
            }
        }
    }
    return 0;
}
