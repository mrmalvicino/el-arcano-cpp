#include "../../include/utils/math.h"

int Math::generateRandom(int max, int min)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}