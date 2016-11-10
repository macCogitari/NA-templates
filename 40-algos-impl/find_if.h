#pragma once

//namespace training
//{
//template<typename InputIt, typename UnaryPredicate>
//InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred);
//}



namespace training
{

template<typename InputIt, typename UnaryPredicate>
InputIt find_if(InputIt begin, InputIt end, UnaryPredicate pred){
    for( ; begin != end; ++begin){
        if (pred(*begin)){
            break;
        }
    }
    return begin;
}

}

