#include <string.h>
#include <iostream>
#include "hashTable.h"


// https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus

hashTable::hashTable(int c)
{
    this->CAPACITY = c;
}

void hashTable::add(int key, int value)
{
    std::size_t str_hash = std::hash<int>{} (key);
}

void hashTable::add(std::string key, int value)
{
    std::size_t str_hash = std::hash<std::string>{} (key);
}
int hashTable::exists(int key)
{
}
void *hashTable::get(int key)
{
}
void *hashTable::remove(int key)
{

}