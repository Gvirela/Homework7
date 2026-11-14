#include <iostream>

int main()
{
    short var1{ 1 };
    int var2{ 2 };
    long var3{ 3 };
    long long var4{ 4 };
    float var5{ 5.5f };
    double var6{ 6.6 };
    long double var7{ 7.77 };
    bool var8{ true };

    std::cout << "short: " << "\t\t" << &var1 << "\t" << sizeof(var1) << std::endl;
    std::cout << "int: " << "\t\t" << &var2 << "\t" << sizeof(var2) << std::endl;
    std::cout << "long: " << "\t\t" << &var3 << "\t" << sizeof(var3) << std::endl;
    std::cout << "long long: " << "\t" << &var4 << "\t" << sizeof(var4) << std::endl;
    std::cout << "float: " << "\t\t" << &var5 << "\t" << sizeof(var5) << std::endl;
    std::cout << "double: " << "\t" << &var6 << "\t" << sizeof(var6) << std::endl;
    std::cout << "long double: " << "\t" << &var7 << "\t" << sizeof(var7) << std::endl;
    std::cout << "bool: " << "\t\t" << &var8 << "\t" << sizeof(var8) << std::endl;
    
    return 0;

}