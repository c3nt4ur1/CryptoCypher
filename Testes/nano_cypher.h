//
// Created by Adriano on 02/07/2021.
//

#ifndef CRYPTOCYPHER_NANO_CYPHER_H
#define CRYPTOCYPHER_NANO_CYPHER_H

#include <vector>
using namespace std;

vector<char>nano_encrypt(vector<char> source);

vector<char>nano_decrypt(vector<char> source, int val);

#endif //CRYPTOCYPHER_NANO_CYPHER_H
