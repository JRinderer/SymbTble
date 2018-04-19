//
// Created by jrinder on 4/19/18.
//

#ifndef UNTITLED7_TABLES_H
#define UNTITLED7_TABLES_H

#include <lzma.h>

#define SIZE 20

struct varibles{
    char *ident;
    char *type;
    int memLoc;
    int updte;
    int nameCnst;
    int cnstVal;
    int key;

};

struct varibles* varArry[SIZE];
struct varibles* dummyItem;
struct varibles* item;

//returns the key based on the size
int returnHash(int);

struct varibles *searchTable(int, char *);

void insertVaribles(char *, char *, int, int, int, int, int);

void displayTest();
int returnSize();

#endif //UNTITLED7_TABLES_H
