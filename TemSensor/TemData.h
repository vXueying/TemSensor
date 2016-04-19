#pragma once
class CTemData
{
public:
	CTemData();
	CTemData(int temperature, CString time);
	~CTemData();
private:
	int     m_nTemperature;
	CString m_szTime;
public:
	void setTem(int temperature) { m_nTemperature = temperature; }
	void setTime(CString time) { m_szTime = time; };
	int getTemperature() { return m_nTemperature; }
	CString getTime() { return m_szTime; }
};

