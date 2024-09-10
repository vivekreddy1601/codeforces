//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n-2;i++){
        if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2] && s[i]!='.' && s[i+1]!='.' && s[i+2]!='.'){
			 cout << "Yes\n";
			 return 0;
		}
    }
    cout << "No\n";
    return 0;
}
