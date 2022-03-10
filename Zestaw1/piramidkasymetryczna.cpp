#include <iostream>
#include <string>

using namespace std;

int main(){
    string str(25, '*');
    int n=0;
    while(!str.empty()){
        str.insert(0, 1, ' ');
        n++;
        cout<<str<<endl;
        str.erase(str.end()-1);
        str.erase(str.begin()+n);
    }

}