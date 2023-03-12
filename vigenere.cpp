#include <iostream>
#include "caesar.h"
#include <cctype>

//function to find int value of char 
int keyshift(char letter)
{
    letter = toupper(letter);
    int num = int(letter) - 65;
    return num % 26;
}


std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    std::string new_word;

    //put keyword in char array 
    const int KEY_SIZE = keyword.length();
    char key_chars[KEY_SIZE];
    for(int k = 0; k < KEY_SIZE; k++)
    {
        key_chars[k] = keyword[k];
    }

    //put text in character array
    const int tsize = plaintext.length();
    char text[tsize];
    for(int t = 0; t < tsize; t++)
    {
        text[t] = plaintext[t];
    }
 
    //shifting 
    int count = 0;
    do
    {
        int y = 0;
        for(int e = 0; e < tsize; e++)
        {
            /*
            //tracking y
            std::cout << "current y value is " << y << std::endl;
            std::cout << "calpha result is " << isalpha(text[e]) << std::endl;
            std::cout << "keychars[y] result is " <<key_chars[y] << std::endl;
            std::cout << "keyshift(key_chars[y]) is " << keyshift(key_chars[y]) << std::endl;
            std::cout << "text e is currently " << text[e] << std::endl;
            std::cout << std::endl;
            */
            
            if(y < KEY_SIZE && isalpha(text[e]))
            { 
                /*
                std::cout << "Within if statment test" << std::endl;
                std::cout << "text e is currently " << text[e] << std::endl;
                std::cout << "y is now" << y << " and char now is " << key_chars[y] << std::endl;
                std::cout << "shift is " << keyshift(key_chars[y]) << std::endl;
                std::cout << "text e is now " << text[e] << std::endl;
                */
                
                text[e] = shiftChar(text[e], keyshift(key_chars[y]));
        
            }
            if(y >= KEY_SIZE && isalpha(text[e]))
            {
                //reset y to 0 
                y = 0; 
                /*
                std::cout << "Within if statment test" << std::endl;
                std::cout << "text e is currently " << text[e] << std::endl;
                std::cout << "y is now " << y << " and char now is " << key_chars[y] << std::endl;
                std::cout << "shift is " << keyshift(key_chars[y]) << std::endl;

                std::cout <<std::endl;

                std::cout << "shift is " << cshift << std::endl;
                std::cout << "text e is now " << text[e] << std::endl; 
                */
                
                char cshift = shiftChar(text[e], keyshift(key_chars[y]));
                
                text[e] = cshift;
                  
                
            }
            if(y < KEY_SIZE && isalpha(text[e]))
            {
                y++;
            }
        
            count ++;
            
        }
        
    } while (count < tsize);
    
    for(int r = 0; r < tsize; r++)
    {
        new_word = new_word + text[r];
    }
    return new_word;
}


