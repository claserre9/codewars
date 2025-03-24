#include "iostream"
//https://www.codewars.com/kata/51e04f6b544cf3f6550000c1
using namespace std;

int beeramid(int bonus, double price)
{
    int beers = int (bonus / price);
    int levels = 0;
    int beersNeeded = 0;
    while (beersNeeded <= beers) {
        levels++;
        beersNeeded += levels * levels;
    }
    return levels - 1;
}

int main(){
    int level = beeramid(1500, 2);
    std::cout << "The number of levels in the beeramid is: " << level << std::endl;

    return 0;
}