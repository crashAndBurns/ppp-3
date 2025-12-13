/*
 * Program Name: Hello World Two
 * Author: Frank E. Ciszek
 * Date: 12/13/2025
 * Purpose: Change the output of the hello world program.
 */

#include <iostream>     // Using the "less elegant" #include because my compiler
                        // doesn't support importing modules like in the book.
                        // Did some research and apparently c++20 was/is slower
                        // to implement than originally predicted???

int main() {
    std::cout << "Hello, programming!\nHere we go!\n" << std::endl;
}