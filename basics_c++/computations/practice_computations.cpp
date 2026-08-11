#include <iostream>

void MultiplyMultiplies(std::vector<int>& numbers, int factor) {
    for (auto& num : numbers) {
        if (num % factor) {
            num *= factor;
        }
    }
    
}

int main() {
    // std::vector<int> numbers = {1,2,3,4,5,6};
    // for (const auto& num : numbers) std::cout << num << " ";
        
    // std::cout << "\n";

    // for (auto& num : numbers) std::cout << (num *= 2)<< " ";

    // std::cout << "\n";

    // std::vector<int> digits = {10, 20, 30, 40, 50};

    // for (std::size_t i = 0; i < digits.size(); ++i) std::cout << "Index " << i << " " << digits[i] << "\n";

    //   std::cout << "\n";

    // for (auto it = digits.cbegin(); it != digits.cend(); ++it) std::cout << *it << " ";

    //   std::cout << "\n";

    // for (auto rit = digits.rbegin(); rit != digits.rend(); ++rit) std::cout << *rit << " ";


    // Exercise 1: Multiples Multiplier (Modify In-Place)


    int factor = 3;
    std::vector<int> numbers = {3, 8, 9, 12, 14};

    MultiplyMultiplies(numbers, factor);

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";




    return 0;

}