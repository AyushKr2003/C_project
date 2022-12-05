/*
This is simple HTML parser for my learning
like:-

Input
<h1>   This is Heading  <\h1>

output
This is Heading

*/
#include <stdio.h>
#include <string.h>
#include <windows.h>

void parser(char *s){
    int in=0;
    int index=0;
    for (int i = 0; i < strlen(s); i++){
        if(s[i] =='<'){
            in = 1;
            continue;
        }
        else if(s[i]=='>'){
            in = 0;
            continue;
        }

        if(in == 0){
            s[index] = s[i];
            index++;

        }
    }
    s[index]='\0';

    //Remove spacing from before string
    while (s[0]==' '){
        
        for (int i = 0; i < strlen(s); i++){
            
            s[i]=s[i+1];
        }
    }
    

    //Remove spacing from after string
    while (s[strlen(s)-1]==' '){
        s[strlen(s)-1] = '\0';
    }
    

}


int main(){

    char s[1000];
    printf("Enter the code\n");
    gets(s);

    system("cls");    //this is clear screen in terminal in windows from <windows.h>


    printf("The given code for paiser is\n\"%s\"\n\n\n",s);
    parser(s);
    printf("The parsed string is\n\"%s\"\n",s);


    return 0;
}
