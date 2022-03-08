#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int w;
    int z;

    // wczytanie i sprawdzenie poprawnosci elementow
    do
    {
        do
        {
            cout << "Podaj w:";
            cin >> w;
        } while (w < 1);
        do
        {
            cout << "Podaj z:";
            cin >> z;
        } while (z < 1);
    } while (w >= z || z-w==1);

    int w1 = floor((float(z) - float(w)) / 2);
    int w2 = z - ceil((float(z) - float(w)) / 2);

    for (int i = 0; i < z; i++)
    {

        for (int j = 0; j < z; j++)
        {
            if (j < w1 || j >= w2 || i < w1 || i >= w2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}