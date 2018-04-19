#include <cstddef> // size_t
#include <iostream>
#include <string>

using namespace std;

size_t strlen(char* ptr){
    size_t size = 0;
    while(*(ptr + size) != '\0')
        ++size;
    return size;
}



int main(){
    char ptr1[] = "Hello";
    char ptr2[] = "World";

    // array to pointer decay
    cout << strlen(ptr1) << '\n';

    return 0;
}