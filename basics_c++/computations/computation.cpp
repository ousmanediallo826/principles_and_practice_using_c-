#include <iostream>

int main() {
    // 3.4 Statements

    int a = 0;
    int b = 0;
    std::cout << "Please enter two integer values: \n";
    std::cin >> a >> b;
    if (a<b) {
        std::cout << a << " is smaller than " << b << "\n";

    }
    else {
        std::cout << a << " is larger than or equal to " << b << "\n";
    }


    // Try This
    // Use the example above as a model for a program that converts yen ('y'), kroner ('k'), and pounds ('p') into dollars.
    //  If you like realism, you can find conversion rates on the Web.

    double yen;
    double kroner;
    double pounds;
    std::cout << "Please enter the amount in yen: \n";
    std::cin >> yen;
    std::cout << "Please enter the amount in kroner: \n";
    std::cin >> kroner;
    std::cout << "Please enter the amount in pounds: \n";
    std::cin >> pounds;
    double dollars = (yen * 0.0075) + (kroner * 0.12) + (pounds * 1.38);
    std::cout << "The total amount in dollars is: " << dollars << "\n";



    // 3.4.1.2 switch-statements

    constexpr double cm_per_inch = 2.54;             // number of centimeters in an inch
    double length = 1;                                               // length in inches or centimeters
    char unit = ' ';
    std::cout<< "Please enter a length followed by a unit (c or i):\n";
    std::cin >> length >> unit;

    switch (unit) {
       case 'i':
              std::cout << length << "in == " << cm_per_inch*length << "cm\n";
              break;
       case 'c':
              std::cout << length << "cm == " << length/cm_per_inch << "in\n";
              break;
       default:
              std::cout << "Sorry, I don't know a unit called '" << unit << "'\n";

    }


    // Try This
    // Rewrite your currency converter program from the previous TRY THIS to use a switch-statement.
    //  Add a conversion from Swiss francs. Which version of the program is easier to write, understand, and modify? Why?

    double amount;
    char currency;
    std::cout << "Please enter an amount followed by a currency (y, k, p, s):\n";
    std::cin >> amount >> currency;
    switch (currency) {
        case 'y':
            std::cout << amount << " yen == " << amount * 0.0075 << " dollars\n";
            break;
        case 'k':
            std::cout << amount << " kroner == " << amount * 0.12 << " dollars\n";
            break;
        case 'p':
            std::cout << amount << " pounds == " << amount * 1.38 << " dollars\n";
            break;
        case 's':
            std::cout << amount << " Swiss francs == " << amount * 1.10 << " dollars\n";
            break;
        default:
            std::cout << "Sorry, I don't know a currency called '" << currency << "'\n";
    }
        
}