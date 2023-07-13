#include <iostream>

using namespace std;

int main()
{
    //Vamos a trabajar con while
    int n = 0;

    while (n < 2)
    {
        cout << "Ingrese un número" << endl;
        cin >> n;
    }

    cout << "----------" << endl;
    int i = 0;
    int j = 1;
    while (i <= n)
    {
        cout << i << endl;
        int temp = i;
        i += j;
        j = temp;
    }

    cout << "Fin" << endl; 


}
