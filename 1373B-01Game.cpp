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
        int o=0,e=0;
        for(int i = 0; i < s.size();i++){
            if(s[i]=='0')
                o++;
            else
                e++;
        }
        int c = min(e,o);
        if(c%2==0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
    return 0;
}