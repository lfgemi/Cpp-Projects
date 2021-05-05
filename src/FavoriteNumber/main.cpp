#include <iostream>

int main()
{
    int favorite_number;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing! " << favorite_number << " is my favourite number too." << std::endl;
    return 0;
}
