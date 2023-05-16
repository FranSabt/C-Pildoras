#include <iostream>
using namespace std;

int main () {
    /* Se da beca  al alumnos si su calificación es superior a 8 o si la distancia de domicilio al centro es superior a 20km */

    string alumno;
    int calificaciones;
    double km;

    cout << "Por favor indique el nombre: ";
    cin >> alumno;

    cout << calificaciones << endl ;

    while (km <= 0 || !km)
    {
        cout << "Ha que distancia vive? ";
        cin >> km;
    }

    while (calificaciones <= 0 || calificaciones > 10 || !calificaciones)
    {
        cout << "Promedio de calificaciones: ";
        cin >> calificaciones;
    }

    if (calificaciones >= 8 || km >= 20)
    {
        cout << "Alumno becado" << endl;
        return 0;
    }

    else
    {
         cout << "Alumno no becado" << endl;;
        return 0;
    }

    return 0;
}