//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m,x;
    cin >> n >> m;
    int arr[n+1]={0};
    for(int i = 0;i <m;i++){
        cin >> x;
        for(int j = x;j <= n;j++){
            if(arr[j]==0)
                arr[j]=x;
        }
    }
    for(int i = 1;i <= n;i++)
        cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}
