#include <stdio.h>

int get_sum(int a , int b) {
    if(a == b) return a;
    int sum = 0;
    for(int i = (a < b ? a : b); i <= (a > b ? a : b); i++) sum += i;
    return sum;
}

int main(){
    int sum = get_sum(5, -1);
    printf("The sum is: %d\n", sum);
}