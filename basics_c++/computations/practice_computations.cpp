#include <iostream>


int main() {
    std::vector<int> numbers = {1,2,3,4,5,6};
    for (const auto& num : numbers) std::cout << num << " ";
        
    std::cout << "\n";

    for (auto& num : numbers) std::cout << (num *= 2)<< " ";

    std::cout << "\n";

    std::vector<int> digits = {10, 20, 30, 40, 50};

    for (std::size_t i = 0; i < digits.size(); ++i) std::cout << "Index " << i << " " << digits[i] << "\n";

      std::cout << "\n";

    for (auto it = digits.cbegin(); it != digits.cend(); ++it) std::cout << *it << " ";

      std::cout << "\n";

    for (auto rit = digits.rbegin(); rit != digits.rend(); ++rit) std::cout << *rit << " ";


    return 0;

}