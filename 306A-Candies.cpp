//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int t = n/m;
    int a[m];
    for(int i = 0;i < m;i++)
        a[i] = t;
    int x = n%m;
    for(int i = 0;i < m;i++){
        if(x>0){
            a[i]++;
            x--;
        }else
            break;
    }
    for(int i = 0;i < m;i++){
        cout << a[i] <<' ';
    }
    cout << '\n';
    return 0;
}
