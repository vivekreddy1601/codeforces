//code by Vivek Reddy
#include <iostream>

using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i]; 
        int t = a[n-1];
        int b[n]={0};
        for(int i = n-1;i > -1;i--){
            if(t!=0||a[i]!=0){
                b[i]=1;
                t=max(t,a[i]);
                t--;
            }else
                t = a[i];
        }
        for(int i = 0; i < n;i++)
            cout << b[i] << ' ';
        cout << endl;
    }
    return 0;
}
