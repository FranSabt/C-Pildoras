#include <iostream>
using namespace std;

int main()
{
    int matrix[] {1,2,3,4,5,6};

    cout << "matrix: " << sizeof(matrix) << endl;
    
    for (int i = 0; i < sizeof(matrix) / sizeof(int); i++)
    {
        cout << matrix[i] << endl;
    }
    return 0;
}