// Copyright (c) 2021-present James Marjun Jallorina
// All Rights Reserved
//
// Distributed under the "MIT License". See the accompanying LICENSE.rst file.

#include "function_tmpl.hpp"

#include <string>
#include <iostream>

int main()
{
    int x = 10;
    int y = 5;
    std::string s1 = "hello ";
    std::string s2 = "world! ";

    std::cout << sum(x, y) << std::endl;
    std::cout << diff(x, y) << std::endl;
    std::cout << product(x, y) << std::endl;
    std::cout << quotient(x, y) << std::endl;

    std::cout << sum(s1, s2) << std::endl;

    // uncomment this to test compilation error
#if defined(TEST_STRING_NON_OPERATOR_OVERLOAD)
    std::cout << diff(s1, s2) << std::endl;
    std::cout << product(s1, s2) << std::endl;
    std::cout << quotient(s1, s2) << std::endl;
#endif

    std::cout << to_string(50) << std::endl;
    std::cout << to_string(40.2) << std::endl;

    return 0;
}