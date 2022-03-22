#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    std::string path;
    std::cout << "Podaj sciezke: ";
    getline(std::cin, path);

    for (const auto &entry : fs::directory_iterator(path)){
        if (!(entry.is_directory()))
        {
        std::cout << entry.path() << "   Size: " << entry.file_size() << " bytes" << std::endl;
        }
    }
}
