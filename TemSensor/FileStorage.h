#pragma once
#include "Storage.h"
class CFileStorage :
	public CStorage
{
public:
	CFileStorage();
	virtual ~CFileStorage();
public:
	virtual int readData();
	virtual int writeData();
};