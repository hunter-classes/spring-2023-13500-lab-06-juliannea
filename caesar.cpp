#include <iostream>


char shiftChar(char c, int rshift)
{
    //first find the ascii value of the char 
    int c_value = (int)c;

    //add the integer + rshift also consider the 26 values capital and lowercase
    if(c_value >= 65 && c_value <= 90)
    {
        c_value = c_value-65;
        c_value = (c_value + rshift) % 26;
        c_value = c_value + 65;
    }

    if(c_value >= 97 && c_value <= 122)
    {
        c_value = c_value -97;
        c_value = (c_value + rshift) % 26;
        c_value = c_value +97;
    }

    char new_letter = (char)c_value;

    return new_letter;
 
}

std::string encryptCaesar(std::string plaintext, int rshift)
{
    //put plaintext in char array 
    int w_length = plaintext.length(); 
    const int ROWS = w_length;
    char w_array[ROWS];
    for(int i = 0; i < w_length; i++)
    {
        w_array[i] = plaintext[i];
    }

    //shift only the plainttext alphabetical letters by rshift 
    for(int j = 0; j < ROWS; j++)
    {
        //if the char values are alphabetical values 
        if((int)w_array[j] >= 65 || (int)w_array[j] <= 90 || (int)w_array[j]>= 97 || (int)w_array[j] <= 122)
        {
            //execute the shift
            w_array[j] = shiftChar(w_array[j], rshift);
        }
    }

    //print out the new encrypted text based on the new values 
    std::string encrypt = "";
    for(int h = 0; h < ROWS; h++)
    {
        encrypt = encrypt + w_array[h];
    }
    return encrypt;
}

