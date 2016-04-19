#include "stdafx.h"
#include "TemData.h"


CTemData::CTemData()
{
}


CTemData::CTemData(int temperature, CString szTime)
{
	m_nTemperature = temperature;
	m_szTime = szTime;
}

CTemData::~CTemData()
{
}
