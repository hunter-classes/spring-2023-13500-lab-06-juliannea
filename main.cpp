#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{

  std::cout << encryptCaesar("Way to Go!", 5) << std::endl;

  std::cout << encryptCaesar("Hello, World! &&^^", 10) << std::endl;

  std::cout << encryptCaesar("Today is monday :)", 17) << std::endl;

  std::cout << encryptCaesar("booohdhdh***", 20) << std::endl;


  std::cout << encryptVigenere("Hello, World", "cake") << std::endl;

  std::cout << encryptVigenere("Wowza!**", "Day") << std::endl;

  std::cout << encryptVigenere("What is going  on??", "Libbrary") << std::endl;

  std::cout << encryptVigenere("Switzerland 12 #%", "Teloporation") << std::endl;


  std::cout <<decryptCaesar("Bfd yt Lt!", 5) <<std::endl;

  std::cout <<decryptCaesar("Rovvy, Gybvn! &&^^", 10) <<std::endl;

  std::cout <<decryptCaesar("Kfurp zj dfeurp :)", 17) <<std::endl;

  std::cout <<decryptCaesar("viiibxbxb***)", 20) <<std::endl;



  std::cout << decryptVigenere("Jevpq, Wyvnd", "cake") << std::endl;

  std::cout << decryptVigenere("Zouca!**", "Day") << std::endl;

  std::cout << decryptVigenere("Hpbu zs xmtvh  pe??", "Libbrary") << std::endl;

   std::cout << decryptVigenere("Lathosiltvr 12 #%", "Teloporation") << std::endl;

  return 0;
}
