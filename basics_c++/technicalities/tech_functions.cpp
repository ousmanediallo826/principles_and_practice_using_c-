#include <iostream>

int fill(int i){
    return 0;
};

struct X {
    void f(int x) {
        struct Y {
            int f() {return 1;};
            int m;
        };
        int m;
        m=x; Y m2;
        return f(m2.f());
    
    }
    int m; 
    void g(int m) {
        if (0 < m) f(m+2); 
        else {
            g(m+2.3); }
        }
        X() {} int m3() {

        };
       
    };

int my_find(std::vector<std::string> vs, std::string s, int hint) {
    if (hint < 0 || vs.size() <= hint) hint = 0;
    for (int i = hint; i < vs.size(); ++i) {
        if (vs[i] == s) return i;
    }
    for (int i = 0; i < hint; ++i) {
        if (vs[i] ==s) return i;

    }
    return -1;
}

int main() {
    X a; a.f(2);
    int i = 7;
    std::cout << fill(i) << "\n";
}