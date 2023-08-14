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


// Chaining approach | linked list
struct Node{
    string data;
    Node* next;
};

struct ChainingApproachHash{
    vector<Node*> table;
    unsigned long size;

    // Các chức năng của Chaining Hash 
    ChainingApproachHash (unsigned long Size) : table(Size, nullptr), size(Size) {} // Khởi tạo

    unsigned long hash(const string& name){ 
        return djb2hash((unsigned char*)name.c_str()) % size;    // trả về vị trí
    }
    // Hàm thêm vào Hash table
    void insert(const string& name){
        unsigned long index = hash(name);   // vị trí lưu trong hash table
        Node* newNode = new Node{name, nullptr}; // Khởi tạo Node lưu name

        // Nếu vị trí index trong hash chưa có ai thì thêm vào
        if(!table[index]){
            table[index] = newNode;
        }
        // Nếu có rồi thì thêm vào đuôi của Node tại vị trí đó
        else{
            Node* cur = table[index];
            while(cur->next){
                cur = cur->next;
            }
            cur->next = newNode;
        }
    }

    // Hàm tìm kiếm 
    bool search(const string& name){
        unsigned long index = hash(name);
        Node* cur = table[index];

        while(cur){
            if(cur->data == name)
                return true;

            cur = cur->next;
        }

        return false;
    }
};

int main(){
  // unsigned long HashTableSize = n * 100 / 70;

  // ChainingApproachHash HashTable(HashTableSize);

  return 0;
}
