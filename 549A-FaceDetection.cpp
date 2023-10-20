//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,f=0;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 0; i < n-1;i++){
        for(int j = 0;j < m-1;j++){
            string s = "";
            s += a[i][j];
            s += a[i][j + 1];
            s += a[i + 1][j];
            s += a[i + 1][j + 1];
            sort(s.begin(),s.end());
            if(s == "acef")
                f++;
        }
    }
    cout << f << endl;
    return 0;
}