#include <iostream>
#include <cstring>

void cutString(std::string string)
{
    int lastIndex = string.length();
    if(lastIndex <= 10) std::cout << string << std::endl;
    else std::cout << string[0] << lastIndex - 2 << string[lastIndex - 1] << std::endl; 
}


int main(int argc, char const *argv[])
{
    int n = 0;
    std::cin >> n;
    while(n--) {
        std::string string;
        
        std::cin >> string;

        cutString(string);
    }

    return 0;
}
