//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,maxi = 1,cnt = 0,flag = 0;
        string s;
        cin >> n>> s;
        if(s[0]=='<')
            flag = 0;
        else
            flag = 1;
        for(int i = 0;i < n;i++){
            if(s[i]=='<'){
                if(flag==0){
                    cnt = 0;
                    flag = 1;
                }
                cnt++;
            }else{
                if(flag==1){
                    cnt = 0;
                    flag = 0;
                }
                cnt++;
            }
            maxi = max(maxi,cnt);
        }
        cout << maxi+1 << '\n';
    }
    return 0;
}
