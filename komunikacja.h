#ifndef KOMUNIKACJA_H
#define KOMUNIKACJA_H
#include <string>

class Coding{
    public:
        std::string encode();
        std::string decode();
};

class MorseCode: public Coding{
    public:
        std::string encode();
        std::string decode();
};

class VernamCipher: public Coding{
    public:
        std::string encode();
        std::string decode();
};

#endif