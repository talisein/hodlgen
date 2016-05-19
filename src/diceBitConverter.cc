#include "diceBitConverter.h"

diceBitConverter::diceBitConverter()
{
}

diceBitConverter::~diceBitConverter()
{
}

int diceBitConverter::append(int roll)
{
    if (roll < 1 || roll > 6) {
        return -1;
    }
    
    return 0;
}
