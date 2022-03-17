#include <iostream>
#include <math.h>
#include <chrono>
#include <vector>

#define SIZE 1000


using namespace std;
using namespace std::chrono;

double fib_iteracyjnie(unsigned long long n,double tab[SIZE], unsigned long long &i)
{
    if (n<3) return 1;
    if (tab[n]==0)
    {
        for (i; i < n; i++)
        {
            tab[i]=tab[i-1]+tab[i-2];
            //cout<<tab[i]<<endl;
        }
    }
    return tab[n-1];
}

int main()
{
    unsigned long long i = 2;
    unsigned long long k;

    //inicjalizuje tablice z 0
    double tab[SIZE] = {0};
    tab[0]=1;
    tab[1]=1;

    while (1)
    {
        cout << "Podaj element, który chcesz wyliczyc (wpisz -1 zeby wyjść): ";
        cin >> k;

        if(k==-1) exit(0);

        auto start_iteracyjnie = high_resolution_clock::now();

        cout << fib_iteracyjnie(k, tab, i) << endl;

        auto stop_iteracyjnie = high_resolution_clock::now();
        auto duration_iteracyjnie = duration_cast<microseconds>(stop_iteracyjnie - start_iteracyjnie);

        cout << "Czas wykonania i wypisania iteracyjnie: "
             << duration_iteracyjnie.count() << "ms" << endl;
    }
}