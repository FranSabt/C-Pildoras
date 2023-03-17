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

/*VIDEO DOS*/
/*
    //*Metodo at() --> Accede a un elemento conreto en una posicion concreta del vector
    //*Metodo push_bach() --> Agrega elementos a un vector
    //*Metodo size() --> retornar ell tamaño actual del vector
*/

    cout << "------" << endl;

    //cout << chars[5] << endl;
    chars[4]='x'; //* este no funciona con chars.at(4)
                                    //!Creo que push_back actualiza el estado del vector
    chars.push_back('x'); //*este si

    cout << chars.at(4) << endl; //* Lanza una excepción;

    cout << "------" << endl;

    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i];
    }
    
    cout << endl;
}