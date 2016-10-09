#pragma once
#include <iostream>
#include <string>

using namespace std;


class CTable
{
	string s_name;
	int i_tabSize = 10;
	int *tab;



public:
	CTable();
	CTable(string);
	CTable(CTable &pcOther);
	~CTable();
	void vSetName(string sName);
	string sGetName();
	int iSetTabSize(int iSize, int *piSucc);
	int iAssignNumber(int iPlace, int iNr, int *piSucc);
	int iGetNumber(int iPlace, int *piSucc);
	int iChangeATabToB(CTable cA, CTable &cB, int *piSucc);
};
