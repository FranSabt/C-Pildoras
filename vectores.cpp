#include <iostream>
#include <vector>
using namespace std;

//* Es una clase de la libreria c++
//* Crecen y decrecen de manera dinamcia
//* Los elementos almacenados son del mismo tipo
int main () 
{
    vector <int> records;
    vector <int> edades (5); //* le pone limite
    vector <char> chars {'h', 'o' , 'l', 'a'};

    // for (int i = 20; i < 30; i++)
    // {
    //     chars[i - 20] = i; 
    // }

    for (int i = 0; i < 4; i++)
    {
        cout << chars[i] << endl;
    }

}