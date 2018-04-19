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

bool strcmp(char* ptr1, char* ptr2){
    // weed out words of different length
    if (strlen(ptr1) != strlen(ptr2))
        return false;

    // if we make it here, only need to check for null char on one string, since they are of the same length 
    for(size_t i = 0; *(ptr1 + i) != '\0'; ++i){
        if (*(ptr1 + i) != *(ptr2 + i))
            return false;
    }

    // if we make it here, every element in the null terminated char array is the same
    return true;
}

char* strcat(char* destination, char* source){
    size_t overwrite_position = strlen(destination);
    size_t source_size = strlen(source);

    // copy one past the last element to copy the null character as well
    for (size_t i = 0; i != source_size + 1; ++i)
        destination[overwrite_position++] = source[i];
    
    return destination;
}

int main(){
    char ptr1[] = "Hello";
    char ptr2[] = "World";

    // strlen test using array to pointer decay
    cout << "Length of " << ptr1 << " is " << strlen(ptr1) << '\n';
    cout << "Length of " << ptr2 << " is " << strlen(ptr2) << '\n';

    // strcmp test
    if (strcmp(ptr1, ptr2))
        cout << ptr1 << " and " << ptr2 << " are the same" << '\n';
    else
        cout << ptr1 << " and " << ptr2 << " are different" << '\n';

    // strcat test
    cout << strcat(ptr1, ptr2) << '\n';

    return 0;
}