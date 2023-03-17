#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n_vector;

    cout << "Tamaño del vector?" << endl;
    cin >> n_vector;

    vector <int> my_vector (n_vector);

    cout << "Ingrese elementos del vector" << endl;

    int i = 0;
    int n;
    while ( i  < n_vector)
    {
        cout << i + 1; 
        cout << ": ";
        cin >> n;
        my_vector.at(i) = n;
        i++;
    }

    cout << "Tu vector es asi:" << endl;
    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector.at(i) << "  ";
    }
    cout << endl;
    return 0;
}