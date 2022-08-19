from hashtableLinearProbing import HashTable



if __name__ == "__main__":
    table = HashTable(300);
    table.insert("Deneme", 35);
    table.insert("Deneme", 65);
    table.insert("deneme", 45);
    table.delete("Deneme");
    table.insert("Deneme", 65);
    print(table.getTable(), table.getLoadFactor(), table.searchTable("Deneme"));