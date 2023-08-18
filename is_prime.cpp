#include<iostream>
#include<vector>

using namespace std;

int main() 
{
    vector <int> primes = {1,2};
    int n = 3;
    int limit;
    
    cout << "Insert limit: "<< endl;
    cin >> limit;
    cout << endl;

    for (int i = 0; i < limit; i += 2) 
    {
        for (int j = 1; j < primes.size(); j++){
            cout << n << " / " << primes[j] << endl;
            if(n % primes[j] ==0) {
                break;
            } else {
                cout << n << endl;
                primes.push_back(n);
            }
        }
        n += 2;
    }
}