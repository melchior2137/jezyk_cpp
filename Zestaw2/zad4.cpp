/*
Napisz program, który wykorzystując <filesystem>, poprosi o podanie ścieżki do danego katalogu,
a następnie wypisze nazwy wszystkich zwykłych plików oraz ich rozmiar.
*/


#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    std::string path;
    std::cout << "Path: ";
    getline(std::cin, path);

    for (const auto &entry : fs::directory_iterator(path)){
        if (!(entry.is_directory()))
        {
        std::cout << entry.path() << "   Size: " << entry.file_size() << " bytes" << std::endl;
        }
    }
}
