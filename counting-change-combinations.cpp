#include <vector>

using namespace std;
unsigned long long countChange(const unsigned int& money, const vector<unsigned int>& coins) {
    int changeCombinationCount = 0;
    unsigned int moneyCount = 0;
    for (auto coin: coins) {
        while (moneyCount < money){
            moneyCount += coin;
        }
    }

    return 0;
}

int main(){
    return 0;
}
