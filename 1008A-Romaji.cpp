//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool check = true;
    for(int i= 0; i < s.size()-1;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='n')
            continue;
        else{
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
                continue;
            else{
                check = false;
                break;
            }
        }
    }    
    if(s[s.size()-1]!='a'&&s[s.size()-1]!='e'&&s[s.size()-1]!='i'&&s[s.size()-1]!='o'&&s[s.size()-1]!='u'&&s[s.size()-1]!='n')
        check = false;
    if(check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
