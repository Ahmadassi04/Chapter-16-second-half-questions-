#include <iostream>
#include <vector>

void printStack(const std::vector<int>& arr){
    if(arr.empty()){
        std::cout << "\t (stack: Empty)" << '\n';
    }
    else{
    std::cout << "\t (stack: ";
    for(auto a : arr){
        std::cout << a << " ";
    }
    std::cout << ")";
    std::cout << '\n';
    }
}

int main()
{
    std::vector<int> stack{};

    printStack(stack);

    stack.push_back(1);
    std::cout << "push 1";
    printStack(stack);

    stack.push_back(2);
    std::cout << "push 2";
    printStack(stack);

    stack.push_back(3);
    std::cout << "push 3";
    printStack(stack);

    stack.pop_back();
    std::cout << "pop ";
    printStack(stack);

    stack.push_back(4);
    std::cout << "push 4";
    printStack(stack);

    stack.pop_back();
    std::cout << "pop ";
    printStack(stack);

    stack.pop_back();
    std::cout << "pop ";
    printStack(stack);

    stack.pop_back();
    std::cout << "pop ";
    printStack(stack);

    return 0;
}
