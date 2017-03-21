//===========================================
//Dominik Kaczmarek
//DHCP - Dynamic Host Configuration Protocol
//server
//===========================================

#include "stdafx.h"

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <winsock2.h>
#include <stdio.h>
#include <string>
#include "dhcpFrame.pb.h"
#include "server_dhcp.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	dhcpFrame::Mess ureqFrame;
	dhcpFrame::Mess urepFrame;
	Server mainServer;

	cout << "Server initialization." << endl << endl;
	WSADATA wsaData;
	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (result != NO_ERROR) cout << "Startup problem." << endl;

	SOCKET mainSocket = socket(AF_INET, SOCK_DGRAM, 0);
	if (mainSocket == INVALID_SOCKET) {
		cout << "Problem with creating socket: " << endl;
		cout << WSAGetLastError();
		WSACleanup();
		return 1;
	}

	sockaddr_in service;
	memset(&service, 0, sizeof(service));
	int len = sizeof(service);
	service.sin_family = AF_INET;
	service.sin_addr.s_addr = INADDR_ANY;
	service.sin_port = htons(send_port);


	if (bind(mainSocket, (SOCKADDR *)& service, sizeof(service)) == SOCKET_ERROR) {
		cout << "bind() failed." << endl;
		closesocket(mainSocket);
		return 1;
	}

	mainServer.ShowIPs();

	SOCKET acceptSocket = SOCKET_ERROR;
	cout << "-------------------------------------" << endl;
	cout << "Waiting for clients..." << endl;
	cout << "-------------------------------------" << endl;


	int x,y;
	string datagram;
	bool work = true;

	while (work)
	{
		char recvBuffer[1024];
		ZeroMemory(recvBuffer, sizeof(recvBuffer));

		if (recvfrom(mainSocket, recvBuffer, sizeof(recvBuffer), 0, (sockaddr*)&service, &len) != SOCKET_ERROR)
		{
			ureqFrame.ParseFromArray(recvBuffer, sizeof(recvBuffer));
			y = mainServer.CheckMess(ureqFrame);

			if (y == 1) {
				mainServer.MessRecord(ureqFrame);
				urepFrame = mainServer.HandleMess(ureqFrame);
				cout << "-------------------------------------" << endl;
				cout << "Received Frame." << endl;
				cout << ureqFrame.DebugString() << endl;

				if (urepFrame.SerializeToString(&datagram) != true) cout << "Not Working serialize." << endl;
				if (sendto(mainSocket, datagram.c_str(), datagram.length(), 0, (sockaddr*)&service, len)) {
					cout << "Send Frame." << endl;
					cout << urepFrame.DebugString() << endl;
				}
			}
			else if (y == 2) {
				mainServer.MessRecord(ureqFrame);
				mainServer.HandleMess(ureqFrame);
				cout << "-------------------------------------" << endl;
				cout << "Received Frame." << endl;
				cout << ureqFrame.DebugString() << endl;
				cout << "-------------------------------------" << endl;
				mainServer.ShowIPs();

			}
			else if (y == 3) {
				cout << "-- out of ip" << endl;
			}
			else cout << "-- packet error" << endl;


		}

		ureqFrame.Clear();
	}

	return 0;
}
