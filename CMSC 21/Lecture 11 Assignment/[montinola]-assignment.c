#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */

// void function since it returns nothing
// parameter: the corresponding passed array
void scan_word(int occurrences[26]){
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            occurrences[toupper(c) - 'A']++;
        }
    }
}

// int function since it returns integer value
// parameters: both arrays that correspond to both words
int is_anagram(int occurrences1[26], int occurrences2[26]){
    // iterate from index 0 to index n-1 of both arrays
    for (int i = 0; i < 26; i++) {
        // if value at that index of first array is not equivalent to the value at the same index of the second array
        if (occurrences1[i] != occurrences2[i]) {
            // then both words are not anagrams
            return 0;
        }
    }
    // otherwise, they are equivalent to each other
    // both words are anagrams
    return 1;
}

// program starts at main
int main(){

    // intialize both arrays with all 26 elements to be zero
    int occurrences1[26] = {0};
    int occurrences2[26] = {0};

    // prompt the user to enter the first word
    printf("Enter first word: ");
    // call the scan_word function with argument occurences1 array
    scan_word(occurrences1);

    // prompt the user to enter the second word
    printf("Enter second word: ");
    // call the scan_word function with argument occurences2 arrray
    scan_word(occurrences2);

    // intialize isAnagram variable as int, and assign the value returned of the function is_anagram to it
    // is_anagram function is called and assigned to variable isAnagram, with arguments as both of the arrays
    int isAnagram = is_anagram(occurrences1, occurrences2);

    // if isAnagram value is 1, display that both words are anagram
    if (isAnagram){
        printf("The words are anagrams.\n");
    // otherwise, isAnagram value is 0, both words are not anagrams
    } 
    else{
        printf("The words are not anagrams.\n");
    }

    return 0;

}
