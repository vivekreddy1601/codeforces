//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    string s,t;
    cin >> s;
    vector<int> v;
    for(int i = 1;i <=n;i++)
        if(n%i==0)
            v.push_back(i);
    n = v.size();
    for(int i = 0; i < n;i++){
        m = v[i];
        t="";
        for(int j = 0; j < m;j++)
            t.push_back(s[j]);
        int k = m-1;
        for(int j = 0; j < m;j++){
            s[j]=t[k];
            k--;
        }
    }
    cout << s << endl;
    return 0;
}