#include <iostream>
void error(const std::string& s) {
    throw std::runtime_error(s);
}

int main () {
    //  First Attempt of the calculator
    // std::cout << "Please enter expression ( we can handle '+' and '-'):";
    // int lval = 0;
    // int rval = 0;
    // char op = 0;
    // int res = 0;
    // std::cin >> lval >> op >> rval;

    // if (op == '+') res = lval + rval;
    // else if (op == '-') res = lval - rval;
    // std::cout << "Result: " << res << "\n";

    //  Second Attempt of the calculator 

     std::cout << "Please enter expression ( we can handle '+', '-', '*' and '/'): \n";
     std::cout << "add an x expression (e.g 1+2*3x):" ;

     int lval = 0;
     int rval = 0;
     std::cin >> lval;
     if (!std::cin) error("no first operand");

     for (char op; std::cin >> op;) {
        if (op != 'x') std::cin >> rval;
        if (!std::cin) error("no second operand");

        switch(op) {
        case '+':

            lval += rval;
            break;
        case '-':
            lval -= rval;
            break;
        case '*':
            lval *= rval;
            break;
        case '/':
            lval /= rval;
            break;
        default:
            std::cout << "Result: " << lval << '\n';
            return 0;
        }

     }


}