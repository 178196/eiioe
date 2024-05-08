#ifndef NAMESPACES
#define NAMESPACES
#include<vector>
namespace STD{
    template<typename T> void bubble_sort(std::vector<T>&v);//1冒泡排序 O(n^2)

    template<typename T> T sum(std::vector<T>&v,typename std::vector<T>::const_iterator end);//2递归求和 O(n)

    template<typename T> void reverse(std::vector<T>&v,typename std::vector<T>::iterator lhg,typename std::vector<T>::iterator rhg);//3递归倒置数组 O(n)
    template<typename T> void reverse(std::vector<T>&v);

    inline long long sqr(long long a);//4二进制展开求2^n O(logn)
    long long power2(int n);

    template<typename T>
    T sum_divide(std::vector<T>&v,typename std::vector<T>::const_iterator beg,typename std::vector<T>::const_iterator end);//5二分递归 O(n)
    template<typename T> T sum_divide(std::vector<T>&v);//space:O(logn)

};
#endif