#include <iostream>
#include <vector>
#include <string>

namespace Game{
    enum Types{
         healthPotions,
         torches,
         arrows,
         max_types,
    };

}

int calculatePlayer(const std::vector<int>& arr){
    int sum{0};
    for(auto e : arr){
        sum += e;
    }

    return sum;
}

int main()
{
    std::vector<int> player {1, 5, 10};

    std::cout << "You have " << player[0] << " health potion" << '\n';
    std::cout << "You have " << player[1] << " torches" << '\n';
    std::cout << "You have " << player[2] << " arrows" << '\n';

    std::cout << "You have " <<calculatePlayer(player) << " total items";
    std::cout << '\n';



    return 0;
}
