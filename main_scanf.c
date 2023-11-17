#include <stdio.h>

int main(){
    FILE *fl;
    char user_input[256];
    fl = fopen("user_input.txt","w");

    int flag;

    printf("Enter word\n");
    scanf("%[^\n]%*c",user_input);

    printf("%s ",user_input);
    fprintf(fl,"%s",user_input);

    fclose(fl);


    return 0;
}