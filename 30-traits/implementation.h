#pragma once

#include <type_traits>



template<typename T, typename T1, typename T2, typename T3>
struct is_any_of : std::bool_constant<
        std::is_same<T, T1>::value
        || std::is_same<T, T2>::value
        || std::is_same<T, T3>::value
        >
{

};
