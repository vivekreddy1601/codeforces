//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,t=0;
        string a;
        cin >> n >> a;
        for(int i = 0; i < n-2;i++){
            string s = a.substr(i,3);
            if(s=="pie"||s=="map"){
                i+=2;
                t++;
            }
        }
        cout << t << '\n';
    }
    return 0;
}
