//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,s=0;
        cin >> n>> k;
        int a[n],b[n];
        for(int i = 0; i< n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i =n-1,j=n-1,z=0;i>=0&&j>=0&&z<n;){
            int t = a[i];
            if(b[j]>a[i] && k > 0){
                t = b[j];
                j--;
                k--;
            }else
                i--;
            z++;
            s+=t;
        }
        cout << s << '\n';
    }
    return 0;
}
