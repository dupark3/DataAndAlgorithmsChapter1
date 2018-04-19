#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;

bool is_odd(int n){
    return n % 2 != 0;
}

template <size_t SIZE>
int count_evens(const std::array<int, SIZE>& intArray){
    int numOfEvens = 0;
    for (const auto& s : intArray)
        if (!is_odd(s)) ++numOfEvens;
           
    return numOfEvens;
}

int main(){
    array<int, 8> intArray = {1, 3, 5, 6, 7, 8, 10, 11};
    auto original_size = sizeof(intArray) / sizeof(int);
    auto even_size = count_evens(intArray);
    
    remove_if(intArray.begin(), intArray.end(), is_odd);
    
    for (int i = 0; i != even_size; ++i)
        cout << intArray[i] << ' ';
    cout << '\n';
    

    return 0;
}