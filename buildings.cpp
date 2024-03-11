#include <iostream>
#include <deque>
#include <vector>

std::deque<int> result(std::vector <int> vec)
{
    std::deque<int> deq;
    int M=0;
    for (int i =vec.size() - 1; i >=0; i--)
    {
        if (vec[i] > M)
        {
            deq.push_front(i);
            M = vec[i];
        }
    }
    return deq;
}
