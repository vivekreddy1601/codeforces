//code by Vivek Reddy
#include <iostream>

using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,z=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0;i < n;i++){
            if(s[i]=='0')
                z++;
        }
        if(z == 1 || z%2==0)
            cout << "BOB" << endl;
        else    
            cout << "ALICE" << endl;
    }
    return 0;
}
