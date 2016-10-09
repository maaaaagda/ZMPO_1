
#include "stdafx.h"
#include "CTable.h"

//using namespace std;

CTable::CTable()
{
	s_name = "Nth interesting here.";
	CTable::tab = new int[i_tabSize];
	cout << "bezp: " << s_name << endl;
	
}
CTable::CTable(string sName)
{
	s_name = sName;
	cout << "parametr: " << s_name << endl;

}
CTable::CTable(CTable &pcOther)
{
	s_name = pcOther.s_name + "_copy";
	
	cout << "kopiuj: " << s_name << endl;

}
CTable::~CTable()
{
	cout << "usuwam: " << s_name << endl;
}
void CTable::vSetName(string sName)
{
	s_name = sName;
}

int CTable::iSetTabSize(int iSize, int *piSucc)
{
	if (iSize <= 0)
		return *piSucc = -1;
	else
	{
		int *temp_tab = new int[iSize];

		for (int i = 0; i < i_tabSize; i++)
		{
			temp_tab[i] = tab[i];
		}

		delete[]tab;


		tab = temp_tab;
		i_tabSize = iSize;
		return *piSucc = 1;
	}
	
	

}
int CTable::iAssignNumber(int iPlace, int iNr, int *piSucc)
{
	if (iPlace >= 0)
	{
		tab[iPlace] = iNr;
		return *piSucc = 1;
	}
	else
		return*piSucc = -1;
}
int CTable::iGetNumber(int iPlace, int *piSucc)
{
	if ((iPlace <= 0) || (iPlace > i_tabSize))
		return *piSucc = -1;
	else
	//	cout << "tab od iplace " << tab[iPlace];
		return tab[iPlace];
}
int CTable::iChangeATabToB(CTable cA, CTable &cB, int *piSucc)
{
	cA.s_name = cB.s_name;
	cA.i_tabSize = cB.i_tabSize;
	int *piTemp_tab = new int[cB.i_tabSize];
	for (int i = 0; i < cB.i_tabSize; i++)
	{
		piTemp_tab[i] = cB.tab[i];
	}
	delete [] cA.tab;
	cA.tab = piTemp_tab;
	return *piSucc = 1;
}

string CTable::sGetName()
{
	return s_name;
}
