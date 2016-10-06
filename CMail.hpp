#ifndef _CMail
#define _CMail

const int l_name = 30;
const int l_count = 30;
const int l_city = 20;
const int l_street = 20;

class CMail {
private:
        char* comName; // имя организации
        char* country; // страна
        char* city;    // город
        char* street;  // улица 
        int place;     // дом
        int postcode;  // индекс

public: 
		CMail();                                           // контруктор по умолчанию
        CMail(char*, char*, char*, char*, int, int);       // конструктор инициализации
		CMail(int lName, int lCount, int lCity, int lStr);
        ~CMail();                                          // деструктор
		
        // методы
		char* GetName();
        char* GetCountry();
        char* GetCity();
        char* GetStreet();
        int GetPlace();
        int GetPostcode();

        
        void SetName(char*);          // запись имени организации
        void SetCountry(char*);       // запись страны
        void SetCity(char*);          // запись города
        void SetStreet(char*);        // запись улицы
        void SetPlace(int lPlace);    // запись номера дома
        void SetPostcode(int lPCode); // запись почтового индекса

public:
        void AddMail(char*);		  // добавление нового адреса
        void SearchMail(char* fromBuf);   // поиск адреса
        void ShowMail(CMail*, char*);     // вывод адреса
        void ChangeMail(char* fromBuf);                // изменение адреса
        void ShowAll();                   // показать все адреса
        void DeleteMail(char* tempName);                // удаление адреса

		CMail *prev; 
        CMail *next;
};

#endif