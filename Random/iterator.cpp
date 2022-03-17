#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "aa bb cccc dd eeee f";

    // size_t p;
    // while((p = s.find(' ')) != string::npos){
    //     s.erase(p,1);
    // }
    // cout<<s;

    string::iterator j;
    while((j = find(s.begin(), s.end(), ' ')) != s.end()){
        s.erase(j);
    }
    cout<<s;


}