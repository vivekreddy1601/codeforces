//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
#define ln '\n'
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        string s;
        cin >> n >> s;
        if(n <= 3) cout << s << ln;
		else{
			set<char> V;
			V.insert('a'); V.insert('e');
			set<char> C;
			C.insert('b'); C.insert('c'); C.insert('d');
			int j = n;
			for(int i = 0; i < n - 3;){
				if(C.count(s[i]) && V.count(s[i + 1]) && C.count(s[i + 2]) && C.count(s[i + 3])){
					cout << s[i] << s[i + 1] << s[i + 2] << '.';
					i += 3;
				}else{
					cout << s[i] << s[i + 1] << '.';
					i += 2;
				}
				j = i;
			}
			for(int k = j; k < n; ++k) cout << s[k];
			cout << ln;
		}
    }
    return 0;
}
