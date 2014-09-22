//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifndef CC_FBX_FILTER_HEADER
#define CC_FBX_FILTER_HEADER

#include "FileIOFilter.h"

#ifdef CC_FBX_SUPPORT

//! Autodesk FBX format I/O filter
/** http://www.autodesk.com/products/fbx/overview
**/
class FBXFilter : public FileIOFilter
{
public:

	//inherited from FileIOFilter
	virtual CC_FILE_ERROR loadFile(QString filename, ccHObject& container, LoadParameters& parameters);
	virtual CC_FILE_ERROR saveToFile(ccHObject* entity, QString filename);

	//! Sets default output format (will prevent the dialog to appear when saving FBX files)
	static void SetDefaultOutputFormat(QString format);
};

#endif //CC_FBX_FILTER_HEADER

#endif
