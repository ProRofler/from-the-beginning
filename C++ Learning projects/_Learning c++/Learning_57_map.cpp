#include <iostream>
#include <map>
#include <string>
#include <algorithm>


void PrintMap(const std::map<char, std::string> &mp)
{
    if (!mp.empty())
        for (auto &i : mp)
        {
            std::cout << i.first << ' ' << i.second << '\n';
                if (i == *mp.rbegin())
                    std::cout << "*************************" << '\n';
        }
    else
    std::cout << "The map is empty!" << std::endl;
}

int main()
{
    //thi first one is a key = iterator, the second one is value
    std::map<char, std::string> mp = {{'B', "The second key"}, {'C', "The third key"}, {'A', "The first key"}}; // map contains a key and the value
    //PrintMap(mp);

    mp.insert({'G', "The fourth key"});
    mp.insert({'E', "The fifth key"});
    //PrintMap(mp);

    mp.erase('B');
    //PrintMap(mp);

    auto it1 = mp.find('C');
    auto it2 = mp.find('G');

    std::swap(it1->second, it2->second);
    
    // in case of map you have to use pair in lambda function in order for it to work+
    std::for_each(mp.begin(), mp.end(), [](const std::pair<char, std::string>& pair) {std::cout << pair.first << ": " << pair.second << std::endl;});

    //std::sort(mp.begin(), mp.end());

    //mp.clear();
    //PrintMap(mp);

    return 0;
}