#ifndef __INCLUDED_RELATIONSHIPSTATEMENTS_H__
#define __INCLUDED_RELATIONSHIPSTATEMENTS_H__

#pragma once

class CDaoDatabase;

#include <vector>

class CRelationships
{
	public: 
		static void Relationhips(CDaoDatabase &db, std::vector<CString> &RelationFields, const short nRelationCount);
};
#endif