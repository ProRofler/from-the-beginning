#pragma once


template <typename T>
auto AbsoluteSum(const T &Values)
{
    auto result = 0;

    for (auto &Value : Values)
    {
        result += Value;
    }
    
    return result;
}

int AbsoluteSumRecursion(const std::vector<int> &Values, int Size);
