#include <iostream>
using namespace std;

int main () 
{
    int miArr[4][4] = {
        {45,69,32,45},
        {69,78,23,785},
        {94,75,3 ,23},
        {5 ,63,67,48}
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 ; j++)
        {
            cout << miArr[i][j] << " ";
        }
        cout << " " << endl;
        cout << "-------" << endl;
    }
}