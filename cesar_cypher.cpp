#include "cesar_cypher.h"

//
// Created by Adriano on 01/07/2021.
//


vector<char> cesar_encrypt(vector<char> source){
    vector<char>::iterator it = source.begin();
    char alphabet[70] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                         'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
                         'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                         'W', 'X', 'Y', 'Z', '\'', '!', '.', '/', ',', '?', '@', '#', '$', '%', '&', '*',
                        '(', ')', '<', '>', '\\', '|'};

    for(; it < source.end(); it++){
        int j = 0;
        while(*it != alphabet[j]){
            j++;
        }
        if(alphabet[j+1])
            *it = alphabet[j + 1];
        else
            *it = alphabet[0];
    }
    return source;
}

vector<char> cesar_decrypt(vector<char> source){
    vector<char>::iterator it = source.begin();
    char alphabet[70] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                         'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
                         'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                         'W', 'X', 'Y', 'Z', '\'', '!', '.', '/', ',', '?', '@', '#', '$', '%', '&', '*',
                        '(', ')', '<', '>', '\\', '|'};

    for(; it < source.end(); it++){
        int j = 0;
        while(*it != alphabet[j]){
            j++;
        }
        if(alphabet[j]-1)
            *it = alphabet[j - 1];
        else
            *it = alphabet[0];
    }
    return source;
}
