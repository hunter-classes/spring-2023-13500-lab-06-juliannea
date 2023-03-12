main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main -std=c++11 main.o caesar.o vigenere.o decrypt.o
	
test-ascii: test-ascii.o 
	g++ -o test-ascii -std=c++11 test-ascii.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests -std=c++11 tests.o caesar.o vigenere.o decrypt.o

#vignere 
vigenere.o: vigenere.cpp vigenere.h caesar.h
	g++ -c -std=c++11 vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h vigenere.h caesar.h
	g++ -c -std=c++11 decrypt.cpp 

caesar.o: caesar.cpp caesar.h
	g++ -c -std=c++11 caesar.cpp

main.o: main.cpp caesar.h vigenere.h
	g++ -c -std=c++11 main.cpp

test-ascii.o: test-ascii.cpp
	g++ -c -std=c++11 test-ascii.cpp

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o caesar.o test-ascii.o vigenere.o decrypt.o main test-ascii