#include<iostream>
#include "morse_code.h"

using namespace std;

string string_to_morse(string source){

    string target;
    for(int i = 0; i < (int)source.length(); i++){

        switch (source[i]){
            case 'a':
                target +=  ".-";
            case 'b':
                target +=  "-...";
            case 'c':
                target +=  "-.-.";
            case 'd':
                target +=  "-..";
            case 'e':
                target +=  ".";
            case 'f':
                target +=  "..-.";
            case 'g':
                target +=  "--.";
            case 'h':
                target +=  "....";
            case 'i':
                target +=  "..";
            case 'j':
                target +=  ".---";
            case 'k':
                target +=  "-.-";
            case 'l':
                target +=  ".-..";
            case 'm':
                target +=  "--";
            case 'n':
                target +=  "-.";
            case 'o':
                target +=  "---";
            case 'p':
                target +=  ".--.";
            case 'q':
                target +=  "--.-";
            case 'r':
                target +=  ".-.";
            case 's':
                target +=  "...";
            case 't':
                target +=  "-";
            case 'u':
                target +=  "..-";
            case 'v':
                target +=  "...-";
            case 'w':
                target +=  ".--";
            case 'x':
                target +=  "-..-";
            case 'y':
                target +=  "-.--";
            case 'z':
                target +=  "--..";
            case '1':
                target +=  ".----";
            case '2':
                target +=  "..---";
            case '3':
                target +=  "...--";
            case '4':
                target +=  "....-";
            case '5':
                target +=  ".....";
            case '6':
                target +=  "-....";
            case '7':
                target +=  "--...";
            case '8':
                target +=  "---..";
            case '9':
                target +=  "----.";
            case '0':
                target +=  "-----";

        }
    }
    return target;
}




