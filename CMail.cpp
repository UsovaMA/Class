#include <iostream>
#include <string.h>
#include <locale.h>
#include "CMail.hpp"
#include <stdio.h>
using namespace std;
char* fromBuf;

CMail *lastAdr  = NULL;
CMail *firstAdr = NULL;

CMail::CMail() {

	comName=new char[30]; 
	country=new char[30];
	city=new char[20];
	street=new char[20];

}

/*CMail::CMail(char* lName, char* lCount, char* lCity, char*lStr, int lPlace, int lPCode) {

	comName=lName; 
	country=lCount;
	city=lCity;
	street=lStr;
	place=lPlace;
	postcode=lPCode;
}

CMail::CMail(int lName, int lCount, int lCity, int lStr) {

	comName=new char[lName + 1]; 
	country=new char[lCount + 1];
	city=new char[lCity + 1];
	street=new char[lStr + 1];
}*/

CMail::~CMail() { 
	delete []comName;
	delete []country;
	delete []city;
	delete []street;
	delete next;
	delete prev;
}

char* CMail::GetName() { 
	return comName; 
}
char* CMail::GetCountry() {
	return country; 
}
char* CMail::GetCity() {
	return city; 
}
char* CMail::GetStreet() { 
	return street; 
} 
int CMail::GetPlace() { 
	return place;
}
int CMail::GetPostcode() {
	return postcode; 
}   

void CMail::SetName(char* fromBuf) { 

	for(int i=0; i<l_name; i++)
		comName[l_name] = '\0';

	strcpy(comName, fromBuf); // ����������� ������ fromBuf � ������ comName 
} 

void CMail::SetCountry(char* fromBuf) { 

	for(int i=0; i < l_count; i++)
		country[l_count] = '\0';

	strcpy(country, fromBuf); // ����������� ������ fromBuf � ������ country
} 

void CMail::SetCity(char* fromBuf) { 

	for(int i=0; i < l_city; i++)
		city[l_city] = '\0';

	strcpy(city, fromBuf); // ����������� ������ fromBuf � ������ city
}

void CMail::SetStreet(char* fromBuf) { 

	for(int i=0; i < l_street; i++)
		street[l_street] = '\0';

	strcpy(street, fromBuf); // ����������� ������ fromBuf � ������ street
}

void CMail::SetPlace(int lPlace) { 

	place = lPlace;
}

void CMail::SetPostcode(int lPCode) { 

	postcode = lPCode; 
}

void CMail::AddMail(char *name) { // ���������� ������ ������

	setlocale(LC_ALL,"Russian");
	CMail *newAdr = new CMail;
	/*char count[l_count + 1], cit[l_city + 1], str[l_street + 1];*/
	//Tests
	char* count="USA", *cit="New York", *str="Green";
	int plac=12, pcode=123456;

	char* count1="France", *cit1="Paris", *str1="Laflur";
	int plac1=72, pcode1=166756;

	char* count2="German", *cit2="Paul", *str2="Braghtinshet";
	int plac2=13, pcode2=111666;

	/*printf("���������� ����� �����������:\n");*/
	printf("�������� 3 ������.\n");
	/*printf("�������� �����������: ");
	scanf("%s", name);*/
	name="Ghosthouse";
	newAdr->SetName(name);
	/*printf("\n");*/

	/*printf("������: "); 
	scanf("%s", count);*/
	newAdr->SetCountry(count);
	/*printf("\n");*/

	/*printf("�����: "); 
	scanf("%s", cit);*/
	newAdr->SetCity(cit);
	/*printf("\n");*/

	/*printf("�����: ");
	scanf("%s", str);*/
	newAdr->SetStreet(str);
	/*printf("\n");*/

	/*printf("���: ");
	scanf("%i", &plac);*/
	newAdr->SetPlace(plac);
	/*printf("\n");*/

	/*printf("�������� ������: ");
	scanf("%i", &pcode);*/


	newAdr->SetPostcode(pcode); 
	/*printf("\n");*/

	newAdr->prev = lastAdr;
	newAdr->next = NULL;
	if (firstAdr == NULL)
		firstAdr = newAdr;
	else
		lastAdr->next = newAdr;
	lastAdr = newAdr; 

	CMail *newAdr1 = new CMail;

	name="Bardonemi";
	newAdr1->SetName(name);
	/*printf("\n");*/

	/*printf("������: "); 
	scanf("%s", count);*/
	newAdr1->SetCountry(count1);
	/*printf("\n");*/

	/*printf("�����: "); 
	scanf("%s", cit);*/
	newAdr1->SetCity(cit1);
	/*printf("\n");*/

	/*printf("�����: ");
	scanf("%s", str);*/
	newAdr1->SetStreet(str1);
	/*printf("\n");*/

	/*printf("���: ");
	scanf("%i", &plac);*/
	newAdr1->SetPlace(plac1);
	/*printf("\n");*/

	/*printf("�������� ������: ");
	scanf("%i", &pcode);*/
	newAdr1->SetPostcode(pcode1); 
	/*printf("\n");*/

	newAdr1->prev = lastAdr;
	newAdr1->next = NULL;
	if (firstAdr == NULL)
		firstAdr = newAdr1;
	else
		lastAdr->next = newAdr1;
	lastAdr = newAdr1; 

	CMail *newAdr2 = new CMail;

	name="Flavor of Love";
	newAdr2->SetName(name);
	/*printf("\n");*/

	/*printf("������: "); 
	scanf("%s", count);*/
	newAdr2->SetCountry(count2);
	/*printf("\n");*/

	/*printf("�����: "); 
	scanf("%s", cit);*/
	newAdr2->SetCity(cit2);
	/*printf("\n");*/

	/*printf("�����: ");
	scanf("%s", str);*/
	newAdr2->SetStreet(str2);
	/*printf("\n");*/

	/*printf("���: ");
	scanf("%i", &plac);*/
	newAdr2->SetPlace(plac2);
	/*printf("\n");*/

	/*printf("�������� ������: ");
	scanf("%i", &pcode);*/
	newAdr2->SetPostcode(pcode2); 
	/*printf("\n");*/

	newAdr2->prev = lastAdr;
	newAdr2->next = NULL;
	if (firstAdr == NULL)
		firstAdr = newAdr2;
	else
		lastAdr->next = newAdr2;
	lastAdr = newAdr2; 
}

void CMail::SearchMail(char* fromBuf) {

	CMail *tempAdr = firstAdr;
	CMail *Adr = NULL;

	/*printf("������� �������� �����������: ");
	scanf("%s", fromBuf);*/
	printf("���� ����� ������.\n");

	if (tempAdr != NULL) {
		do {
			char* tName = tempAdr->GetName();
			if (strcmp(tName,fromBuf) == 0){
				Adr = tempAdr;
				break;
			}
			tempAdr = tempAdr->next;
		} while (tempAdr != NULL);

		if (Adr != NULL)
			ShowMail(Adr, fromBuf);
		else
			printf("����������� �� �������.\n");
	}
	else printf("������ ������� ����.\n");
}

void CMail::ShowMail(CMail* Adr, char* fromBuf) {
	int tPlace = Adr->GetPlace();
	int tPostcode = Adr->GetPostcode();

	printf("����������� <%s> ��������� �� ������: %i %s, �. %s, ��. %s, �.%i. \n", Adr->GetName(), tPostcode, Adr->GetCountry(),  Adr->GetCity(), Adr->GetStreet(), tPlace);
}

void CMail::ChangeMail(char* fromBuf) {
	int pMenu=1;
	char count[7]="German", cit[9]="Towerrod", /*str[l_street + 1]*/str[6]="Hills";
	int plac=11, pcode=456333;
	char *name;

	CMail *tempAdr = firstAdr;
	CMail *Adr = NULL;

	
	/*printf("������� �������� �����������: ");
	scanf("%s", fromBuf);*/
	fromBuf="Bardonemi";
	if (tempAdr != NULL) {
		do {
			char* tName = tempAdr->GetName();
			if (strcmp(tName,fromBuf) == 0){
				Adr = tempAdr;
				break;
			}
			tempAdr = tempAdr->next;
		} while (tempAdr != NULL);

		if (Adr != NULL) {
			printf("���� ��������� ������ �����������.\n");
			printf("� ������ ������ �������� ������ ���� ��������� ������.\n�� ����� ��������: \n1) ������ ����� � ���\n2) �����, ����� � ���\n3) ���� �����\n4) �������� ��������\n��� 1-3 ���������� �������� ����� ������.\n");
			printf("������������ ��������� ������� ���� ��� Bardonemi.\n");
			/*printf("��������� ��������:\n 1) ����� � ��� �� ������;\n 2) �����;\n 3) ����� ���������;\n 4) ���������� �������� �����;\n 0) ��������\n");
			scanf("%i", &pMenu);*/
			pMenu=1;
			switch (pMenu) {
			case 1:
				/*printf("����� �����: ");
				scanf("%s", str);*/
				tempAdr->SetStreet(str);
				/*printf("\n");*/

				/*printf("����� ���: ");
				scanf("%i", &plac);*/
				tempAdr->SetPlace(plac);
				/*printf("\n");*/

				/*printf("�������� ������: ");
				scanf("%i", &pcode);*/
				tempAdr->SetPostcode(pcode); 
				/*printf("\n");*/
				pMenu=0;
				break;
			case 2: 
				printf("����� �����: "); 
				scanf("%s", cit);
				tempAdr->SetCity(cit);
				printf("\n");

				printf("����� �����: ");
				scanf("%s", str);
				tempAdr->SetStreet(str);
				printf("\n");

				printf("����� ���: ");
				scanf("%i", &plac);
				tempAdr->SetPlace(plac);
				printf("\n");

				printf("�������� ������: ");
				scanf("%i", &pcode);
				tempAdr->SetPostcode(pcode); 
				printf("\n");
				break;
			case 3: 
				printf("����� ������: "); 
				scanf("%s", count);
				tempAdr->SetCountry(count);
				printf("\n");

				printf("����� �����: "); 
				scanf("%s", cit);
				tempAdr->SetCity(cit);
				printf("\n");

				printf("����� �����: ");
				scanf("%s", str);
				tempAdr->SetStreet(str);
				printf("\n");

				printf("����� ���: ");
				scanf("%i", &plac);
				tempAdr->SetPlace(plac);
				printf("\n");

				printf("�������� ������: ");
				scanf("%i", &pcode);
				tempAdr->SetPostcode(pcode); 
				printf("\n");
				break; 
			case 4:
				printf("����� �������� �����������: ");
				scanf("%s", name);
				tempAdr->SetName(name);
				printf("\n");
				break; 
			case 0: pMenu = 0;
				break;
			}
		}            
		else
		{
			printf("���� ��������� ������ �����������.\n");
			printf("����������� �� �������.\n");
		};
	}
	else {
		printf("���� ��������� ������ �����������.\n");
		printf("������ ������� ����.\n");
	};
}


void CMail::DeleteMail(char* tempName) {

	CMail *tempAdr = firstAdr;
	CMail *Adr = firstAdr;

	printf("���� �������� ����� �� �����������.\n");
	/*printf("��� �������� ������� �������� �����������: ");
	scanf("%s", tempName);*/


	if (tempAdr != NULL) {
		if (strcmp(firstAdr->GetName(),tempName) == 0){
			firstAdr=firstAdr->next;
		}
		else
			do {
				char* tName = tempAdr->GetName();
				if (strcmp(tName,tempName) == 0){
					Adr->next=tempAdr->next;
					break;
				}
				Adr=tempAdr;
				tempAdr =tempAdr->next;
			} while (tempAdr != NULL);
	}

	else 
	{
		if (tempAdr == NULL) {
			printf("����������� �� �������.\n");
			return ;
		}

		if (tempAdr->next->next == NULL)  
			tempAdr->next = NULL;         

		else
			tempAdr->next = tempAdr->next->next; 
	}
}

void CMail::ShowAll() {

	CMail *tempAdr = firstAdr;
	int k=1;

	printf("������ �������:\n");


	if (firstAdr != NULL)
	{
		tempAdr = firstAdr;
		printf("%i. �����������: %s\n", k, tempAdr->GetName());
		printf("   ������: %i\n", tempAdr->GetPostcode());
		printf("   ������: %s\n", tempAdr->GetCountry());
		printf("   �����: %s\n", tempAdr->GetCity());
		printf("   �����: %s\n", tempAdr->GetStreet());
		printf("   ���: %i\n", tempAdr->GetPlace());

		while (tempAdr->next != NULL) {
			tempAdr = tempAdr->next;
			k++;
			printf("%i. �����������: %s\n", k, tempAdr->GetName());
			printf("   ������: %i\n", tempAdr->GetPostcode());
			printf("   ������: %s\n", tempAdr->GetCountry());
			printf("   �����: %s\n", tempAdr->GetCity());
			printf("   �����: %s\n", tempAdr->GetStreet());
			printf("   ���: %i\n", tempAdr->GetPlace());
		}  
	}
}
