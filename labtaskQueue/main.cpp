#include <iostream>
#include <queue>

void print_queue(const std::queue<int>& q)
{
    std::queue<int> temp = q;
    while (!temp.empty())
    {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}

int main()
{
    std::queue<int> q;

    for (int i = 0; i < 9; i++)
        q.push(i);

    std::cout << "Elements of queue - ";
    print_queue(q);

    int removedele = q.front();
    q.pop();
    std::cout << "Removed element - " << removedele << std::endl;

    std::cout << "Queue after removal - ";
    print_queue(q);

    int head = q.front();
    std::cout << "Head of queue - " << head << std::endl;

    int size = q.size();
    std::cout << "Size of queue - " << size;

    return 0;
}
