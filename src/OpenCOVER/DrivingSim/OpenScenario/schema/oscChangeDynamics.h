/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl - 2.1.txt.

* License: LGPL 2 + */


#ifndef OSCCHANGEDYNAMICS_H
#define OSCCHANGEDYNAMICS_H

#include "oscExport.h"
#include "oscObjectBase.h"
#include "oscObjectVariable.h"

#include "oscVariables.h"
#include "schema/oscSpeedDynamics.h"
#include "schema/oscExtent.h"

namespace OpenScenario
{
class OPENSCENARIOEXPORT oscChangeDynamics : public oscObjectBase
{
public:
    oscChangeDynamics()
    {
        OSC_ADD_MEMBER(shape);
        OSC_OBJECT_ADD_MEMBER_OPTIONAL(Extent, "oscExtent");
    };
    oscEnum shape;
    oscExtentMember Extent;

};

typedef oscObjectVariable<oscChangeDynamics *> oscChangeDynamicsMember;


}

#endif //OSCCHANGEDYNAMICS_H
