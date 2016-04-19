#pragma once
#include "Storage.h"
class CDatabaseStorage :
	public CStorage
{
public:
	CDatabaseStorage();
	virtual ~CDatabaseStorage();
public:
	virtual int readData() = 0;
};

