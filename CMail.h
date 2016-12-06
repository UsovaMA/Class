#ifndef CMAIL_H_
#define CMAIL_H_

const int l_name = 30;
const int l_count = 30;
const int l_city = 20;
const int l_street = 20;

class CMail {
 private:
  char* comName;  // ��� �����������
  char* country;  // ������
  char* city;     // �����
  char* street;   // �����
  int place;      // ���
  int postcode;   // ������

 public:
  CMail();      // ���������� �� ���������
  ~CMail();     // ����������

  // ������
  char* GetName();
  char* GetCountry();
  char* GetCity();
  char* GetStreet();
  int GetPlace();
  int GetPostcode();

  void SetName(char*);           // ������ ����� �����������
  void SetCountry(char*);        // ������ ������
  void SetCity(char*);           // ������ ������
  void SetStreet(char*);         // ������ �����
  void SetPlace(int lPlace);     // ������ ������ ����
  void SetPostcode(int lPCode);  // ������ ��������� �������

  void AddMail(char*);              // ���������� ������ ������
  void SearchMail(char* fromBuf);   // ����� ������
  void ShowMail(CMail*, char*);     // ����� ������
  void ChangeMail(char* fromBuf);   // ��������� ������
  void ShowAll();                   // �������� ��� ������
  void DeleteMail(char* tempName);  // �������� ������

  CMail *prev;
  CMail *next;
};

#endif  // CMAIL_H_
