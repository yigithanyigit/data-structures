#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << argc << "\n";
    for (size_t i = 0; i < argc; i++)
    {
        std::cout << argv[i] << "\n";
    }
    
}

// input
// .\example.exe "DENEME1 DENEME2 DENEME3"

// output
/*
2
name:C:\Users\croiz\Desktop\school\self-learning\data-structure1\example.exe
C:\Users\croiz\Desktop\school\self-learning\data-structure1\example.exe
DENEME1 DENEME2 DENEME3
*/