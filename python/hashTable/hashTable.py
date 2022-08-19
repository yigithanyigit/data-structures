
class HashTable:

    def __init__(self):
        self.table = {}
    
    def add(self, key, value):
        self.table[key] = value

    def exists(self, key):
        returnValue = False
        if self.table.get(key) is not None:
            returnValue = True
        return returnValue

    def get(self, key):
        returnValue = None
        if self.table.get(key) is not None:
            returnValue = self.table[key]
        return returnValue

    def remove(self, key):
        return self.table.pop(key)

    def returnTable(self):
        return self.table

    def removeAllitems(self):
        self.table.clear()
        self.returnTable()
