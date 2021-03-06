/* This file is part of COVISE.

   You can use it under the terms of the GNU Lesser General Public License
   version 2.1 or later, see lgpl-2.1.txt.

 * License: LGPL 2+ */

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// CLASS    DataFileGold
//
// Description: Abstraction of a Ensight Gold ASCII Data File
//
// Initial version: 07.04.2003
//
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// (C) 2002/2003 by VirCinity IT Consulting
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//  Changes:
//

#ifndef DATAFILEGOLD_H
#define DATAFILEGOLD_H

#include "EnFile.h"
#include "GeoFileAsc.h"

class DataFileGold : public EnFile
{
public:
    /// default CONSTRUCTOR
    DataFileGold(const coModule *mod, const string &name, const int &dim, const int &numVals);

    void read();

    void readCells();

    /// DESTRUCTOR
    ~DataFileGold();

private:
    int lineCnt_; // actual linecount
    int numVals_; // number of values
    int *indexMap_; // may contain indexMap
    int actPartIndex_;
};

#endif
