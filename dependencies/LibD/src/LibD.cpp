#include "LibD.h"

#include "LibA/LibA.h"
#include "LibB/LibB.h"

namespace LibD
{
    std::string name()
    {
        return "LibD";
    }

    std::string dependencies()
    {
        std::string s;
        s.append(LibA::name());
        s.append(LibB::name());
        return s;
    }
}