//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string a,b;
        cin >> a >> b;
        int n=a.size(),m=b.size();
        int nm = n+m;
        for(int i = 0;i < m;i++){
            int k = i;
            for(int j = 0;j < n;j++){
                if(k < m && a[j]==b[k])
                    k++;
            }
            nm = min(nm,n+m-k+i);
        }
        cout << nm << '\n';
    }
    return 0;
}
