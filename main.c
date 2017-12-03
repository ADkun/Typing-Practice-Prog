#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<time.h>
main()
{
    int i=1,j,wz,k,flag,score=0;
    char a,kb;
    printf("请键入任意键开始打字游戏！\n");
    system("pause");
    system("cls");
    srand(time(0));
    wz=rand()%50;
    a=rand()%26+97;
    for(i=0;i<=20;i++){
            system("cls");
        if(i>=20){
            score--;
            system("cls");
            printf("分数-1!!");
            i=0;
            a=rand()%26+97;
            wz=rand()%50;
            Sleep(2000);
            continue;
        }
        if(score<=-3){
            system("cls");
            printf("YOU DIE");
            Sleep(5000);
            break;
        }else if(score>=10)
        {
            system("cls");
            printf("YOU WIN");
            Sleep(5000);
            break;
        }
        printf("score=%d\n-----------------------------------------------------\n",score);
        for(j=1;j<i;j++){
            printf("\n");
        }
        for(j=1;j<wz;j++){
            printf(" ");
        }
        putchar(a);
        if(kbhit()){
            kb=getch();
            if(kb==a){
                score++;
                i=0;
                a=rand()%26+97;
                wz=rand()%50;
                continue;
            }else if(kb!=a)
            {
                score--;
                system("cls");
                printf("按键错误！分数-1！");
                i=0;
                a=rand()%26+97;
                wz=rand()%50;
                Sleep(1000);
                continue;
            }
        }
        Sleep(300);
    }
}
