//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int tool[3] = {0};

    for(int k = 0; k < 3; k++){ 
        string temp; 
        cin >> temp;

        if(temp[0] == 'r'){tool[k] = 0;}
        else if(temp[0] == 'p'){tool[k] = 1;}
        else if(temp[0] == 's'){tool[k] = 2;}

    }

    if(tool[0] != tool[1] && tool[1] == tool[2] && (3 + tool[0] - tool[1]) % 3 == 1){ cout << "F\n";}
    else if(tool[1] != tool[0] && tool[0] == tool[2] && (3 + tool[1] - tool[2]) % 3 == 1){cout << "M\n";}
    else if(tool[2] != tool[0] && tool[0] == tool[1] && (3 + tool[2] - tool[0]) % 3 == 1){cout << "S\n";}
    else{cout << "?\n";}
    return 0;
}
