#include "LibC.h"

#include "LibA/LibA.h"
#include "LibB/LibB.h"

namespace LibC
{
    std::string name()
    {
        return "LibC";
    }

    std::string dependencies()
    {
        std::string s;
        s.append(LibA::name());
        s.append(LibB::name());
        return s;
    }
}