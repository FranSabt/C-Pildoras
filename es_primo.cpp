#include <iostream>
using namespace std;

int main () 
{
    int my_n;
    bool is_prime = true;
    cout << "Introduce un numero" << endl;
    cin >> my_n;



    for (int i = 2; i < my_n; i++)
    {
        if (my_n % i == 0)
        {
            is_prime = false;
            break;
        }
    }


    if(is_prime)
    {
        cout << "El numero '" << my_n << "' es primo" << endl;
    }
    else
    {
        cout << "El numero '" << my_n << "' no es primo" << endl;
    }

}