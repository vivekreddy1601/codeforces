//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int d,s,mini=0,maxi=0;
    cin >> d >> s;
    int a[d][2]={0};
    for(int i = 0; i < d;i++){
        cin >> a[i][0] >> a[i][1];
        mini+=a[i][0];
        maxi+=a[i][1];
    }
    if(s > maxi || s < mini)
        cout << "NO" << endl;
    else{
        int ans[d]={0};
        for(int i= 0; i < d;i++){
            ans[i]=a[i][0];
            s-=a[i][0];
        }
        if(s > 0){
            for(int i = 0; i < d;i++){
                if(s > 0){
                    if(a[i][1]-ans[i]<s){
                        s-=a[i][1]-ans[i];
                        ans[i]=a[i][1];
                    }else{
                        ans[i]+=s;
                        s=0;
                        break;
                    }
                }else
                    break;
            }
        }
        cout << "YES" << endl;
        for(int i = 0; i < d;i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}
