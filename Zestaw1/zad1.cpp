#include <iostream>
#include <math.h>

using namespace std;

// dla wartosci dla których kwdarat wewnetrzny nie może byc idealnie na środku np. (6,11)
// zakładamy, że zawsze jeden wiersz gwiazdek więcej będzie na dole, a jedna kolumna więcej po prawej stronie

int main()
{
    int w;
    int z;

    // wczytanie i sprawdzenie poprawnosci elementow
    do
    {
        do
        {
            cout << "Podaj wymiar boku wewnetrznego kwadratu :";
            cin >> w;
        } while (w < 1);
        do
        {
            cout << "Podaj wymiar boku zewnetrznego kwadratu:";
            cin >> z;
        } while (z < 1);
    } while (w >= z || z-w==1);

    int w1 = floor((float(z) - float(w)) / 2);      //wiersz/kolumna do którego/której wstawiamy gwiazdki
    int w2 = z - ceil((float(z) - float(w)) / 2);   //wiersz/kolumna od której znowu zaczynamy wstawiac gwiazdki

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