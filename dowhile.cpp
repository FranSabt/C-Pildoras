#include <iostream>

using namespace std;

int main()
{
    bool alive = false;
    char r = 0;

    cout << "Are you alive? (y/n): ";
    cin >> r;

    if(r == 'y')
    {
        alive = true;
    }

    do
    {
        cout << "Are you sure? (y/n): ";
        cin >> r;

        if(r == 'y')
        {
            alive = true;
        }
        else
        {
            alive = 0;
        }
    } while(alive);

    cout << "You are DEAD" << endl;
    return 0;
}