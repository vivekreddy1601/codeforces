//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main(){
    int vt;
    cin >> vt;
    while (vt--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        map<int,int> vp;
        vector<int> ones,zeroes;
        for(int i = 0; i < n;i++){
            cin >> a[i];
            b[i]=a[i];
            vp[a[i]]=i;
        }
        string s;
        cin >> s;
        for(int i = 0; i < n;i++){
            if(s[i]=='0')
                zeroes.push_back(a[i]);
            else    
                ones.push_back(a[i]);
        }
        sort(zeroes.begin(),zeroes.end());
        sort(ones.begin(),ones.end());
        sort(a,a+n);
        reverse(zeroes.begin(),zeroes.end());
        reverse(ones.begin(),ones.end());
        reverse(a,a+n);
        int i = 0; 
        for(;i<ones.size();i++){
            b[vp[ones[i]]]=a[i];
        }
        for(int j = 0; j < zeroes.size();j++,i++){
            b[vp[zeroes[j]]]=a[i];
        }
        for(int i = 0; i < n;i++)
            cout << b[i] << " ";
        cout << endl;
    }
    
}