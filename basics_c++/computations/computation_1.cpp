#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Please enter two integer values: \n";
    std::cin >> a >> b;
    if (a < b) {
        std::cout << a << " is smaller than " << b << "\n";
    }
    else {
        std::cout << a << " is larger than or equal to " << b << "\n";
    }


    std::vector<double> temps;
    for (double temp; std::cin >> temp;) {
        temps.push_back(temp);
        std::cout << "Temperature recorded: " << temp << '\n';
        std::cout << "Number of temperatures recorded: " << temps.size() <<" " << temps[temps.size() - 1] << '\n';
    }

//     Number guessing with conditions
//     Ask the user to enter a number.
//     Use an if statement to tell them whether it is:
//     positive,
//     negative,
//     or zero.
//     Then use a loop to let them try again until they enter 0.
         

        for (int number; std::cin >> number;) {
            if (number > 0) {
                std::cout << "The number is positive.\n";
            }
            else if (number < 0) {
                std::cout << "The number is negative.\n";
            }
            else {
                std::cout << "The number is zero. Exiting the loop.\n";
                break;
            }
            }


        // Sum and average of numbers
        // Read several numbers from input using a loop.
        // Store them in a vector.
        // After input ends, print:
        // the total sum,
        // the average,
        // and the number of values entered.

        std::vector<double> numbers;
        for (double number; std::cin >> number;) {
            numbers.push_back(number);
        }

        double sum = 0;

        for (double num : numbers) {
            sum += num;
        }

        double average = (numbers.size() > 0) ? sum / numbers.size() : 0;

        std::cout << "Total sum: " << sum << "\n";
        std::cout << "Average: " << average << "\n";
        std::cout << "Number of values entered: " << numbers.size() << "\n";




        // Find the largest and smallest value
        // Read values into a vector.
        // Use iteration to find:
        // the largest value,
        // the smallest value,
        // and their positions.
        // Print the results.

        std::vector<double> values;
        for (double value; std::cin >> value;) {
            values.push_back(value);
        }

        if (!values.empty()) {
            double largest = values[0];
            double smallest = values[0];
            size_t largest_index = 0;
            size_t smallest_index = 0;

            for (size_t i = 1; i < values.size(); ++i) {
                if (values[i] > largest) {
                    largest = values[i];
                    largest_index = i;
                }
                if (values[i] < smallest) {
                    smallest = values[i];
                    smallest_index = i;
                }
            }

            std::cout << "Largest value: " << largest << " at index " << largest_index << "\n";
            std::cout << "Smallest value: " << smallest << " at index " << smallest_index << "\n";
        }

    }