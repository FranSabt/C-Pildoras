#include <iostream>
using namespace std;

int main ()
{
    char lang;

    while (lang != 'e' && lang != 's')
    {
        cout << "elige tu lenguaje" << endl;
        cin >> lang; 
    }
    

    string output = lang == 'e' ? "Ypu chosse english" : "Elegiste español";

    cout << output << endl; 
}