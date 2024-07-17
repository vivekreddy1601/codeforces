//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n, m;
		int tiles[100][2][2];
		bool ok = false;
		cin >> n >> m;
		for (int i = 0;i < n;i++)
		{
			cin >> tiles[i][0][0];
			cin >> tiles[i][0][1];
			cin >> tiles[i][1][0];
			cin >> tiles[i][1][1];
		}
		
		if (!(m&1))
		{
			for (int i = 0;i < n;i++)
			{
				if (tiles[i][0][1] == tiles[i][1][0])
				{
					ok = true;
					break;
				}
			}
		}
		
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
    return 0;
}
