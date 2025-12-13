/*
 * Program Name: Hello World
 * Author: Frank E. Ciszek
 * Date: 12/13/2025
 * Purpose: Run the first program "Hello, World!" using c++. Drill from page
 * 24 of the book. 
 */

#include <iostream>     // Using the "less elegant" #include because my compiler
                        // doesn't support importing modules like in the book.
                        // Did some research and apparently c++20 was/is slower
                        // to implement than originally predicted???

int main() {
    std::cout << "Hello, World!" << std::endl;
}