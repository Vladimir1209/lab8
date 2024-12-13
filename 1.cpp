#include <iostream>
#include <cstddef> 
#include <algorithm> 


char* CopyString(const char* str) {
    if (str == nullptr) {
        return nullptr;
    }

    size_t length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    char* new_str = new char[length + 1];

    std::copy(str, str + length, new_str);
    new_str[length] = '\0'; 

    return new_str;
}

char* ConcatinateStrings(const char* a, const char* b) {
    if (a == nullptr || b == nullptr) {
        return nullptr;
    }

    size_t length_a = 0;
    while (a[length_a] != '\0') {
        ++length_a;
    }

    size_t length_b = 0;
    while (b[length_b] != '\0') {
        ++length_b;
    }

    char* new_str = new char[length_a + length_b + 1];


    std::copy(a, a + length_a, new_str);

  
    std::copy(b, b + length_b, new_str + length_a);

    new_str[length_a + length_b] = '\0'; 

    return new_str;
}
