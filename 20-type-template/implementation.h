#pragma once

#include <cstddef>
#include <utility>

#include <boost/optional.hpp>

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


//template<>
//class container_wrapper<boost::optional<int> >
//{
////private:
////    T* _container;
//public:
////    container_wrapper():_container{nullptr}{}
////    container_wrapper(T && container):_contaisner{container}{}s
//    container_wrapper() = default;
//    container_wrapper(boost::optional<int> container):_container(std::move(container)){}

//    container_wrapper(const container_wrapper &) = default; // to samo co container_wrapper(const container_wrapper<T> &)
//     // nie opuszczać tego const na górze.
//    container_wrapper(container_wrapper &&) = default;

//    container_wrapper & operator = (const container_wrapper &) = default;
//    container_wrapper & operator = (container_wrapper &&) = default;

//    std::size_t size() const{return _container ? 1 : 0;}
//private:
//    boost::optional<int> _container;
//};

template<typename T>
class container_wrapper<boost::optional<T> >
{
//private:
//    T* _container;
public:
//    container_wrapper():_container{nullptr}{}
//    container_wrapper(T && container):_container{container}{}s
    container_wrapper() = default;
    container_wrapper(boost::optional<T> container):_container(std::move(container)){}

    container_wrapper(const container_wrapper &) = default; // to samo co container_wrapper(const container_wrapper<T> &)
     // nie opuszczać tego const na górze.
    container_wrapper(container_wrapper &&) = default;

    container_wrapper & operator = (const container_wrapper &) = default;
    container_wrapper & operator = (container_wrapper &&) = default;

    std::size_t size() const{return _container ? 1 : 0;}
private:
    boost::optional<T> _container;
};


