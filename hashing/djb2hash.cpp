#include <iostream>
#include <string.h>

using namespace std;

//  ฅ^•ﻌ•^ฅ

// Covert a "string" to an "int"
unsigned long djb2hash(unsigned char *str){
    unsigned long hash = 5381;
    int c;

    while(c = *str++)
        hash = ((hash << 5) + hash) + c;


    return hash; 
}

// Read more: https://theartincode.stanis.me/008-djb2/
