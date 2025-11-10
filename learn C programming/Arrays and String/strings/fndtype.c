/*
 * PROGRAM: Character Type Counter
 * DESCRIPTION: Counts vowels, consonants, digits, and spaces in a string
 * USES: Character classification, conditional logic
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if(ch >= '0' && ch <= '9')
            digits++;
        else if(ch == ' ')
            spaces++;
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    
    return 0;
}