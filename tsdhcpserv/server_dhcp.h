//===========================================
//Dominik Kaczmarek
//DHCP - Dynamic Host Configuration Protocol
//server
//===========================================
#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

const int send_port = 68; //port docelowy
//const int rec_port = 67; //port zrodlowy

struct vInfo{
	int ht = 6;
	int hl = 6;
	string sip = ""; //adres serwera
	string mac = ""; //mac serwera
	string cookie = "991308399";
};

struct vIPfo {
	string ipaddr; //adres ip
	bool able = true; //dostêpnoœæ dla true - dostêpny
	int cxid = 0; //numer identyfikacyjny klienta
};

class Server{

	int ip_max; //maksymalna liczba adresów ip
	vInfo info; //ramka informacyjna
	vIPfo pool[10]; //tablica struktur adresowych

public:
	Server();

	//sprawdza poprawnoœæ ramki
	int CheckMess(dhcpFrame::Mess rc);

	//odbieranie sygna³ów i wywo³anie odpowiednich komunikatów
	dhcpFrame::Mess HandleMess(dhcpFrame::Mess rec);

	//wyswietlanie ramki
	void ShowFrame(dhcpFrame::Mess f);

	//wyswietlanie statusu adresow
	void ShowIPs();

	//wyœwietlenie rekordu
	void MessRecord(dhcpFrame::Mess);

protected:
	//reakcja na sygna³ DHCPDISCOVER klienta, wysy³a wolny adres IP, przesy³a parametry, formu³uje pakiet
	dhcpFrame::Mess DHCPOFFER(dhcpFrame::Mess rec, int i);

	//reakcja na sygna³ DHCPREQUEST klienta, potwierdza przydzia³u ¿¹danych parametrów, formu³uje pakiet
	dhcpFrame::Mess DHCPACK(dhcpFrame::Mess rec);

	//odmowa przydzia³u ¿¹danych parametrów, formu³uje pakiet
	dhcpFrame::Mess DHCPNAK(dhcpFrame::Mess rec);

	//dzialanie w przypadku sygna³u DHCPRELEASE, aktualizacja tablicy struktur
	void DHCPRELEASE(dhcpFrame::Mess);

private:
	//szukanie wolnego servera
	int LookFor();

	//sprawdzanie dostepnosci ip
	int LookFor(string ip);

	//szukanie dostepnosci xida
	int LookFor(int i);

};

/* OPTIONS
DHCPDISCOVER = 1;
DHCPREQUEST = 2;
DHCPDECLINE = 3;
DHCPINFORM = 4;
DHCPRELEASE = 5;
DHCPOFFER = 6;
DHCPACK = 7;
DHCPNAK = 8;
*/