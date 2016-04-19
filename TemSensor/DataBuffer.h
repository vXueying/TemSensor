#pragma once
#include <vector>
class CTemData;
class CDataBuffer
{
public:
	CDataBuffer();
	~CDataBuffer();
private:
	std::vector<CTemData *> m_temDataBuf;
public:
	void addDataBuf(CTemData * temData);
	CTemData *getDataBuf();
};