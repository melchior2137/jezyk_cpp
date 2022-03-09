#include <iostream>
#include <ctype.h>

using namespace std;

int string_length(char *s)
{
    int i = 0;
    while (*s != '\0')
    {
        s++;
        i++;
    }
    return i;
}

int porownaj_stringi(char tablica1[1000], char tablica2[1000])
{
    if (string_length(tablica1) != string_length(tablica2))
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < string_length(tablica1); i++)
        {
            tablica1[i] = toupper(tablica1[i]);
        }

        for (int i = 0; i < string_length(tablica2); i++)
        {
            tablica2[i] = toupper(tablica2[i]);
        }
        for (int i = 0; i < string_length(tablica1); i++)
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

    if (porownaj_stringi(tablica1, tablica2) == 1)
        cout << "indentyczne";
    else
        cout << "ruzne";
}