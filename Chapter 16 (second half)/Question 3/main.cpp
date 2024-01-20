#include <iostream>
#include <vector>

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

    std::vector<int> num{ 3, 8, 2, 5, 7, 8, 3 };
    std::vector<double> num1{ 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };

    printArray(num);
    auto m1 { minMaxNumbers(num) };
    std::cout << "The min element has index " << m1.first << " and value " << num[m1.first] << '\n';
    std::cout << "The max element has index " << m1.second << " and value " << num[m1.second] << '\n';

    printArray(num1);
    minMaxNumbers(num1);
    auto m2 { minMaxNumbers(num1) };
    std::cout << "The min element has index " << m2.first << " and value " << num1[m2.first] << '\n';
    std::cout << "The max element has index " << m2.second << " and value " << num1[m2.second] << '\n';

    return 0;
}
