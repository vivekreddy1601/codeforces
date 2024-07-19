//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s = "";
        int i = 8,j=8;
        while(i--){
            while(j--){
                char c;
                cin >> c;
                if(c!='.')
                    s+=c;
            }
            j = 8;
        }
        cout << s << '\n';
    }
    
    return 0;
}
