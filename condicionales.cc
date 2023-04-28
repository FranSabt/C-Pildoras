#include <iostream>
using namespace std;


void toLowerCase(string &cadena)
{
    for (int i = 0; i < cadena.length(); i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
}

int main()
{
    int edad;
    string ex_medico;
    bool aprovado;

    cout << "Por favor introduce tu edad" << endl;

    cin >> edad ;

    cout << "Paso el examen médico? (Si/No): ";
    cin >> ex_medico;

    toLowerCase(ex_medico);

    if(ex_medico == "si" || ex_medico == "s" )
    {
        aprovado = 1;
    }

    else
    {
        aprovado = 0;
    }

    if(edad >= 18 && aprovado)
    {
        cout << "Puedes conducir" << endl;
    }
    else
    {
        cout << "No puedes conducir" << endl;
    }

    return 0;
}