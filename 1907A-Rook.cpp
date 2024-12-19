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
        for(char i = 'a';i <= 'h';i++){
            if(i!=s[0]){
                cout << i << s[1] << '\n';
            }
        }
        for(char i = '1';i <= '8';i++){
            if(i!=s[1]){
                cout << s[0] << i << '\n'; 
            }
        }
    }
    return 0;
}
