#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::vector<std::string>  names{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::cout << "Enter a name: ";
    std::string n{};
    std::cin >> n;
    std::cout << '\n';

    for(const auto& name : names){
    if(n == name){
        std::cout << n << " was found.";
        break;
    }
    else{
        std::cout << n << " was not found";
        break;
    }
    }
    return 0;
}
