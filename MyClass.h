#pragma once

#define NOMINMAX
#include <iostream>
#include <type_traits>
#include <string>
#include <utility>

template<typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1 _value1, T2 _value2);
	~MyClass() {};


private:

    auto Min() -> typename std::common_type<T1, T2>::type;
    T1 value1_;
    T2 value2_;
};

template<typename T1, typename T2>
inline MyClass<T1, T2>::MyClass(T1 _value1, T2 _value2) :value1_(_value1), value2_(_value2)
{

    std::string typeName[3]{};
    size_t index = 0;

    if (std::is_same<int, T1>::value || std::is_same<int, T2>::value)
    {
        typeName[index++] = "int";
        typeName[index] = "int";
    }
    if (std::is_same<float, T1>::value || std::is_same<float, T2>::value)
    {
        typeName[index++] = "float";
        typeName[index] = "float";

    }
    if (std::is_same<double, T1>::value || std::is_same<double, T2>::value)
    {
        typeName[index++] = "double";
        typeName[index] = "double";
    }

    std::cout << typeName[0] + "," + typeName[1] << std::endl;
    std::cout << "Min(" << value1_ << "," << value2_ << ") = " << Min() << std::endl<< std::endl;

}

template<typename T1, typename T2>
inline auto MyClass<T1, T2>::Min()-> typename std::common_type<T1, T2>::type
{
    return (value1_ < value2_) ? value1_ : value2_;
}

