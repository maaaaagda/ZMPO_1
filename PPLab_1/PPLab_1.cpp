// PPLab_1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
#include "CTable.h"
using namespace std;

CTable *ctab;
int * pc;
string createDef(int nrTablicy)
{
	ctab[nrTablicy] = CTable();
	return "done";
}
string create(int nrTablicy, int rozmiar, string nazwaTablicy)
{
	ctab[nrTablicy] = CTable(nazwaTablicy);
	//(ctab[nrTablicy]).iSetTabSize(rozmiar, );
	return "done";

}
string createCopy(int nrTablicy, int nrTablicyDoKopiowania)
{
	ctab[nrTablicy] = CTable(ctab[nrTablicyDoKopiowania]);
	return "done";
}
string setValue(int nrTablicy, int nrPozycji, int wartoœæ)
{
	ctab[nrTablicy].iAssignNumber(nrPozycji, wartoœæ, pc);
	return "done";
}

int getValue(int nrTablicy, int nrPozycji)
{
	return ctab[nrTablicy].iGetNumber(nrPozycji, pc);
}

string setName(int nrTablicy, string nazwaTablicy)
{
	ctab[nrTablicy].vSetName(nazwaTablicy);
	return "done";
}

string getName(int nrTablicy)
{
	return ctab[nrTablicy].sGetName;
}
void check()
{
	
	for (int i = 0; i < 10; i++)
	{
		//cout << ctab[i].iGetNumber() << endl;
		cout << (ctab[i]).sGetName() << endl;
	}
}



int main()
{
	int iSucc;
	int *piSucc = &iSucc;
	
	ctab = new CTable[10];
	cout << "Breaaaaak1" << endl;
	createDef(3);
	create(4, 10, "Pierwsza");
	create(8, 10, "Druga");

	cout << "Breaaaaak2" << endl;
	check();

	cout << "Breaaaaak3" << endl;

	CTable ctable1;
	CTable ctable2("Wilk");
	CTable ctable3(ctable1);

	cout << ctable1.sGetName() << endl;
	
	
	ctable1.iAssignNumber(9, 100, piSucc);
	cout <<"100? "<< ctable1.iGetNumber(9, piSucc)<<endl;
	ctable1.iAssignNumber(13, 177, piSucc);
	cout<< "177? " << ctable1.iGetNumber(13, piSucc)<<endl;
	cout<<"increased?"<<ctable1.iSetTabSize(17, piSucc)<<endl;
	ctable1.iAssignNumber(13, 177, piSucc);
	cout << "100? " << ctable1.iGetNumber(9, piSucc) << endl;
	cout << "177? " << ctable1.iGetNumber(13, piSucc) << endl;

	getchar();
	return(0);
}

