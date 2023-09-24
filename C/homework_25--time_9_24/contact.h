#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


#define MAX 100  
#define MAX_NAME 20
#define MAX_SEX   5
#define MAX_TELE 12
#define MAX_ADDR 30


typedef struct Person{
    int age;
    char name[MAX_NAME];
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}Person;

typedef struct Contact{
    Person data[MAX];
    int count;
}Contact;

void InitContact(Contact *pc);

void AddContact(Contact *pc);

void ShowContact(Contact *pc);

void DelContact(Contact *pc);

void SearchContact(Contact *pc);

void ModifyContact(Contact *pc);            

void SortContact(Contact *pc);