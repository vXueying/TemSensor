#pragma once
class CTemDisplay
{
public:
	CTemDisplay();
	virtual ~CTemDisplay();
public:
	virtual void drawingTem() = 0;        //����ʵʱ�¶�����
	virtual void drawingPredict() = 0;    //����Ԥ���¶�����
};