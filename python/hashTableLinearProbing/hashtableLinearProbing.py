


class HashTable:

    def __init__(self, capacity) -> None:
        self.capacity = capacity;
        self.table = {};
        self.loadFactor = 0; # (n / m) which is m capacity and n is number of elements.

    def upgradeLoadFactor(self) -> None:
        if self.loadFactor >= (1/2):
            self.capacity *= 3;
            self.loadFactor *= (1/3)

    def increaseLoadFactor(self) -> None:
        self.loadFactor += (1 / self.capacity);
        self.upgradeLoadFactor();

    def decreaseLoadFactor(self) -> None: 
        self.loadFactor -= (1 / self.capacity);

    # Insertion may override, so we need to linear probing like search. 
    def insert(self, key, value, trial_count = 0) -> bool:
        hashed_value = hash(key) % self.capacity;
        if self.searchTable(key) == True:
            self.table[hashed_value + trial_count] = value;
            self.increaseLoadFactor();

            return True
        elif self.table.get(hashed_value + trial_count) == None or self.table.get(hashed_value + trial_count) == "DELETED_FLAG":
            self.table[hashed_value + trial_count] = value;
            self.increaseLoadFactor();

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

    def delete(self, key) -> bool:
        # lazy deletion is a choice, but you  can try to shift deleted cells as like wikipedia says.
        hashed_value = hash(key) % self.capacity;
        if self.table.get(hashed_value) == None or self.table.get(hashed_value) == "DELETED_FLAG":
            return False;
        else:
            self.table[hashed_value] = "DELETED_FLAG";
            self.decreaseLoadFactor();
            return True;



    def get(self, key):
        hashed_value = hash(key) % self.capacity;
        if self.searchTable(key) is True:
            return self.table.get(hashed_value);

    def exists(self, key):
        return self.searchTable(key);

    def getTable(self) -> dict:
        return self.table;

    def getLoadFactor(self) -> int:
        return self.loadFactor;            
