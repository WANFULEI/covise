/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl - 2.1.txt.

* License: LGPL 2 + */


#ifndef OSCSEQUENCE_H
#define OSCSEQUENCE_H

#include "oscExport.h"
#include "oscObjectBase.h"
#include "oscObjectVariable.h"

#include "oscVariables.h"
#include "schema/oscActors.h"
#include "schema/oscCatalogReference.h"
#include "schema/oscManeuver.h"

namespace OpenScenario
{
class OPENSCENARIOEXPORT oscSequence : public oscObjectBase
{
public:
    oscSequence()
    {
        OSC_ADD_MEMBER(numberOfExecutions);
        OSC_ADD_MEMBER(name);
        OSC_OBJECT_ADD_MEMBER_OPTIONAL(Actors, "oscActors");
        OSC_OBJECT_ADD_MEMBER_OPTIONAL(CatalogReference, "oscCatalogReference");
        OSC_OBJECT_ADD_MEMBER_OPTIONAL(Maneuver, "oscManeuver");
    };
    oscUInt numberOfExecutions;
    oscString name;
    oscActorsMember Actors;
    oscCatalogReferenceMember CatalogReference;
    oscManeuverMember Maneuver;

};

typedef oscObjectVariable<oscSequence *> oscSequenceMember;


}

#endif //OSCSEQUENCE_H
