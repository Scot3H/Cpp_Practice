#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

std::mutex vector_mutex;

void addToVector(std::vector<int> &shared, int num)
{
    std::lock_guard<std::mutex> lock(vector_mutex);
    shared.push_back(num);
}

int main()
{
    std::vector<int> child_ids;
    std::thread t1(addToVector, std::ref(child_ids), 1);
    std::thread t2(addToVector, std::ref(child_ids), 2);
    std::thread t3(addToVector, std::ref(child_ids), 3);

    t1.join();
    t2.join();
    t3.join();

    for (const int &i : child_ids)
    {
        std::cout << i << "\n";
    }

    return 0;
}