#include <iostream>
#include <math.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

double fib_iteracyjnie(unsigned long long n){
    if(n<3) return 1;
    double ostatni = 0;
    double aktualny = 1;
    double temp;
    for(unsigned long long i = 1; i<n; i++){
        temp = aktualny;
        aktualny = ostatni + aktualny;
        ostatni = temp;
    }
    return aktualny;
}

double fib_rek(unsigned long long n){
    if(n < 3) return 1;
    return fib_rek(n-1)+fib_rek(n-2);
}

int main()
{
    unsigned long long k;
    cout << "Podaj element, który chcesz wyliczyc: ";
    cin >> k;

    auto start_rek = high_resolution_clock::now();

    for (unsigned long long i = 1; i <= k; ++i)
    {
        cout << fib_rek(i) << endl;
    }

    auto stop_rek = high_resolution_clock::now();
    auto duration_rek = duration_cast<microseconds>(stop_rek - start_rek);


    auto start_iteracyjnie = high_resolution_clock::now();

    for (unsigned long long i = 1; i <= k; ++i)
    {
        cout << fib_iteracyjnie(i) << endl;
    }

    auto stop_iteracyjnie = high_resolution_clock::now();
    auto duration_iteracyjnie = duration_cast<microseconds>(stop_iteracyjnie - start_iteracyjnie);

    cout << "Czas wykonania i wypisania rekurencyjnie: "
         << duration_rek.count() << " microseconds" << endl;
    cout << "Czas wykonania i wypisania iteracyjnie: "
         << duration_iteracyjnie.count() << " microseconds" << endl;
}