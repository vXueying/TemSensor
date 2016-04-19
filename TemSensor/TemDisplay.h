#pragma once
class CTemDisplay
{
public:
	CTemDisplay();
	virtual ~CTemDisplay();
public:
	virtual void drawingTem() = 0;        //绘制实时温度数据
	virtual void drawingPredict() = 0;    //绘制预测温度数据
};