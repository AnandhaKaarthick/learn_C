#include <stdio.h>
#include <string.h>

int main(){
    
    char noun[50] = "";
    char verb[50] = "";
    char adjectives1[50] = "";
    char adjectives2[50] = "";
    char adjectives3[50] = "";

    printf("Enter an objective(description): ");
    fgets(adjectives1, sizeof(adjectives1), stdin);
    adjectives1[strlen(adjectives1)-1] = "\0";
    
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun),  stdin);
    noun[strlen(noun)-1] = "\0";

    printf("Enter an adjective(description): ");
    fgets(adjectives2, sizeof(adjectives2), stdin);
    adjectives2[strlen(adjectives2)-1] = "\0";

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = "\0";
    
    printf("Enter a adjective (description): ");
    fgets(adjectives3, sizeof(adjectives3), stdin);
    adjectives3[strlen(adjectives3)-1] = "\0";

    printf("%s\n", noun);
    printf("%s\n", verb);
    printf("%s\n", adjectives1);
    printf("%s\n", adjectives2);
    printf("%s\n", adjectives3);
 
    return 0;
}