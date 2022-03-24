/*
Wygeneruj na początek 10000 losowych liczb w zakresie od 1 do 10000 z rozkładem jednorodnym,
zapisując je w obiekcie typu std::vector<int>, praktycznie gotowy przykład:
https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
Następnie napisz algorytm sortowania Quicksort, z pivotem w środku przedziału. Opis algorytmu bez
problemu można znaleźć w Internecie. Oczywiście proszę wypisać liczby przed i po posortowaniu.
*/

#include <random>
#include <vector>
#include <iostream>

using namespace std;

void quickSort(vector<int> &a, int left, int right)
{
    if(left >= right) return;
    int pivot = a[left + (right - left)/2];
    int leftI = left-1;
    int rightI = right+1;
    while(1)
    {
        while(a[++leftI] < pivot);
        while(a[--rightI] > pivot);
        if(leftI >= rightI)break;
        swap(a[leftI], a[rightI]);
    }
    quickSort(a,left,rightI);
    quickSort(a,rightI+1,right);
}

int main()
{
    std::random_device rd;  
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 10000);
    std::vector<int> dane;

    for (size_t n = 0; n < 10000; ++n)
    {
        dane.push_back(distrib(gen));
        cout << dane.at(n) << endl;
    }

    quickSort(dane, 0, 9999);

    cout<<"Sorted vector: "<<endl;

    for (size_t n = 0; n < 10000; ++n)
    {
        cout << dane.at(n) << endl;
    }

}
