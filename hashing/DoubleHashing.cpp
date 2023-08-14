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


// Double Hashing
struct DoubleHashingTable{
    vector<string> table;
    unsigned long size;

    
    DoubleHashingTable(unsigned long Size) : table(Size, ""), size(Size) {}

    // Hàm băm thứ 2 (chia cho số nguyên tố nhỏ hơn "size" là 26423)
    unsigned long secondHash(const string& name){
        return (djb2hash((unsigned char*)name.c_str()) % 26423);
    }

    // Hàm băm thứ 1
    unsigned long hash(const string& name, int tmp){
        return(djb2hash((unsigned char*)name.c_str()) + tmp * secondHash(name)) % size;
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
        
        while(table[index] != ""){
        // tmp == size tương đương đã tìm hết hash table => k có    
            if(table[index] == name)
                return true;

            tmp++;
            index = hash(name, tmp);
        }

        return false;
    }
};

//  DoubleHashingTable HashTable(HashTableSize);
