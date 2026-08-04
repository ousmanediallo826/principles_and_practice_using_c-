#include <iostream>
void simple_error(const std::string& message) {
    std::cerr << "Error: " << message << '\n';
    throw std::runtime_error(message);
}
int main() {
    // std::cout << "Please enter your first name and age\n";
    // std::string first_name ="???";
    // int age = -1;
    // std::cin >> first_name >> age;
    // std::cout << "Hello, " << first_name << " (age " << age << ")\n";

    // 1) Try this code with different values of n. What happens if you enter a floating−point value?

    // std::cout << "Please enter a floating−point value: ";
    //      int n = 0;
    //      std::cin >> n;
    //      std::cout << "n == " << n
    //               << "\nn+1 == " << n+1
    //               << "\nthree times n == " << 3*n
    //               << "\ntwice n == " << n+n
    //               << "\nn squared == " << n*n
    //               << "\nhalf of n == " << n/2
    //               << "\nsquare root of n == " << sqrt(n)
    //               << '\n'
    //               << "n mod 2 == " << n%2;


    //2.5.1 An example: detect repeated words

    // std::string previous;
    // std::string current;
    
    // while (std::cin >> current) {
    //     if (previous == current) {
    //         std::cout << "Repeated word: " << current << '\n';

    //     }
    //     previous = current;
    // }


    // 2.5.3 An example: find repeated words

    // int number_of_words = 0;

    // std::string previous;
    // std::string current;

    // while (std::cin >> current) {
    //     ++number_of_words;
    //     if (previous == current) {
    //                 std::cout << "word number " << number_of_words << " repeated: " << current << '\n';

    //     }
    //     previous = current;
    // }

    // 2.6 Names

    // std::string s = "Goodbye, cruel world! ";
    //     std::cout << s << '\n';



    // Drill
    

    // std::string first_name;

    // std::cout << "Enter the name of the person you want to write to \n";
    // std::cin >> first_name;

    // std::cout << "Dear " << first_name << ",\n\n";

    // std::cout << "How are you? I am fine. I miss you. I hope to see you soon.\n";
    // std::cout << "I have a question for you. Do you like C++? I think it is a great programming language.\n";

    // std::cout << "Add a friend name: \n";
    // std::string friend_name;
    // std::cin >> friend_name;

    // std::cout << "Have you seen " << friend_name << " lately?\n";

    // std::cout << "Enter the age of the recipient: \n";
    // int age;
    // std::cin >> age;

    // std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    // if (age <= 0 || age >= 110) {
    //     simple_error("you're kidding!");
    // }
    // else if (age < 12) {
    //     std::cout << "Next year you will be " << age + 1 << ".\n";
    // }
    // else if (age == 17) {
    //     std::cout << "Next year you will be able to vote.\n";
    // }
    // else if (age > 70) {
    //     std::cout << "I hope you are enjoying retirement.\n";
    // }

    // std::cout << "Yours sincerely,\n\n\n";
    // std::cout << "Ousmane\n";



    // Exercises

    // [2] Write a program in C++ that converts from miles to kilometers.
    //  Your program should have a reasonable prompt for the user to enter a number of miles.\
     Hint: A mile is1.609 kilometers.

     int miles;
     std::cout << "Enter a number of miles: \n";
     std::cin >> miles;
     double kilometers = miles * 1.609;
     std::cout << miles << " miles is " << kilometers << " kilometers.\n";

    //  [3] Write a program that doesn’t do anything,
    //  but declares a number of variables with legal and illegal
    //  names (such as int double = 0;), so that you can see how the compiler reacts.

    // int double = 0;
    // int 2nd_variable = 0;
    // int my_variable = 0;
    // double int = 0;
    // std::string string = "Hello";


    // [4] Write a program that prompts the user to enter two integer values. 
    // Store these values in int variables named val1 and val2. 
    // Write your program to determine the smaller, larger, sum, difference,
    //  product, and ratio of these values and report them to the user.

    int val1, val2;
    std::cout << "Enter two integer values: \n";
    std::cin >> val1 >> val2;
    int smaller = (val1 < val2) ? val1 : val2;
    int larger = (val1 > val2) ? val1 : val2;
    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    double ratio = (val2 != 0) ? static_cast<double>(val1) / val2 : 0.0;

    std::cout << "Smaller: " << smaller << "\n";
    std::cout << "Larger: " << larger << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    if (val2 != 0) {
        std::cout << "Ratio: " << ratio << "\n";
    } else {
        std::cout << "Ratio: undefined (division by zero)\n";   
    }

    // [6] Write a program that prompts the user to enter three integer values,
    //  and then outputs the values in numerical sequence separated by commas. 
    // So, if the user enters the values 10 4 6, the output should be 4, 6, 10. 
    // If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.

    int a, b, c;
    std::cout << "Enter three integer values: \n";
    std::cin >> a >> b >> c;
    // Sort the values in ascending order
    if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (b > c) std::swap(b, c);
    std::cout << "Sorted values: " << a << ", " << b << ", " << c << "\n";




}