#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void game(char a, char b){
    if(a==b){
        return -1;
    }
    if(a == 's' && b == 'p'){
        return 0;
    }
    
    else if(a=='p' && b == 's'){
        return 1;
    }
    if(a=='s' && b == 'z'){
        return 1;
    }
    else if(a=='z' && b == 's'){
        return 0;
    }
    if(a=='p' && b == 'z'){
        return 0;
    }
    else if(a=='z' && b =='p'){
        return 1;
    }
}
int main(){
    char b;
    char a;
    printf('Enter s for stone\n');
    printf("\nEnter p for paper");
    printf("\nEnter s for sessior");
    scanf("%c",&a);
    char result = game(a,b);
    
    if(result == -1){
        printf("Game Draw");
    }
    else if(result == 1){
        printf("Game Won!");
    }
    else(result == 0){
        printf("You Lost!");
    }
    printf("\n You Choose : %c and Computer Choose : %c",a,b);
    return 0;
}