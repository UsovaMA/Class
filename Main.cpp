#include <locale>
#include <stdio.h>
#include "CMail.h"

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
  char key;
  char* name;
  name = new char[l_name + 1];
  CMail *A = new CMail;

  setlocale(LC_ALL, "Russian");

  char pMenu = ' ';

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
  printf("\nСписок пуст. Попробуем вызвать функции поиска и изменения.\n");
  A->SearchMail("Bardonemi");
  A->ChangeMail("Bardonemi");
  return 0;
}
