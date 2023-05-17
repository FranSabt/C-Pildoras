#include <iostream>
using namespace std;

int main ()
{
    int option;
    cout << "Elige tu arma: " << "\n1 - Espada " << "\n2 - Arco" << "\n3 - Magia" << endl;
    
    while (option < 1 || option > 3) 
    {
        cin >> option;

        if(option < 1 || option > 3)
        {
            cout << "Por favor elige una opción valida" << endl;
        }
    }

    switch (option)
    {
    case 1 :
        cout << "Has elegido espada, tienes alma de guerrero" << endl;
        break;
    
    case 2 :
        cout << "Has elegido arco, digno de un ser atuto y con buena mirada" << endl;
        break;

    case 3 :
        cout << "Has elegido magia, solo para entendidos y sabios" << endl;
        break;
    
    default:
        break;
    }


    return 0;
}