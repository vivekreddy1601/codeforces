//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    char a,b;
    int n,ab=0,bf=-1,c=0;
    cin >> a >> b >> n;
    for(int i = 0;i < n;i++){
        char x,y;
        cin >> x >> y;
        if(x == a && b == y)
            c =1;
        else{
        if(y==a)
            ab=1;
        if(x==b)
            bf=1;
        }
    }
    if(ab==bf || c==1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
