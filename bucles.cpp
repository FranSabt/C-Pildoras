#include <iostream>
using namespace std;

int main () 
{
    cout << "Hola Mundo!" << endl;

    int size;

    cout << "Tamaño de la piramide?: ";

    cin >> size;

    for (int i = 0; i < size; i ++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }


}