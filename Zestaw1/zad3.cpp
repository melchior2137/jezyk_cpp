#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>

using namespace std;

void rm_space(char *tab)
{
    char output[1000];
    char *poczatek = tab;
    int i = 0;
    while (*tab != '\0')
    {
        if (*tab != ' ')
        {
            output[i] = *tab;
            i++;
        }
        tab++;
    }
    output[i] = '\0';
    tab = poczatek;
    strcpy(tab, output);
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

int is_palindrome(char *tab)
{
    int length = strlen(tab);
    for (int i = 0; i < floor(length / 2); i++)
    {
        if (tab[i] != tab[length - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char tablica1[1000];
    cin.getline(tablica1, 1000);
    rm_space(tablica1);
    arr_toupper(tablica1);

    if (is_palindrome(tablica1) == 1)
    {
        cout << "palindrom";
    }
    else
    {
        cout << "nie palindrom";
    }
}