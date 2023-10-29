#include <iostream>

int main()
{
    // random seed
    // time helps us have random seed based on time
    srand(time(NULL));

    // represents max number generated
    int range = 6;

    // % allows us to have random num from 1-6
    // +1 is there because without it, the range would be 0-5
    int num = (rand() % range) + 1;

    std::cout << num << std::endl;

    return 0;
}