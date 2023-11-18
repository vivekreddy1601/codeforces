//code by Vivek Reddy
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n-1;i++){
            if(s[i]==s[i+1])
                c++;
        }
        cout << ceil(c/2.0) << endl;
    }
    return 0;
}
