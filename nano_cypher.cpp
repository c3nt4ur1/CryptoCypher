//
// Created by Adriano on 02/07/2021.
//

#include "nano_cypher.h"

vector<char>nano_encrypt(vector<char> source){
    vector<char>::iterator it = source.begin();
    int i = 0;

    for(; it != source.end(); it++, i++);

    char target[i];

    char alphabet[62] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                         'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
                         'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                         'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8' ,'9', '0'};

    int val = 0;

    for(int j = 0; j < i; j++){
        int h = 0;
        while(target[j] != alphabet[h]){
            h++;
        }
        val += h;
    }

    for(it = source.begin(); it < source.end(); it++){
        int j = 0;
        while(*it != alphabet[j]){
            j++;
        }
        *it = alphabet[j + val];
        j = 0;
    }

    source.push_back(val); //Decryption will require the value to reverse lines 30 - 37

    return source;
}

vector<char>nano_decrypt(vector<char> source, int val){
    char alphabet[62] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                         'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
                         'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                         'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8' ,'9', '0'};

    vector<char>::iterator it;
    for(it = source.begin(); it < source.end(); it++){
        int j = 0;
        while(*it != alphabet[j]){
            j++;
        }
        *it = alphabet[j - val];
        j = 0;
    }
    return source;
}
