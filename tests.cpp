#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
// add your tests here

//encryptCaesar(std::string, int ) tests
TEST_CASE("Tests for encryptCaesar(plaintext, rshift)")
{
    CHECK( encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK( encryptCaesar("Hello, World! &&^^", 10) == "Rovvy, Gybvn! &&^^");
    CHECK( encryptCaesar("Today is monday :)", 17) == "Kfurp zj dfeurp :)");
    CHECK( encryptCaesar("booohdhdh***", 20) == "viiibxbxb***");
}

//std::string encryptVigenere(std::string, std::string); tests

TEST_CASE("Tests for encryptVigenere(plaintext, keyword)")
{
    CHECK( encryptVigenere("Hello, World", "cake") == "Jevpq, Wyvnd");
    CHECK( encryptVigenere("Wowza!**", "Day") == "Zouca!**");
    CHECK( encryptVigenere("What is going  on??", "Libbrary") == "Hpbu zs xmtvh  pe??");
    CHECK( encryptVigenere("Switzerland 12 #%", "Teloporation") == "Lathosiltvr 12 #%");
}

TEST_CASE("Tests for decrypt decryptCaesar(ciphertext, rshift)")
{
    CHECK( decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK( decryptCaesar("Rovvy, Gybvn! &&^^", 10) == "Hello, World! &&^^");
    CHECK( decryptCaesar("Kfurp zj dfeurp :)", 17) == "Today is monday :)");
    CHECK( decryptCaesar("viiibxbxb***)", 20) == "booohdhdh***)");
}

TEST_CASE("Tests for decryptVigenere(ciphertext, rshift)")
{
    CHECK( decryptVigenere("Jevpq, Wyvnd", "cake") == "Hello, World");
    CHECK( decryptVigenere("Zouca!**", "Day") == "Wowza!**");
    CHECK( decryptVigenere("Hpbu zs xmtvh  pe??", "Libbrary") == "What is going  on??");
    CHECK( decryptVigenere("Lathosiltvr 12 #%", "Teloporation") == "Switzerland 12 #%");
}