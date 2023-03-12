#include <iostream>



void acii(std::string word)
{
    int word_length = word.length();
    const int ROWS = word_length;

    //put word in char array 
    char word_array[ROWS];

    for(int i = 0; i < word_length; i++)
    {
        word_array[i] = word[i];
    }

    //print out the number with the char 

    for(int j = 0; j < ROWS; j++)
    {
        std::cout << word_array[j] << " " << (int)word_array[j] << std::endl;
    }

}

int main()
{
    acii("Cat :3 Dog");

      std::cout << "\n------------------\n"; // seperator 

    acii("Julianne Aguilar");

      std::cout << "\n------------------\n"; // seperator 

    acii("Dogs and Cats **");

      std::cout << "\n------------------\n"; // seperator 
    
    acii("Wonderland !#%3");

    return 0;
}