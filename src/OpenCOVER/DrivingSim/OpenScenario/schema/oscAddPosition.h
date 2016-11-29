/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl - 2.1.txt.

* License: LGPL 2 + */


#ifndef OSCADDPOSITION_H
#define OSCADDPOSITION_H

#include "oscExport.h"
#include "oscObjectBase.h"
#include "oscObjectVariable.h"

#include "oscVariables.h"
#include "schema/oscPosition.h"

namespace OpenScenario
{
class OPENSCENARIOEXPORT oscAddPosition : public oscObjectBase
{
public:
    oscAddPosition()
    {
        OSC_OBJECT_ADD_MEMBER_OPTIONAL(Position, "oscPosition");
    };
    oscPositionMember Position;

};

typedef oscObjectVariable<oscAddPosition *> oscAddPositionMember;


}

#endif //OSCADDPOSITION_H
