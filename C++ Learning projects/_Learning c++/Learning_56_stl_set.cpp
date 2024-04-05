#include <iostream>
#include <set>
#include <unordered_set>

void PrintSet(const std::set<char> &set)
{
 for (auto i: set)
    {
        std::cout << i << ' ';

        if (i == *set.rbegin()) // unnesessary check in this case. But I'll leave it here just to remember
            std::cout << '\n';
    }
}

void PrintSet(const std::unordered_set<int> &set)
{
 for (auto i: set)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}


int main ()
{
    // the set contain the keys, they must be unique unless you're using a multiset. The elemets are going to be sorted automatically
    std::set<char> c = {'F', 'S', 'A', 'K', 'S', 'W'}; // initializing an ordered list, it's a binary tree. Any operations with it are logarithmically complex
    std::unordered_set<int> us = {1, 4, 5, 2, 9, 4, 8, 0};

    std::cout << "ordered container size: " << c.size() << " || maximum size: " << c.max_size() << '\n';

    //PrintSet(us);

    for (int i = 8; i < 1007; i++)
    {
        us.insert(us.end(), i);
    }
    
    //PrintSet(us);

    std::cout << "Count of 500: " << us.count(500) << " || load factor: " << us.load_factor() << " || buckets: " << us.bucket_count() << '\n';


    
    //insert operation
    std::pair<std::set<char>::iterator, bool> ret = c.insert('S'); // ret will represent a variable which contains iterator and result of operation
    if (ret.second)
        std::cout << "inserted succesfully at iterator: " << *ret.first << '\n';
    else
        std::cout << "Failed to insert, the key is already exists\n";
    return 0;

}