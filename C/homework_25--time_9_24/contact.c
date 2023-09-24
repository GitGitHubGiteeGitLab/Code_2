#include "contact.h"

void InitContact(Contact *pc){
    assert(pc);
    pc->count = 0;
    memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact *pc){
    assert(pc);
    if(pc->count == MAX) {
        printf("通讯录已满！");
        return;
    }
    printf("请输入姓名："); scanf("%s", pc->data[pc->count].name);
    printf("请输入年龄："); scanf("%d", &pc->data[pc->count].age);
    printf("请输入性别："); scanf("%s", pc->data[pc->count].sex);
    printf("请输入联系方式："); scanf("%s", pc->data[pc->count].tele);
    printf("请输入地址："); scanf("%s", pc->data[pc->count].addr);
    pc->count++;//添加成功人数加一
    printf("添加成功!\n");
    return;
}

void ShowContact(Contact *pc){
    assert(pc);
    if(pc->count == 0){
        printf("通讯录为空！\n");
        return;
    }
    
    printf("%-20s%-12s  %-10s    %-12s          %-30s\n", "姓名", "年龄", "性别", "联系方式", "地址");
    for(int i = 0; i < pc->count; i++){
        printf("%-20s%-10d%-10s%-12s%              -30s\n",
                pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
    }
    return;
}

static int FindByName(Contact *pc, char *name){
    assert(pc);
    for(int i = 0; i < pc->count; i++){
        if(strcmp(pc->data[i].name, name) != 0)continue;
        return i;
    }
    return -1;
}

void DelContact(Contact *pc){
    assert(pc);
    if(pc->count == 0){
        printf("通讯录为空!\n");
        return;
    }
    char name[MAX_NAME] = {0};
    printf("请输入联系人姓名："); scanf("%s", name);
    int ret = FindByName(pc, name);
    if(ret == -1){
        printf("没有这个联系人\n");
        return;
    }
    for(int i = ret + 1; i < pc->count; i++){
        pc->data[i - 1] = pc->data[i];
    }
    pc->count--;//删除联系人减一
    printf("删除成功！\n");
}

void SearchContact(Contact *pc){
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("请输入联系人姓名："); scanf("%s", name);
    int ret = FindByName(pc, name);
    if(ret == -1){
        printf("没有这个联系人\n");
        return;
    }
    printf("%-20s%-12s  %-10s    %-12s          %-30s\n", "姓名", "年龄", "性别", "联系方式", "地址");
    printf("%-20s%-10d%-10s%-12s%              -30s\n",
                pc->data[ret].name, pc->data[ret].age, pc->data[ret].sex, pc->data[ret].tele, pc->data[ret].addr);
}

void ModifyContact(Contact *pc){
    assert(pc);
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("请输入要修改联系人姓名："); scanf("%s", name);
    int ret = FindByName(pc, name);
    if(ret == -1){
        printf("没有这个联系人\n");
        return;
    }
    printf("请输入姓名："); scanf("%s", pc->data[ret].name);
    printf("请输入年龄："); scanf("%d", &pc->data[ret].age);
    printf("请输入性别："); scanf("%s", pc->data[ret].sex);
    printf("请输入联系方式："); scanf("%s", pc->data[ret].tele);
    printf("请输入地址："); scanf("%s", pc->data[ret].addr);
    printf("修改成功!\n");
    return;
}

static int cmp(const void* p, const void* q){
    Person *a = (Person *)p;
    Person *b = (Person *)q;
    return strcmp(a->name, b->name);
}

void SortContact(Contact *pc){
    assert(pc);
    if(pc->count == 0){
        printf("通讯录为空");
    }
    if(pc->count > 1){
        qsort(pc->data, pc->count, sizeof(pc->data[0]), cmp);
    }
    printf("排序成功！\n");
}