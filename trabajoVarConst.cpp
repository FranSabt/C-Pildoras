#include <iostream>
using namespace std;

int main()
{
    // variables
    string nombretemp = "Juan";
    int    edad   {21};
    double salario;

    cout << "Introduce el nombre: ";
    cin >> nombretemp;
    
    const string nombre = nombretemp;

    cout << "Introduce el edad: ";
    cin >> edad;

    cout << "Introduce el salario del empleado: ";
    
    cin >> salario;

    cout << "Datos de empleado: "<< endl;
    cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario << ". " << endl;

    return 0;
}