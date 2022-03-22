#include <random>
#include <vector>
#include <iostream>

using namespace std;


void quickSort(vector<int> arr, int left, int right)
{

    int i = left, j = right;
    int tmp;
    int pivot = arr.at((left + right) / 2);

    /* partition */

    while (i <= j)
    {

        while (arr.at(i) < pivot)
            i++;

        while (arr.at(j) > pivot)
            j--;

        if (i <= j)
        {
            tmp = arr.at(i);
            arr.at(i) = arr.at(j);
            arr.at(j) = tmp;
            i++;
            j--;
        }
    };

    /* recursion */

    if (left < j)
        quickSort(arr, left, j);

    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(1, 10000);
    std::vector<int> dane;

    for (size_t n = 0; n < 15; ++n)
    {
        dane.push_back(distrib(gen));
        cout << dane.at(n) << endl;
    }

    quickSort(dane, dane.at(0), dane.at(14));

    cout<<"Posortowane: "<<endl;
    for (size_t n = 0; n < 15; ++n)
    {
        cout << dane.at(n) << endl;
    }

}
