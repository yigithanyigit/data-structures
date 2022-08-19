#include "hashTable.h"

int main()
{
    hashTable* h = new hashTable(3000);
    h->add("Deneme", 35);
    h->add("deneme", 35);
    h->add(35,45);
    return 1;
}