//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n!=5)
            cout << "NO" << endl;
        else{
            sort(s.begin(),s.end());
            if(s=="Timru")  
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
