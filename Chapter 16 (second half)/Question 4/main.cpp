#include <iostream>
#include <vector>
#include <limits>

template<typename T>
std::pair<std::size_t, std::size_t> minMaxNumbers(const std::vector<T>& arr){

    double min1{0};
    double max1{0};
    for(int i{0} ; i < arr.size() ; ++i){

        if(arr[min1] > arr[i]){
            min1 = i;
        }
        else if(arr[max1] < arr[i]){
            max1 = i;
        }
    }
    return { min1, max1 };
}

template<typename T>
void printArray(const std::vector<T>& arr1){

    std::cout << "With array ( " ;
    for(auto e : arr1){
        std::cout << e << ", " ;
    }
    std::cout << ")" << '\n';

}

int main()
{
    std::vector<double> arr{};

    while(true){
        std::cout << "Enter numbers to add (use -1 to stop) ";
        double num{};
        std::cin >> num;


    if(num == -1){
        break;
    }
    if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        arr.push_back(num);
    }

    if (arr.size() == 0)
    {
        std::cout << "The array has no elements\n";
    }
    else
    {
    printArray(arr);
    auto m1 { minMaxNumbers(arr) };
    std::cout << "The min element has index " << m1.first << " and value " << arr[m1.first] << '\n';
    std::cout << "The max element has index " << m1.second << " and value " << arr[m1.second] << '\n';
    }

    return 0;
}
