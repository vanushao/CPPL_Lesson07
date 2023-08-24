#include <iostream>
#include <set>
#include <vector>
#include <list>

template <class T>
void print_container(const T &it_first, const T &it_last){
    if (it_first == it_last) return ;
    
    for(auto it = it_first; it != it_last; ++it){
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}


int main(){

    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set.begin(), test_set.end());

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list.begin(), test_list.end());

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector.begin(), test_vector.end());

}