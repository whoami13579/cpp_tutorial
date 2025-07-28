#include <iostream>
#include <string>

int main() {
    // int (-2,147,483,648 to 2,147,483,647)
    int i = 10;
    std::cout << "i = " << i << std::endl;

    int i2 = 5.5;
    std::cout << "i2 = " << i2 << std::endl;

    int i3 = -5.5;
    std::cout << "i3 = " << i3 << std::endl;

    // short (-32,768 to 32,767)
    short s = 10;
    std::cout << "s = " << s << std::endl;

    short s2 = 32767; //overflow
    s2  = s2 + 1;
    std::cout << "s2 = " << s2 << std::endl;

    short s3 = -32768;
    s3 = s3 - 1;
    std::cout << "s3 = " << s3 << std::endl;

    // long long (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    long long ll = 32767 + 1;
    std::cout << "ll = " << ll << std::endl;

    
    std::cout << "----------" << std::endl;

    // float 3.4E +/- 38 (seven digits)
    float f = 5;
    std::cout << "f = " << f << std::endl;

    float f2 = 1.5;
    std::cout << "f2 = " << f2 << std::endl;

    // double 1.7E +/- 308 (fifteen digits)
    double d;

    std::cout << "----------" << std::endl;

    // char
    char c = 'A';
    std::cout << "c = " << c << std::endl;

    char c2 = 'A' + 1;
    std::cout << "c2 = " << c2 << std::endl;

    char c3 = 65;
    std::cout << "c3 = " << c3 << std::endl;

    std::cout << "----------" << std::endl;

    // string
    std::string str = "hello";
    std::cout << "str = " << str << std::endl;

    std::string str2 = "world";
    std::cout << "str2 = " << str2 << std::endl;

    std::cout << "str + str2 = " << str + " " + str2 << std::endl;

    str = "1";
    str2 = "2";
    std::cout << "str + str2 = " << str + str2 << std::endl;

    std::cout << "----------" << std::endl;

    // bool
    bool b = true;
    std::cout << "b = " << b << std::endl;

    bool b2 = false;
    std::cout << "b2 = " << b2 << std::endl;

    bool b3 = 10;
    std::cout << "b3 = " << b3 << std::endl;

    std::cout << "----------" << std::endl;

    // int (-2,147,483,648 to 2,147,483,647)
    // unsigned int (0 to 4,294,967,295)
    unsigned int ui = -1;
    std::cout << "ui = " << ui << std::endl;

    // short (-32,768 to 32,767)
    // unsigned short (0 to 65,535)
    unsigned short us = 65535;
    us = us + 1;
    std::cout << "us = " << us << std::endl;

    // long long (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    // unsigned long long (0 to 18,446,744,073,709,551,615)
    unsigned long long ull = -1;
    std::cout << "ull = " << ull << std::endl;


    std::cout << "----------" << std::endl;

    // constant
    const float PI = 3.14;
    std::cout << "PI = " << PI << std::endl;
    // PI = 1;

    return 0;
}