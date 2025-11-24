#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, special_character = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);

    for(int i = 0; i<len; i++){
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o' || str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowels++;
        }
        else if((str[i]>='A'&&str[i]<='Z') || (str[i]>='a'&&str[i]<='z')){
            consonants ++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits ++;
        }
        else{
            special_character++;
        }
    }

    printf("The results are:\n");
    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    printf("digits: %d\n", digits);
    printf("special characters: %d\n", special_character);

    return 0;
}