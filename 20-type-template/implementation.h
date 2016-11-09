#pragma once

#include <cstddef>
#include <utility>

template<typename T>
class container_wrapper{
//private:
//    T* _container;
public:
//    container_wrapper():_container{nullptr}{}
//    container_wrapper(T && container):_container{container}{}s
    container_wrapper() = default;
    container_wrapper(T container):_container(std::move(container)){}

    container_wrapper(const container_wrapper &) = default; // to samo co container_wrapper(const container_wrapper<T> &)
     // nie opuszczać tego const na górze.
    container_wrapper(container_wrapper &&) = default;

    container_wrapper & operator = (const container_wrapper &) = default;
    container_wrapper & operator = (container_wrapper &&) = default;

    std::size_t size() const{return _container.size();}
private:
    T _container;
};

