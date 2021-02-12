// Copyright (c) 2021-present James Marjun Jallorina
// All Rights Reserved
//
// Distributed under the "MIT License". See the accompanying LICENSE.rst file.

#ifndef FUNCTION_TMPL_HPP
#define FUNCTION_TMPL_HPP

#include <sstream>

template <typename T>
T sum(T x, T y)
{
    return x + y;
}

template <typename T>
T diff(T x, T y)
{
    return x - y;
}

template <typename T>
T product(T x, T y)
{
    return x * y;
}

template <typename T>
T quotient(T x, T y)
{
    return x/y;
}

template <typename T>
std::string to_string(T t)
{
    std::ostringstream ostr;
    ostr << t;
    return ostr.str();
}


#endif // FUNCTION_TMPL_HPP