#include "LibB.h"

namespace LibB
{
    char* Name()
    {
        return "Lib B";
    }

    char* Chained()
    {
        char result[30];
        strcpy(result,  Name());
        strcat(result, " and ");
        strcat(result, MyLibAOne::Name());
        return result;
    }
}