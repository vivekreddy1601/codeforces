//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> rat,woman,man;
    string c;
    while(n--){
        string a,b;
        cin >> a >> b;
        if(b=="rat")
            rat.push_back(a);
        else if(b == "woman" || b == "child")
            woman.push_back(a);
        else if(b == "man")
            man.push_back(a);
        else
            c = a;
    }
    for(auto i : rat){
        cout << i << '\n';
    }
    for(auto i : woman){
        cout << i << '\n';
    }
    for(auto i : man){
        cout << i << '\n';
    }
    cout << c << '\n';
    return 0;
}
