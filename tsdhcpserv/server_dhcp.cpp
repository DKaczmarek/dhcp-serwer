#include "stdafx.h"

#include "dhcpFrame.pb.h"
#include "server_dhcp.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


Server::Server(){
	vIPfo temp;

	ip_max = 10;
	pool[0].ipaddr = "192.168.100.1";
	pool[1].ipaddr = "192.168.100.2";
	pool[2].ipaddr = "192.168.100.3";
	pool[3].ipaddr = "192.168.100.4";
	pool[4].ipaddr = "192.168.100.5";
	pool[5].ipaddr = "192.168.100.6";
	pool[6].ipaddr = "192.168.100.7";
	pool[7].ipaddr = "192.168.100.8";
	pool[8].ipaddr = "192.168.100.9";
	pool[9].ipaddr = "192.168.100.10";
	
}

int Server::CheckMess(dhcpFrame::Mess rc)
{
	if (rc.xid() == 0) { cout << "Zly xid" << endl; return -1; }
	else if (rc.opc() == 1 && Server::LookFor() == -1) return 3;
	else if (rc.opc() == 5) return 2;
	else if (rc.opc() > 4 || rc.opc() < 0) { cout << "Zly opc" << endl; return -1; }
	return 1;
}


dhcpFrame::Mess Server::HandleMess(dhcpFrame::Mess rec) {
	
	int x;
	dhcpFrame::Mess t;
	//cout << "Handle frame." << endl;

	switch (rec.opc()) {
	case 1:
		x = Server::LookFor(rec.xid());
		if (x != -1) { t = Server::DHCPOFFER(rec, x); break; }
		x = Server::LookFor();
		if (x != -1) t = Server::DHCPOFFER(rec, x);
		break;
	case 2:
		x = Server::LookFor(rec.yiaddr());
		if (pool[x].able) t = Server::DHCPACK(rec);
		else t = Server::DHCPNAK(rec);
		break;
	case 5:
		Server::DHCPRELEASE(rec);
		break;
	default:
		cout << "Problem with Frame interpretation." << endl;
		break;
	}

	return t;
}

void Server::ShowFrame(dhcpFrame::Mess f){

	cout << "Frame" << endl;
	cout << "-------------------------------------" << endl;
	cout << "- op		- " << f.op() << endl;
	cout << "- htype		- " << f.htype() << endl;
	cout << "- hlen		- " << f.hlen() << endl;
	cout << "- hops		- " << f.hops() << endl;
	cout << "- xid		- " << f.xid() << endl;
	cout << "- secs		- " << f.secs() << endl;
	cout << "- flags		- " << f.flags() << endl;
	cout << "- ciaddr	- " << f.ciaddr() << endl;
	cout << "- yiaddr	- " << f.yiaddr() << endl;
	cout << "- siaddr	- " << f.siaddr() << endl;
	cout << "- giaddr	- " << f.giaddr() << endl;
	cout << "- chaddr	- " << f.chaddr() << endl;
	cout << "- sname		- " << f.sname() << endl;
	cout << "- file		- " << f.file() << endl;
	cout << "- opc		- " << f.opc() << endl;
	cout << "-------------------------------------" << endl;
}

void Server::ShowIPs(){
	
	cout << "Available ip adress:" << endl;
	cout << "lp.	ip		flag	xid" << endl;
	for (int i = 0; i < ip_max;i++) {
		cout << i+1 << "	" << pool[i].ipaddr << "	" << pool[i].able << "	" << pool[i].cxid << endl;
	}
}

void Server::MessRecord(dhcpFrame::Mess r){

	cout << "-- xid: " << r.xid() << "	";
	switch (r.opc()) {
	case 1: cout << "DHCPDISCOVER" << endl;
		break;
	case 2: cout << "DHCPREQUEST" << endl;
		break;
	case 5: cout << "DHCPRELEASE" << endl;
		break;
	}
}

dhcpFrame::Mess Server::DHCPOFFER(dhcpFrame::Mess rec,int i){

	//cout << "Preparing DHCPOFFER." << endl;
	dhcpFrame::Mess t;

	t.set_op(2);
	t.set_htype(info.ht);
	t.set_hlen(info.hl);
	t.set_hops(0);
	t.set_xid(rec.xid());
	t.set_ciaddr("0");
	t.set_yiaddr(pool[i].ipaddr);
	t.set_siaddr(info.sip);
	t.set_flags(rec.flags());
	t.set_giaddr(rec.giaddr());
	t.set_chaddr(rec.chaddr());
	t.set_file(info.cookie);
	t.set_opc(6);

	//cout << "Prepared DHCPOFFER." << endl;

	return t;
}

dhcpFrame::Mess Server::DHCPACK(dhcpFrame::Mess rec){

	for (int i = 0;i < 10;i++) {
		if (rec.yiaddr() == pool[i].ipaddr) {
			pool[i].able = false;
			pool[i].cxid = rec.xid();
		}
	}
	//cout << "Preparing DHCPACK." << endl;
	dhcpFrame::Mess t;

	t.set_op(2);
	t.set_htype(info.ht);
	t.set_hlen(info.hl);
	t.set_hops(0);
	t.set_xid(rec.xid());
	t.set_ciaddr(rec.ciaddr());
	t.set_yiaddr(rec.yiaddr());
	t.set_siaddr(info.sip);
	t.set_flags(rec.flags());
	t.set_giaddr(rec.giaddr());
	t.set_chaddr(rec.chaddr());
	t.set_file(info.cookie);
	t.set_opc(7);

	//cout << "Prepared DHCPACK." << endl;
	cout << "-------------------------------------" << endl;
	Server::ShowIPs();

	return t;
}

dhcpFrame::Mess Server::DHCPNAK(dhcpFrame::Mess rec){

	//cout << "Preparing DHCPNAK." << endl;
	dhcpFrame::Mess t;

	t.set_op(2);
	t.set_htype(info.ht);
	t.set_hlen(info.hl);
	t.set_hops(0);
	t.set_xid(rec.xid());
	t.set_ciaddr(rec.ciaddr());
	t.set_yiaddr("0");
	t.set_siaddr("0");
	t.set_flags(rec.flags());
	t.set_giaddr(rec.giaddr());
	t.set_chaddr(rec.chaddr());
	t.set_sname("0");
	t.set_file("0");
	t.set_opc(8);

	//cout << "Prepared DHCPNAK." << endl;

	return t;
}

void Server::DHCPRELEASE(dhcpFrame::Mess rec){
	int g;
	g = LookFor(rec.ciaddr());
	pool[g].able = true;
}

int Server::LookFor(){

	//cout << "Looking for free ip." << endl;

	int flag = -1;
	for (int i = 0; i < ip_max; i++) {
		if (pool[i].able == true) {
			flag = i;
			break;
		}
	}

	return flag;
}

int Server::LookFor(string ip) {

	//cout << "Checking availibity of ip." << endl;
	int flag = -1;
	for (int i = 0;i < ip_max; i++) {
		if (pool[i].ipaddr == ip) {
			flag = i;
			break;
		}
	}

	return flag;
}

int Server::LookFor(int x) {

	//cout << "Checking availibity of ip." << endl;
	int flag = -1;
	for (int i = 0;i < 10; i++) {
		if (pool[i].cxid == x) {
			if (pool[i].able == true) {
				flag = i;
				break;
			}
		}
	}

	return flag;
}