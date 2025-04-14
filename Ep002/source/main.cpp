#include<iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main()
{
    std::cout<<"Hello from C++ 20 with Cmake on windows/Linux"<<std::endl;
    std::cout<<"add(1, 2) = "<<add(1, 2)<<std::endl;
    return 0;
}