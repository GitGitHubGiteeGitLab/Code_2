#include "contact.h"

void menu(){
    printf("---------------------\n");
    printf("--0.Exit   1.Add   --\n");
    printf("--2.Del    3.Search--\n");
    printf("--4.Modify 5.Show  --\n");
    printf("--6.Sort           --\n");
    printf("---------------------\n");
}

int main(){
    Contact con;
    InitContact(&con);
    int input;
    enum Option{
        EXIT, ADD, DEL, SEARCH, MODIFY, SHOW, SORT
    };
    do{
        menu();
        printf("请输入选项：");
        Input:
        scanf("%d", &input);
        switch(input){
            case EXIT:
                        printf("退出！\n");
                        break;
            case ADD:
                        AddContact(&con);
                        break;
            case DEL:
                        DelContact(&con);
                        break;
            case SEARCH:
                        SearchContact(&con);
                        break;
            case MODIFY:
                        ModifyContact(&con);
                        break;
            case SHOW:
                        ShowContact(&con);
                        break;
            case SORT:
                        SortContact(&con);
                        break;
            default:
                        printf("输入错误, 请重新输入：");
                        goto Input;
                        break;    
        }
    }while(input != 0);
}