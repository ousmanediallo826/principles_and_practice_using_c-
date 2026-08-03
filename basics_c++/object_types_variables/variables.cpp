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
    

    std::string first_name;

    std::cout << "Enter the name of the person you want to write to \n";
    std::cin >> first_name;

    std::cout << "Dear " << first_name << ",\n\n";

    std::cout << "How are you? I am fine. I miss you. I hope to see you soon.\n";
    std::cout << "I have a question for you. Do you like C++? I think it is a great programming language.\n";

    std::cout << "Add a friend name: \n";
    std::string friend_name;
    std::cin >> friend_name;

    std::cout << "Have you seen " << friend_name << " lately?\n";

    std::cout << "Enter the age of the recipient: \n";
    int age;
    std::cin >> age;

    std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age <= 0 || age >= 110) {
        simple_error("you're kidding!");
    }
    else if (age < 12) {
        std::cout << "Next year you will be " << age + 1 << ".\n";
    }
    else if (age == 17) {
        std::cout << "Next year you will be able to vote.\n";
    }
    else if (age > 70) {
        std::cout << "I hope you are enjoying retirement.\n";
    }

    std::cout << "Yours sincerely,\n\n\n";
    std::cout << "Ousmane\n";



    


}