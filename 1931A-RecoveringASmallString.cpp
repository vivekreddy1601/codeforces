//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        string s = "";
        if(n>52){
            int t = n-53;
            char c = 'a'+t;
            s+=c;
            s+="zz";
        }else if(n > 27){
            int t = n-28;
            char c = 'a'+t;
            s+="a";
            s+=c;
            s+="z";
        }else{
            s+="aa";
            int t = n-3;
            char c = 'a'+t;
            s+=c;
        }
        cout << s << '\n';
    }
    return 0;
}
