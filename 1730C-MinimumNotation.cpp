//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        char mini = '9';
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]<=mini) mini=s[i];
            else s[i]= min((char)(s[i]+1),(char)'9');
        }
        sort(s.begin(),s.end());
        cout << s << endl;
    }
    return 0;
}
