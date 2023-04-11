#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Por favor introduce tu edad" << endl;

    cin >> edad ;

    if(edad >= 18)
    {
        cout << "Puedes conducir" << endl;
    }
    else
    {
        cout << "No puedes conducir" << endl;
    }

    return 0;
}