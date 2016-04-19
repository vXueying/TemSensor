#include "stdafx.h"
#include "TemSensorDlg.h"
#include "FileStorage.h"
#include <fstream>

using namespace std;


CFileStorage::CFileStorage()
{
}


CFileStorage::~CFileStorage()
{
}


int CFileStorage::storageData()
{
	ofstream ofDataFile(".\\temData.txt");
	if (!ofDataFile)
	{
		return -1;
	}
	else
	{
		
	}
}
