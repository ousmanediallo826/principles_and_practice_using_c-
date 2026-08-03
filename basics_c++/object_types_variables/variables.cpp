#include <iostream>

int main() {
    // std::cout << "Please enter your first name and age\n";
    // std::string first_name ="???";
    // int age = -1;
    // std::cin >> first_name >> age;
    // std::cout << "Hello, " << first_name << " (age " << age << ")\n";

    std::cout << "Please enter a floating−point value: ";
         int n = 0;
         std::cin >> n;
         std::cout << "n == " << n
                  << "\nn+1 == " << n+1
                  << "\nthree times n == " << 3*n
                  << "\ntwice n == " << n+n
                  << "\nn squared == " << n*n
                  << "\nhalf of n == " << n/2
                  << "\nsquare root of n == " << sqrt(n)
                  << '\n'
                  << "n mod 2 == " << n%2;
}