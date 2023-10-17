#include <stdio.h>
#define offsetof(type, member) (size_t)(&((type *)0)->member)

typedef struct PeopleInfo{
    char name[7];
    int age;
    char gender;
    float weight;
}PeopleInfo;

int main(){
    printf("%d\n", offsetof(PeopleInfo, weight));
    return 0;
 }
