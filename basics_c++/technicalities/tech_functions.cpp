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
            return 0;

        };
       
    };

int my_find(const std::vector<std::string>& vs, const std::string& s, int hint) {
    if (hint < 0 || vs.size() <= hint) hint = 0;
    for (int i = hint; i < vs.size(); ++i) {
        if (vs[i] == s) return i;
    }
    for (int i = 0; i < hint; ++i) {
        if (vs[i] ==s) return i;

    }
    return -1;
}

// Pass-by const reference
void print(const std::vector<double>& v) {
    std::cout << "{";
    for(int i = 0; i < v.size(); ++i) {
        std::cout << v[i];
        if (i!=v.size() -1) std::cout << ",";

    }
    std::cout << "} \n";
}

void f(int x) {
    std::vector<double> vd1(10);
    std::vector<double> vd2(1000000000);
    std::vector<double> vd3(x);


    print(vd1);
    print(vd2);
    print(vd3);
}



int main() {
    X a; a.f(2);
    int i = 7;
    std::cout << fill(i) << "\n";
}