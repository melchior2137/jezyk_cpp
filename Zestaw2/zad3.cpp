/*
Napisz funkcję: auto fun(const auto& arg); którą wywołasz z argumentem typu initializer_list<T>
(proszę sprawdzić, że nie da się wstawić np. {1,2,3} bo to samo w sobie nie jest typem, ale można
zrobić linijkę wcześniej auto arg = {1,2,3}; i podstawić arg). W funkcji, za pomocą wskaźnika (a la
iterator), pozyskanego metodą begin(), przejechać po całym kontenerze arg i policzyć sumę
z argumentów. Funkcja fun niech zwróci właśnie wartość sumy. Spróbować z typami całkowitymi
i zmiennoprzecinkowymi. Informacje: https://en.cppreference.com/w/cpp/utility/initializer_list 
*/

#include <iostream>
#include <initializer_list>

using namespace std;

//template <class T>
auto fun(const auto& arg){
    double suma;

    for(auto it = begin(arg); it != end(arg); ++it) {
        
        suma += *it;
    }


    return suma;
}

int main()
{
    //initializer_list<int> lista = {1,2,3,4,5};
    auto lista = {1.25,5.423,2.3};
    //cout<<fun({1,2,3});
    cout<<fun(lista);
}
