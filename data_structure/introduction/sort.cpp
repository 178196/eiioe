#include"namespaces.h"
#include<iostream>
namespace STD{
    //1冒泡排序
    template<typename T>
    void bubble_sort(std::vector<T>&v)
    {
        if(v.empty())
            return;
        typedef std::vector<int>::size_type size_type;
        bool sorted = false;
        size_type n = v.size()-1;
        while(!sorted&&n!=0){
            sorted = true;
            for(size_type i=0;i<n;++i)
                if(v[i]>v[i+1]){
                    std::swap(v[i],v[i+1]);
                    sorted = false;
                }
            --n;
        }
    }

    //2递归求和
    template<typename T>
    T sum(std::vector<T>&v,typename std::vector<T>::const_iterator end)
    {
        if(end==v.cbegin())
            return 0;
        return Sum(v,end-1) + *(end-1);
    }


    //3递归倒置数组
    template<typename T>
    void reverse(std::vector<T>&v,typename std::vector<T>::iterator lhg,typename std::vector<T>::iterator rhg)
    {
        if(lhg<rhg)
        {
            std::swap(*lhg,*rhg);
            reverse(v,lhg+1,rhg-1);
        }
    }
    template<typename T>
    void reverse(std::vector<T>&v)
    {
        if(v.empty())
            return;
        reverse(v,v.begin(),v.end()-1);
    }


    //4二进制展开求2^n
    inline long long sqr(long long a){return a*a;}
    long long power2(int n)
    {
        if(n==0)
            return 1;
        return (n&1)?sqr(power2(n>>1))<<1:sqr(power2(n>>1));
    }


    //5二分递归
    template<typename T>
    T sum_divide(std::vector<T>&v,typename std::vector<T>::const_iterator beg,typename std::vector<T>::const_iterator end)
    {
        auto mid = beg+(end-beg)/2;
        if(beg==end-1)
            return *beg;
        return sum_divide(v,beg,mid) + sum_divide(v,mid,end);
    }
    template<typename T>
    T sum_divide(std::vector<T>&v)
    {
        if(v.empty())
            return 0;
        return sum_divide(v,v.cbegin(),v.cend());
    }


    class Person
    {
        friend void vs(Person p1,Person p2);
        public:
            Person(){}
            Person(int h,int d,int a):hp(h),defense(d),attack(a){correct();}
        private:
            void correct();
            int lowhp(Person person){return (attack-person.defense*0.05)<0?0:attack-person.defense*0.05;}
            int hp=100;
            int defense = 50;
            int attack = 3;
    };

    void Person::correct()
    {
        hp = hp<0?0:hp;
        defense = defense<0?0:defense;
        attack = attack<0?0:attack;
    }
    void vs(Person p1,Person p2)
    {
        if(p1.lowhp(p2)*p1.hp==p2.lowhp(p1)*p2.hp){
            std::cout<<"no found"<<std::endl;
        return;}
        std::cout<<(p1.lowhp(p2)*p1.hp>p2.lowhp(p1)*p2.hp?"the first win":"the second win")<<std::endl;
    }
};