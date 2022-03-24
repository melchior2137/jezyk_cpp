/*
Napisz program, który wczyta z pliku ASCII tekst, a następnie go wyrówna do zadanej (np. jako stały
parametr) szerokości kolumny i wyświetli na ekranie. Przykładowy tekst można wygenerować
w serwisie https://pl.lipsum.com/ albo użyć dowolny inny.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define WIDTH 30

using namespace std;
int main()
{
    ifstream f("a.ascii");
    string str;
    if (f)
    {
        ostringstream ss;
        ss << f.rdbuf(); 
        str = ss.str();
    }

    for (int i = WIDTH; i < str.size(); i = i + WIDTH + 1)
    {
        str.insert(i, 1, '\n');
    }

    cout << str;
}