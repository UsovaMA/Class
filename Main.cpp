#include <locale>
#include <stdio.h>
#include "CMail.h"

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
  char key;
  char* name;
  name = new char[l_name + 1];
  CMail *A = new CMail;

  setlocale(LC_ALL, "Russian");

  char pMenu = ' ';

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
  printf("\n������ ����. ��������� ������� ������� ������ � ���������.\n");
  A->SearchMail("Bardonemi");
  A->ChangeMail("Bardonemi");
  return 0;
}
