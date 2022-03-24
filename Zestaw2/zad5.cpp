/*
Napisz program konwertujący zadaną liczbę arabską z przedziału 0 .. 3999, podaną jako parametr
wejściowy na liczbę w zapisie rzymskim
*/
#include <iostream>

using namespace std;

void konwersja(int *arabska, string *rzymska)
{
    if (*arabska == 0)
    {
        return;
    }
    if (*arabska >= 1000)
    {
        *rzymska += 'M';
        *arabska -= 1000;
        konwersja(arabska, rzymska);
    }

    if (*arabska < 1000 && *arabska >= 900)
    {
        *rzymska += "CM";
        *arabska -= 900;
    }

    if (*arabska >= 500)
    {
        *rzymska += 'D';
        *arabska -= 500;
        konwersja(arabska, rzymska);
    }
    if (*arabska < 500 && *arabska >= 400)
    {
        *rzymska += "CD";
        *arabska -= 400;
    }

    if (*arabska >= 100)
    {
        *rzymska += 'C';
        *arabska -= 100;
        konwersja(arabska, rzymska);
    }

    if (*arabska < 100 && *arabska >= 90)
    {
        *rzymska += "XC";
        *arabska -= 90;
    }

    if (*arabska >= 50)
    {
        *rzymska += 'L';
        *arabska -= 50;
        konwersja(arabska, rzymska);
    }

    if (*arabska < 50 && *arabska >= 40)
    {
        *rzymska += "XL";
        *arabska -= 40;
    }

    if (*arabska >= 10)
    {
        *rzymska += 'X';
        *arabska -= 10;
        konwersja(arabska, rzymska);
    }

    if (*arabska == 9)
    {
        *rzymska += "IX";
        *arabska -= 9;
    }

    if (*arabska >= 5)
    {
        *rzymska += 'V';
        *arabska -= 5;
        konwersja(arabska, rzymska);
    }
    if (*arabska == 4)
    {
        *rzymska += "IV";
        *arabska -= 4;
    }

    if (*arabska < 4 && *arabska > 0)
    {
        *rzymska += 'I';
        *arabska -= 1;
        konwersja(arabska, rzymska);
    }
}

int main()
{
    int arabska;
    string rzymska;
    do
    {
        cout << "Number to convert (from 0 to 3999): ";
        cin >> arabska;
    } while (arabska > 3999 || arabska < 0);

    konwersja(&arabska, &rzymska);
    cout << rzymska;
}
