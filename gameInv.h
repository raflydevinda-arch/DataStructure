#ifndef GAMEINV_H
#define GAMEINV_H

#include <iostream>
#include <string>
using namespace std;

typedef struct Character* adrCharacter;
typedef struct Item* adrItem;
struct Item {
    string name;
    string type;
    int qty;
    adrItem next;
};

struct Character {
    string name;
    adrItem head;
    adrCharacter next;
};


struct CharacterList {
    adrCharacter first;
    adrCharacter last;
};

adrCharacter createCharacter(string& name);
adrItem createItem(string name, string& type, int qty);

void addCharacter(CharacterList List, string& name);
adrCharacter findCharacter(string& name);
void deleteCharacter(CharacterList List, const string& name);
//delete const
void addItem(const string& charName, const string& itemName, const string& type, int qty);
void deleteItem(const string& charName, const string& itemName);
adrItem findItem(adrCharacter c, const string& itemName);
void SortByQuant();

void showAll();
void showCharacter(const string& name);
void searchItemAll(const string& itemName);

void useItem(const string& charName, const string& itemName);
void moveItem(const string& fromChar, const string& toChar, const string& itemName);
int countItems(Character* c);

void freeItems(Item*& head);
void freeAll();

#endif