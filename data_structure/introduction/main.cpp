#include"sort.cpp"
#include<vector>
#include<iostream>
int main()
{
    std::vector<int>v{1,2,3,4,5,6,7,8};
    STD::reverse(v);
    for(const auto&c:v)
        std::cout<<c<<" ";
    std::cout<<std::endl;
    std::cout<<STD::sum_divide(v)<<std::endl;
    STD::Person p1(100,3,-34),p2;
    STD::vs(p1,p2);
    
}