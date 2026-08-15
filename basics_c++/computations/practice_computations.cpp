#include <iostream>

void MultiplyMultiplies(std::vector<int>& numbers, int factor) {
    for (auto& num : numbers) {
        if (num % factor) {
            num *= factor;
        }
    }
    
};

void sanitizeData(std::vector<int>& data) {
    for (auto& num : data) {
        if (num < 0) {
            num  = 0;
        }
    }
};

int countFrequency(const std::vector<std::string>& words, const std::string& target) {
    int count = 0;

    for (auto& word : words) {
        if (word == target) {
            count += 1;
        }
    }
    return count;
}

int findEvenNumber(std::vector<int>& data) {
    for(auto& num : data) {
        if (num % 2 == 0) std::cout << num << " is an even number.";
        else if (num % 2 != 0) std::cout << num << " is an odd number";
        else if (num < 0 ) std::cout << "We don't compute negative number.";
        else std::cout << "This is either not a integer";
    }
    return 0;
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


//    Exercise 2: Replace Negatives with Zero

    std::vector<int> data = {10, -5, 3, -12, 0, 8};
    sanitizeData(data);

    for( int num : data) {
        std::cout << num << " ";
    };


    std::vector<int> datas {10, 3, 5, 7, 6, 8, 20, -2, -4, "ousmane"};
    findEvenNumber(datas);
    for (int num : datas) std::cout <<" " << num << " ";









    return 0;

}