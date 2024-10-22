//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long t; 
    cin >> t;
    while(t--){
        long n, k; 
        cin >> n >> k;
        string s; 
        cin >> s;
        vector<long> f(26, 0);
        for(long p = 0; p < s.size(); p++){++f[s[p] - 'a'];}

        long idx(k);
        string res(k, 'a');
        for(long p = 0; idx >= 0 && p < (n / k) && p < 26; p++){
            char x = (p + 'a');
            idx = (idx < f[p] ? idx : f[p]);
            char y = x + 1;
            for(long u = 0; u < idx; u++){res[u] = y;}
        }

        cout << res << endl;
    }
    return 0;
}
