#include <iostream>
#include <ctype.h>

using namespace std;

int string_length(char* s)
{
    int i = 0;
    while (*s != '\0')
    {
        s++;
        i++;
    }
    return i;
}

void arr_toupper(char *arr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        arr[i] = toupper(arr[i]);
        i++;
    }
}

int porownaj_stringi(char tablica1[1000], char tablica2[1000])
{
    if (string_length(tablica1) != string_length(tablica2))
    {
        return 0;
    }
    else
    {
        int dlugosc = string_length(tablica1);
        for (int i = 0; i < dlugosc; i++)
        {
            if (tablica1[i] != tablica2[i])
                return 0;
        }
    }
    return 1;
}

int main()
{
    char tablica1[1000];
    cin.getline(tablica1, 999);
    char tablica2[1000];
    cin.getline(tablica2, 999);

    arr_toupper(tablica1);
    arr_toupper(tablica2);

    if (porownaj_stringi(tablica1, tablica2) == 1)
        cout << "Identyczne";
    else
        cout << "Rozne";
}