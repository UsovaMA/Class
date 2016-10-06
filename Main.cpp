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
 
    printf("Меню:\n");
    printf("1) Добавить новый адрес\n");
    printf("2) Показать адрес организации\n");
    printf("3) Изменить адрес \n");
    printf("4) Просмотр всех адресов\n");
    printf("5) Удалить адрес\n");
    printf("0) Отмена\n");
    printf("Выберите пункт меню > ");
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

	printf("Проверка возможностей класса CMail.\n");

    A->SearchMail("Bardonemi");
	A->ChangeMail("Bardonemi");
	A->ShowAll();
    A->DeleteMail("Bardonemi");
    A->ShowAll();
    A->DeleteMail("Ghosthouse");
	A->ShowAll();
	A->DeleteMail("Flavor of Love");
	A->ShowAll();
	printf("Список пуст. Попробуем вызвать функции поиска и изменения.\n");
	A->SearchMail("Bardonemi");
	A->ChangeMail("Bardonemi");
    return 0;
}