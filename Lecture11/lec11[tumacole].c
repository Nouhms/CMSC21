#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int *occurrences){
    char c;
    //updates the occurrences array while reading each character in the
    //input; it will stop when the character read is a newline ("\n")
    while ((c = getchar()) != '\n'){
        //ignores characters that are not in the alphabet
        if (isalpha(c)){
            int index = toupper(c) - 'A'; //indicates the shift of the address to be dereferenced
            *(occurrences + index) += 1;
        }
    }
}

bool is_anagram(int *occurrences1, int *occurrences2){
    //loops through both arrays at the same time
    //comparing each element; when they won't match, it would mean
    //that there is a difference in the amount a letter would occur,
    //therefore not an anagram (return false)
    for(int i = 0; i < 26; i++){
        if(*(occurrences1+i) != *(occurrences2+i)){
            return false;
        }
    }
    //when the loop will finish, both words have 
    //the same amount of occurrences in their letters
    //therefore they are anagrams (return true)
    return true;
}

int main() {
    //each element in the array represents the number of occurrences
    //of a letter in a word; the indexes are equivalent to the letters in 
    //the alphabet (0 = A, 1 = B, 2 = C, etc.)
    int letters[26] = {0}, occurrences1[26] = {0}, occurrences2[26] = {0};
    printf("Enter first word: ");
    scan_word(occurrences1);
    printf("Enter second word: ");
    scan_word(occurrences2);
    if (is_anagram(occurrences1, occurrences2)){
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}