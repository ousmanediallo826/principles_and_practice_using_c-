#include <iostream>

char ask_user(std::string question) {
    std::cout << question << "? (yes or no)\n";
    std::string answer;
    std::cin >> answer;

    if (answer == "y" || "yes") return 'Y';
    if (answer == "n" || "no" ) return 'N';
    return 'bad';
}
int area(int width, int length){
    
    if (length<=0 || width <=0)
                return −1;
    return length * width;
};
int main () {
    

    int s1 = area(7,2);
    std::cout << s1 << " is the area of s1 \n";

}