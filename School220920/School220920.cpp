
#include <iostream>
#include <string>
#include <vector>

void calc(double);
void calc(int);
void calc(int, int);
void calc(double, double);

void calc(double a) {
    std::cout << "circle: " << 3.14 * a * a;
}

void calc(int b) {
    std::cout << "square: " << 3.14 * b * b;
}

void calc(int a, int b) {
    std::cout << "rectangel: " << a * b;
}

void calc(double w, double q) {
    std::cout << "Triangle: " << (1 / 2) * w * q;
}


//void calc(int, int);
//void calc(double, int);
//void calc(int, int, int);
//
//
//void calc(int a, int b) {
//    std::cout << a + b;
//}
//
//
//void calc(double a, int b){
//    std::cout << a + b;
//}
//
//void calc(int a, int b, int c) {
//    std::cout << a + b + c;
//}
//
//
//void printOut(int num);
//void printOut(double num);
//void printOut(std::string s);
//void printOut(std::string s1, std::string s2);
//void printOut(std::vector<int> v);
//void printOut(char c);
//
//void printOut(int num) {
//    std::cout << "integer function: " << num << std::endl;
//
//}
//
//void printOut(std::string s) {
//    std::cout << "String function: " << s << std::endl;
//
//}
//
//void printOut(char c) {
//    std::cout << "char function: " << c << std::endl;
//
//}

int main()
{
    
}

