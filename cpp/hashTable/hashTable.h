#include <unordered_map>


class hashTable
{
public:
    std::unordered_map<int, void*> table;
    int CAPACITY;

    hashTable(int c);

    void add(int key, int value);
    void add(std::string key, int value);
    int exists(int key);
    void* get(int key);
    void* remove(int key);

    ~hashTable();
};

