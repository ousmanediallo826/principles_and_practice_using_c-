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

//  Exercise 1: Parameter Passing Semantics
void AnalyzeAndZero(int val, int& ref, const std::string& str) {
    val += 10;
    ref = 0;
    // str += "!";
}

// Exercise 2: Implicit Conversion & Temporary Lifetimes

void inspectLength(const std::string& text ) {
    text.length();
} 
void modifyLength(const std::string& text) {
    std::cout << text.length() << " modified.";
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


    int a = 50;
    int b = 100;
    std::string s = "Hello";
    AnalyzeAndZero(a,b,s);
    

    std::string text = "Systems Programming";
    inspectLength(text);
    std::cout << '\n';
    modifyLength(text);


}