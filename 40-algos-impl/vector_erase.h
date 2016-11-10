#pragma once

#include "algorithm"

// define vector_erase here
//template<typename T, typename Alloc>
//void vector_erase(std::vector<T, Alloc> & vec, const T& elem ){
//    vec.erase(std::remove(vec.begin(), vec.end(), elem), vec.end());
//}

template<typename T>
void vector_erase(T & vec, const typename T::value_type& elem ){
    vec.erase(std::remove(vec.begin(), vec.end(), elem), vec.end());
}
