from asyncio import Task, tasks
from multiprocessing.connection import wait
from time import sleep
from hashTable import HashTable


if __name__ == "__main__":
    table = HashTable()
    table.add(hash("deneme"), 31)
    table.add(hash("adil"), 55)
    table.add(hash(31), 98)
    sleep(2)
    table.add(hash("deneme"), 45)
    print(table.returnTable())
    print(table.exists(key=hash("deneme")))
    print(table.exists(key=hash("Deneme")))
    print(table.get(key=hash("deneme")))
    print(table.get(key=hash("45")))
    print(table.remove(key=hash("deneme")))
    print(table.returnTable())
    print(table.removeAllitems())