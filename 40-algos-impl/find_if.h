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
    InputIt iter=begin;
    for( ; iter != end; ++iter){
        if (pred(*iter)){
            break;
        }
    }
    return iter;
}

}

