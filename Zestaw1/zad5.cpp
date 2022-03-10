#include <iostream>
#include <math.h>
#include <chrono>
#include <vector>

#define SIZE 1000


using namespace std;
using namespace std::chrono;

void fill_arr(double tab[SIZE]){
    for(int i=2; i <SIZE; i++){
        tab[i]=-1;
    }
}

double fib_iteracyjnie(unsigned long long n,double tab[SIZE], double &ostatni, double &aktualny, double &temp,unsigned long long &i)
{
    if (tab[n]==-1)
    {
        for (i; i <= n; i++)
        {
            temp = aktualny;
            aktualny = ostatni + aktualny;
            ostatni = temp;
            tab[i] = aktualny;
            cout<<tab[i-1]<<endl;
        }
    }
    return tab[n];
}

int main()
{
    double ostatni = 0;
    double aktualny = 1;
    double temp;
    unsigned long long i = 2;

    double tab[SIZE];
    tab[1]=1;

    //wypełniam cała tablie -1 zeby bylo wiadomo gdzie nie wpisałem elementu ciągu
    fill_arr(tab);

    while (1)
    {
        unsigned long long k;
        cout << "Podaj element, który chcesz wyliczyc: ";
        cin >> k;

        auto start_iteracyjnie = high_resolution_clock::now();

        cout << fib_iteracyjnie(k, tab, ostatni, aktualny, temp,i) << endl;

        auto stop_iteracyjnie = high_resolution_clock::now();
        auto duration_iteracyjnie = duration_cast<microseconds>(stop_iteracyjnie - start_iteracyjnie);

        cout << "Czas wykonania i wypisania iteracyjnie: "
             << duration_iteracyjnie.count() << "ms" << endl;
    }
}