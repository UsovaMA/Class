#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <locale>
#include "CMail.hpp"
 
using namespace std;

bool enter(char *key)
{
    if (kbhit())
    {
        *key = getch();
        return true;
    }
    return false;
}  

void showMenu() {
 
    printf("����:\n");
    printf("1) �������� ����� �����\n");
    printf("2) �������� ����� �����������\n");
    printf("3) �������� ����� \n");
    printf("4) �������� ���� �������\n");
    printf("5) ������� �����\n");
    printf("0) ������\n");
    printf("�������� ����� ���� > ");
}

int main() {
    
    //char fromBuf[100];
    char key;
    char* name;
    name = new char [l_name + 1]; 
	CMail *A=new CMail;
 
    setlocale(LC_ALL,"Russian");
 
    char pMenu = ' ';
    
    /*while (pMenu != 0)
    {
		showMenu();
        while (!enter(&pMenu)) { 
        }
        switch (pMenu) {
            case '1': A.AddMail(name);
                break;
            case '2': A.SearchMail(fromBuf);
                while (!enter(&key)) { }
                break;
			case '3': 
				A.ChangeMail(fromBuf);
				while (!enter(&key)) { }
                break; 
            case '4': A.ShowAll();
                while (!enter(&key)) { }
                break;
            case '5': A.DeleteMail();
                break; 
            case '0': pMenu = 0;
                break;
        }
    }*/

	A->AddMail(name);
	A->ShowAll();

	printf("�������� ������������ ������ CMail.\n");

    A->SearchMail("Bardonemi");
	A->ChangeMail("Bardonemi");
	A->ShowAll();
    A->DeleteMail("Bardonemi");
    A->ShowAll();
    A->DeleteMail("Ghosthouse");
	A->ShowAll();
	A->DeleteMail("Flavor of Love");
	A->ShowAll();
	printf("������ ����. ��������� ������� ������� ������ � ���������.\n");
	A->SearchMail("Bardonemi");
	A->ChangeMail("Bardonemi");
    return 0;
}