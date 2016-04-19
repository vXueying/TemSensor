#pragma once
class CStorage
{
public:
	CStorage();
	virtual ~CStorage();
public:
	virtual int readData()  = 0;
	virtual int writeData() = 0;
};