#include <iostream>



// 1. Parameter Passing Modes
void passByValue(int x) {
    x += 100;
}

void passByReference(int& x) {
    x += 100;
}

void passByConstRef(const std::vector<int>& data) {
    std::cout << data.size() << '\n';
}





// 2. Argument Conversions & Implicit Temporaries
void printMessage(const std::string& str) {
    std::cout << str << "\n";
}

void modifyValue(int& val) {
    val *= 2;
}



int main() {

    int num = 5;
    passByValue(num);
    std::cout << "After passByValue: " << num << '\n';

    passByReference(num);
    std::cout << "After passByReference: " << num << '\n';

    std::vector<int> largeVec(1000, 42);
    passByConstRef(largeVec);

    printMessage("Hello World");

    int x = 10;
    modifyValue(x);

}