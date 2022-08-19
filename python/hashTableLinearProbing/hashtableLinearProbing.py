

from inspect import _void
from operator import truediv

class HashTable:

    def __init__(self, capacity) -> _void:
        self.capacity = capacity;
        self.table = {};
        self.loadFactor = 0; # (n / m) which is m capacity and n is number of elements.


    # Insertion may override, so we need to linear probing like search. 
    def insert(self, key, value, trial_count = 0) -> bool:
        hashed_value = hash(key) % self.capacity;
        if self.searchTable(key) == True:
            self.table[hashed_value + trial_count] = value;
            self.loadFactor += (1 / self.capacity);

            return True
        elif self.table.get(hashed_value + trial_count) == None or self.table.get(hashed_value + trial_count) == "DELETED_FLAG":
            self.table[hashed_value + trial_count] = value;
            self.loadFactor += (1 / self.capacity);

            return True
        else:
            self.insert(key, value,  trial_count + 1);

    def searchTable(self, key, trial_count = 0) -> bool:
        hashed_value = hash(key) % self.capacity;
        returnValue = False;
        if self.table.get(hashed_value + trial_count) == None:
            pass
        elif self.table.get(hashed_value + trial_count) == "DELETED_FLAG":
            self.searchTable(key, trial_count + 1);
        else: 
            returnValue = True;
        
        return returnValue;

    def deletion(self, key):
        pass
        # lazy deletion is a choice, but you try to shift deleted cells as like wikipedia says.
    
    def getTable(self) -> dict:
        return self.table;

    def getLoadFactor(self) -> int:
        return self.loadFactor;            
