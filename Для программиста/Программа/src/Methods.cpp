#include <fstream>
#include <iostream>
#include "ForClassName.h"
#include "Methods.h"
#include "Wolves.h"
#include "Dingo.h"
#include "Service.h"
#include "Hunting.h"

TypesOfWolves* Bynaries_Read(const char* filename, size_t& offset)
{

    TYPES types;

    std::ifstream fin(filename, std::ios::binary | std::ios::app);
    fin.seekg(offset);
    fin.read(reinterpret_cast<char*>(&types), sizeof(types));
    fin.seekg(offset);

    TypesOfWolves* user;

    switch (types) {
        case WILD:
            user = new Wild;
            break;
        case DINGO:
            user = new Dingo;
            break;
        case SERVICE:
            user = new Service;
            break;
        case HUNTING:
            user = new Hunting;
            break;
        default:
            return NULL;
    }

    user->load(fin);
    offset = fin.tellg();
    fin.close();

    return user;


}
