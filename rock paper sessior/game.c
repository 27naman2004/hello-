#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char a, char b) {
    if (a == b) {
        return -1;
    }
    if ((a == 's' && b == 'p') || (a == 'p' && b == 'z') || (a == 'z' && b == 's')) {
        return 0;
    }
    else if ((a == 'p' && b == 's') || (a == 'z' && b == 'p') || (a == 's' && b == 'z')) {
        return 1;
    }
    return -1;


}

int main() {
    char a, b;
    char options[] = {'s', 'p', 'z'};
    
    printf("Enter 's' for stone\n");
    printf("Enter 'p' for paper\n");
    printf("Enter 'z' for scissor\n");
    scanf(" %c", &a);

    srand(time(NULL));
    b = options[rand() % 3]; 
    int result = game(a, b);

    if (result == -1) {
        printf("Game Draw\n");
    }
    else if (result == 1) {
        printf("Game Won!\n");
    }
    else if (result == 0) {
        printf("You Lost!\n");
    }
    
    printf("You Choose: %c and Computer Choose: %c\n", a, b);
    return 0;
}

