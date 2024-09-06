//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        long long n,e=0,s=0,mx=0;
        cin >> n;
        long long x;
        for(int i = 0;i < n;i++){
            cin >> x;
            while(x%2==0){
                e++;
                x/=2;
            }
            if(x > mx){
                s+=mx;
                mx = x;
            }else
                s+=x;
        }   
        for(int i = 0;i < e;i++){
            mx*=2;
        }
        s+=mx;
        cout << s << '\n';
    }
    return 0;
}
