#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>

int main()
{
    auto array_W_O_Repeats = [] (std::vector<int> array)
    {
        std::unordered_set<int> ints;
        for(auto integer : array)
        {
            ints.insert(integer);
        }

        array.clear();

        for(auto  integer : ints)
        {
            array.push_back(integer);
        }

        std::unique_ptr< std::vector<int> > pointer= std::make_unique< std::vector<int> > (array);

        return pointer;
    };

    std::vector<int> a = {1,1,2,5,6,2};
    auto b = array_W_O_Repeats(a);

    return 0;
}
