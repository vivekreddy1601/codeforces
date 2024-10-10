//code by Vivek Reddy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k;
        cin >> n >> k;
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].first);}
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].second);}
        sort(v.begin(), v.end());
        long ram(k);
        for(long p = 0; p < n; p++){
            if(ram < v[p].first){break;}
            ram += v[p].second;
        }

        printf("%ld\n", ram);
    }
    return 0;
}
