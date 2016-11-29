/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl - 2.1.txt.

* License: LGPL 2 + */


#ifndef OSCDIRECTORY_H
#define OSCDIRECTORY_H

#include "oscExport.h"
#include "oscObjectBase.h"
#include "oscObjectVariable.h"

#include "oscVariables.h"

namespace OpenScenario
{
class OPENSCENARIOEXPORT oscDirectory : public oscObjectBase
{
public:
    oscDirectory()
    {
        OSC_ADD_MEMBER(path);
    };
    oscString path;

};

typedef oscObjectVariable<oscDirectory *> oscDirectoryMember;


}

#endif //OSCDIRECTORY_H
