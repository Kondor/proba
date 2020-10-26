#include <fstream>
#include <iostream>


#include "utility.h"
#include "TypesOfWolves.h"



TypesOfWolves* read_f(char* filename, size_t& offset)
{



    std::ifstream fin(filename, std::ios::binary | std::ios::app);
    fin.seekg(offset);
    TypesOfWolves t1pe(filename);
    fin.read(reinterpret_cast<char*>(&t1pe), sizeof(TypesOfWolves));
    fin.seekg(offset);

    TypesOfWolves* typesofwolves;

    typesofwolves = new TypesOfWolves;



    typesofwolves->load(fin);
    offset = fin.tellg();
    fin.close();

    return typesofwolves;
}
