

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void menu() {
    printf("********************\n"
        "*******1.play*******\n"
        "*******0.exit*******\n"
        "********************\n");
    return;
}

void game() {
    int val = rand() % 100 + 1;
    while (1) {
        printf("\033[32m������һ��100���ڵ����֣�\033[0m");
        int num = 0;
        scanf("%d", &num);
        if (num > val) {
            printf("\033[31m�´���\n\033[0m");
        }
        else if (num < val) {
            printf("\033[31m��С��\n\033[0m");
        }
        else {
            printf("\033[32m�¶���\n\033[0m");
            break;
        }
    }
    return;
}

int main() {
    srand((unsigned)time(NULL));
    int flag = 0;
    while (1) {
        menu();
        printf("\033[32m������һ�����֣�\033[0m");
        scanf("%d", &flag);
        if (flag == 1) {
            game();
        }
        else if (!flag) {
            printf("\033[31m       exit!!\n\033[0m");
            break;
        }
        else {
            printf("\033[31m�������\n\033[0m");
        }
        sleep(1);
        system("clear");
    }
    return 0;
}

