//code by Vivek Reddy
#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n;i++){
        int x,y;
        cin >> x >> y;
        a[i]=(x*60)+y;
    }
    long long mn = a[n-1]+s+1;
    for(int i = 0; i <n-1;i++){
        if(a[i+1]-a[i]>=(2*s)+2){
            mn = a[i]+s+1;
            break;
        }
    }
    if(a[0]>=s+1)
        mn=0;
    cout << mn/60 << " " << mn%60 << endl;
    return 0;
}