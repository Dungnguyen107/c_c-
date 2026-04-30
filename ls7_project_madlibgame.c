#include <stdio.h>
#include <string.h>

int main() {
// MAD LIB GAME mini project
    char adj1[20] = "";
    char adj2[20] = "";
    char adj3[20] = "";
    char adj4[20] = "";
    char name[50] = "";
    
    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1)-1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2)-1] = '\0';

    printf("Enter a verb (ending with -ing): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj4, sizeof(adj4), stdin);
    adj4[strlen(adj4)-1] = '\0';

    printf("Today I went to %s zoo.\n", adj1);
    printf("In an exhibit, I saw a %s.\n", name);
    printf("%s was %s and %s!\n", name, adj2, adj3);
    printf("I was %s!", adj4);

    return 0;
}