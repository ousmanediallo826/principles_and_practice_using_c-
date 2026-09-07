#include <iostream>

int main() {
    
    class X {
        public:
            int m;
            int mf(int v) {
                int old = m;
                m = v;
                return old;
            }
    };
    X var;
    var.m = 7;
    int x = var.mf(9);
    std::cout << x ;

    struct Date {
        int y;
        int m;
        int d;
    };
 

    Date today;

    today.y = 2026;
    today.m = 8;
    today.d = 26;
    std::cout << "\n";

    std::cout << today.m << "/" << today.d << "/" << today.y;



    

}