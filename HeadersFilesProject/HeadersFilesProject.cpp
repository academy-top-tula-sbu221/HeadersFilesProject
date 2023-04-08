#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "arraylib.h"

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
        std::cout << argv[i] << "\n";

    if (argc <= 1)
        return 0;

    char fileName[50];
    strcpy(fileName, argv[1]);
    
    FILE* file = fopen(fileName, "w+");
    for (int i = 2; i < argc; i++)
    {
        fputs(argv[i], file);
        fputc('\n', file);
    }
        
    fclose(file);


    char ch;
    std::cin >> ch;

    /*int* array;
    int size{ 10 };
    ArrayInit(array, size);
    ArrayPrint(array, size);*/
}
