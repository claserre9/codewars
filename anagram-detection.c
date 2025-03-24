#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

//https://www.codewars.com/kata/529eef7a9194e0cbc1000255
bool is_anagram(const char *s1, const char *s2)
{
    unsigned long len1 = strlen(s1);
    unsigned long len2 = strlen(s2);

    if (len1 != len2) return false;

    int char_count[256] = {0};

    for (unsigned long i = 0; i < len1; ++i) {
        char_count[tolower(s1[i])]++;
        char_count[tolower(s2[i])]--;
    }

    for (int i = 0; i < 256; ++i) {
        if (char_count[i] != 0) {
            return false;
        }
    }

    return true;
}
int main(){
   bool y = is_anagram("BHyBTDqFCHfjptfB", "tPBDqcbTfbFTJHfY");
   if(y){
       printf("An anagram");
   } else{
       printf("Not an anagram");
   }

}