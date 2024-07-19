/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    
    for(int i = 0; i <= 5; ++i){
        numbers.push_back(i);
    }
    
    for(int i = 0; i < numbers.size(); ++i){
        std::cout << numbers[i];
    }
    std::cout << std::endl;
    
    std::cout << "After erase element" << std::endl;
    
    numbers.erase(numbers.begin() + 2);
    
    for(int i = 0; i < numbers.size(); ++i){
        std::cout << numbers[i];
    }
    
    

    return 0;
}