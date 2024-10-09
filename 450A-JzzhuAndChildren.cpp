//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m,c=1,l;
    cin >> n>> m;
    int a[n];
    l=n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        a[i]=max(a[i]-m,0);
    }
    while(c==1){
        for(int i = 0;i < n;i++){
            if(a[i]>0)
                l=i+1;
            a[i]-=m;
            //cout << l << '\n';
        }
        c=0;
        for(int i = 0;i< n;i++){
            if(a[i]>0){
                c =1;
                break;
            }
        }
    }
    cout << l << '\n';
    return 0;
}
