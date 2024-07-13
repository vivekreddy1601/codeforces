//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        int n = 5,a=0;
        for(int i = 0; i < n;i++){
            if(s[i]=='A')
                a++;
        }
        if(a > n-a)
            cout << "A\n";
        else
            cout << "B\n";
    }
    return 0;
}
