#include <iostream>
using namespace std;

int main()
{
    const double calidad_media = 35.5;
    const double calidad_alta  = 55.3;
    const double iva           = 0.21;

    double metros_media = 0;
    double metros_alta  = 0;

    cout << "¿Cuántos metros quieres instalar con caldiad media" << endl;
    cin >> metros_media;

    cout << "¿Cuántos metros quieres instalar con caldiad alta" << endl;
    cin >> metros_alta;

    double presupuesto = (metros_alta * calidad_alta) + (metros_media * calidad_media);
    double presupuesto_iva = ((metros_alta * calidad_alta) + (metros_media * calidad_media)) * iva;

    cout << "Con " << metros_alta << " metros de calidad alta, mas " << metros_media << " metros de calidad media, da " << presupuesto << " ,con un iva de: " << iva << " ,para un total: " << presupuesto + iva << endl;
}