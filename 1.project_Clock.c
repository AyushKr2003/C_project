// Digital Clock
// First you need to set time then it will run automatically.
#include <stdio.h>
#include <windows.h>
#include <unistd.h>


int main(void){
    int h,m,s;
    printf("Set time (hh mm ss):\n");
    scanf("%d%d%d",&h,&m,&s);

    if(h>12 || m>60 || s>60){
        printf("Error!");
        exit(0);
    }

    while(1){
        s++;
        if(s>59){
            m++;
            s=0;
        }

        if(m>59){
            h++;
            m=0;
        }

        if(h>12){
            h=1;
        }

        printf("\nClock :");
        printf("%02d:%02d:%02d",h,m,s);
        sleep(1);     //sleep for 1 sec
        system("cls");   //clear screen in terminal
    }
    return 0;
}
