#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define WIDTH 30

using namespace std;
int main()
{
    ifstream f("a.ascii"); // taking file as inputstream
    string str;
    if (f)
    {
        ostringstream ss;
        ss << f.rdbuf(); // reading data
        str = ss.str();
    }

    for (int i = 10; i < str.size(); i = i + WIDTH + 1)
    {
        str.insert(i, 1, '\n');
    }

    cout << str;
}