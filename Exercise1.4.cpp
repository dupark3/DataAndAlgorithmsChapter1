#include <cstddef>
#include <iostream>

int sum_array(int* ptr, size_t sizeOfArray){
    int sum = 0;
    for (size_t i = 0; i != sizeOfArray; ++i)
        sum += *(ptr+i);

    return sum;
}

int main(){

    int intArray[] = {1, 2, 3, 5, 8, 10};
    size_t size = sizeof(intArray) / sizeof(int);

    int *ptr = intArray;
    std::cout << sum_array(ptr, size) << std::endl;

    return 0;
}