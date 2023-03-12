#include <iostream>
#include "caesar.h"
#include "vigenere.h"



std::string decryptCaesar(std::string ciphertext, int rshift)
{
    int bshift = 26 - rshift;
    return encryptCaesar(ciphertext, bshift);
}

std::string decryptVigenere(std:: string ciphertext, std::string keyword)
{
     std::string key;

    for (int i = 0; i < keyword.length(); i++) 
    {
        int ogkey = keyshift(keyword[i]); //finds the int value of letter 
        if (ogkey == 0)  
        {
            key += keyword[i]; 
        } 
        else 
        {
            int num = 26 - ogkey;
            key += (char)(97 + num);
        }
    }
    return encryptVigenere(ciphertext, key);
}
