#include <iostream>
#include <string.h>

using namespace std;

//  ฅ^•ﻌ•^ฅ

/// Hashing
unsigned long djb2hash(unsigned char *str){
    unsigned long hash = 5381;
    int c;

    while(c = *str++)
        hash = ((hash << 5) + hash) + c;


    return hash; 
}


// Linear Probing
struct LinearProbingHashTable{
    vector<string> table;
    unsigned long size;

    LinearProbingHashTable(unsigned long Size) : table(Size, ""), size(Size) {}

    unsigned long hash(const string& name, int tmp){
        return(djb2hash((unsigned char*)name.c_str()) + tmp) % size;
    }


    void insert(const string& name){
        unsigned long tmp = 0, index = hash(name, tmp);
        
        while(table[index] != "" && tmp < size){
            tmp++;
            index = hash(name, tmp);
        }

        table[index] = name;
    }

    bool search(const string& name){
        unsigned long tmp = 0, index = hash(name, tmp);
        
        while(table[index] != "" && tmp < size){
        // tmp == size tương đương đã tìm hết hash table => k có    
            if(table[index] == name)
                return true;

            tmp++;
            index = hash(name, tmp);
        }

        return false;
    }
};

// LinearProbingHashTable HashTable(HashTableSize);
