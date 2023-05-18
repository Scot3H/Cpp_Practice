#include <iostream>
#include <vector>
#include <thread>
#include <atomic>

void factor(std::atomic<int> &Num){
    Num += 5;
}


int main()
{
    std::vector<std::thread> threads;
    std::atomic<int> sum(0);

    for(int i = 0; i<10;i++){
        threads.push_back(std::thread(factor, std::ref(sum)));
    }
    std::cout << sum << std::endl;

    return 0;
}