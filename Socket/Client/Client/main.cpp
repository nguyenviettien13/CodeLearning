//#define WIN32_LEAN_AND_MEAN
//
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//
//// Need to link with Ws2_32.lib
//#pragma comment(lib, "ws2_32.lib")
//
//char buffer_receive[256];
//char buffer_send[256];
//SOCKET socketSendReceiveMesseger;
//void sendData()
//{
//	//while (true)
//	//{
//	//	cout << "Nhap messenger: " << endl;
//	//	std::cin.getline(buffer_send, sizeof(buffer_send));
//	//	send(socketSendReceiveMesseger, buffer_send, sizeof(buffer_send), NULL);
//	//}
//}
//
//void HandleAdventMesseger()
//{
//	while (true)
//	{
//		recv(socketSendReceiveMesseger, buffer_receive,sizeof(buffer_receive), NULL);
//		std::cout << "Received: " << buffer_receive << std::endl;
//	}
//}
//
//int wmain()
//{
//	//----------------------
//	// Initialize Winsock
//	WSADATA wsaData;
//	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
//	if (iResult != NO_ERROR) {
//		wprintf(L"WSAStartup function failed with error: %d\n", iResult);
//		return 1;
//	}
//
//	//----------------------
//	// Create a SOCKET for connecting to server
//	socketSendReceiveMesseger = socket(AF_INET, SOCK_STREAM, NULL);
//	if (socketSendReceiveMesseger == INVALID_SOCKET) {
//		wprintf(L"socket function failed with error: %ld\n", WSAGetLastError());
//		WSACleanup();
//		return 1;
//	}
//	//----------------------
//	// The sockaddr_in structure specifies the address family,
//	// IP address, and port of the server to be connected to.
//	sockaddr_in clientService;
//	clientService.sin_family = AF_INET;
//	//UINT32  val = 0xC0A80002;//AT DORM
//	UINT32  val = 0x0a0a1fb2;//AT SCHOOL
//	clientService.sin_addr.s_addr = htonl((ULONG)val);
//	clientService.sin_port = htons(27015);
//
//	//----------------------
//	// Connect to server.
//	iResult = connect(socketSendReceiveMesseger, (SOCKADDR *)& clientService, sizeof(clientService));
//	if (iResult == SOCKET_ERROR) {
//		wprintf(L"connect function failed with error: %ld\n", WSAGetLastError());
//		iResult = closesocket(socketSendReceiveMesseger);
//		if (iResult == SOCKET_ERROR)
//			wprintf(L"closesocket function failed with error: %ld\n", WSAGetLastError());
//		WSACleanup();
//		getchar();
//		return 1;
//	}
//
//	wprintf(L"Connected to server.\n");
//	
//	//create thread to send data
//	//CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)sendData, (LPVOID)(0), NULL, NULL);CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)sendData, (LPVOID)(0), NULL, NULL);
//	//create thread to receive data
//	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)HandleAdventMesseger, NULL, NULL, NULL);
//	
//	cout << "Hello" << endl;
//	
//	while (true)
//	{
//		cout << "Nhap messenger: " << endl;
//		std::cin.getline(buffer_send, sizeof(buffer_send));
//		send(socketSendReceiveMesseger, buffer_send, sizeof(buffer_send), NULL);
//	}
//
//
//	iResult = closesocket(socketSendReceiveMesseger);
//	if (iResult == SOCKET_ERROR) {
//		wprintf(L"closesocket function failed with error: %ld\n", WSAGetLastError());
//		WSACleanup();
//		return 1;
//	}
//	
//	WSACleanup();
//	getchar();
//	return 0;
//}



#define WIN32_LEAN_AND_MEAN

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
// Need to link with Ws2_32.lib
#pragma comment(lib, "ws2_32.lib")

SOCKET socketSendReceiveMesseger;

void sendMessegersHandlerThread()
{
	char BufferForSend[256];
	
	while (true)
	{
		//cout << "enter messenger: " << endl;
		cin >> BufferForSend;
		send(socketSendReceiveMesseger, BufferForSend, sizeof(BufferForSend), NULL);
	}
}

void receiverMesengerHandlerThread()
{
	while (true)
	{
		//cout << "Receiver is running......." << endl;
		int receiveMessengerLength=0;
		recv(socketSendReceiveMesseger, (char*)&receiveMessengerLength, sizeof(int), NULL);
		char * buffer4ReceiverMessenger = new char[receiveMessengerLength+1];
		buffer4ReceiverMessenger[receiveMessengerLength] = '\0';
		if (recv(socketSendReceiveMesseger, buffer4ReceiverMessenger, receiveMessengerLength, NULL) > 0)
		{
			cout << "advented messenger: " << buffer4ReceiverMessenger << endl;
		}
		delete[]buffer4ReceiverMessenger;
	}
}


enum Packet
{

};

int wmain()
{

	//----------------------
	// Initialize Winsock
	WSADATA wsaData;
	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != NO_ERROR) {
		wprintf(L"WSAStartup function failed with error: %d\n", iResult);
		return 1;
	}

	//----------------------
	// Create a SOCKET for connecting to server
	
	socketSendReceiveMesseger = socket(AF_INET, SOCK_STREAM, NULL);
	if (socketSendReceiveMesseger == INVALID_SOCKET) {
		wprintf(L"socket function failed with error: %ld\n", WSAGetLastError());
		WSACleanup();
		return 1;
	}
	//----------------------
	// The sockaddr_in structure specifies the address family,
	// IP address, and port of the server to be connected to.
	sockaddr_in clientService;
	clientService.sin_family = AF_INET;
	UINT32  val = 0xC0A80002;//At dormitory
	//UINT32  val = 0x0a0a1fb2;//At school
	//UINT32  val = 0xc0a80068;//At sister's home

	clientService.sin_addr.s_addr = htonl((ULONG)val);
	clientService.sin_port = htons(27015);

	//----------------------
	// Connect to server.
	iResult = connect(socketSendReceiveMesseger, (SOCKADDR *)& clientService, sizeof(clientService));
 	if (iResult == SOCKET_ERROR) {
		wprintf(L"connect function failed with error: %ld\n", WSAGetLastError());
		iResult = closesocket(socketSendReceiveMesseger);
		if (iResult == SOCKET_ERROR)
			wprintf(L"closesocket function failed with error: %ld\n", WSAGetLastError());
		WSACleanup();
		getchar();
		return 1;
	}

	wprintf(L"Connected to server.\n");
	//CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)sendMessegersHandlerThread, (LPVOID)(0), NULL, NULL);
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)receiverMesengerHandlerThread, (LPVOID)(1), NULL, NULL);
	
	string sendmessenger;
	while (true)
	{
		//cout << "enter messenger: " << endl;
		std::getline(cin, sendmessenger);
		int sendmessengerlength = sendmessenger.size();
		send(socketSendReceiveMesseger, (char*)&sendmessengerlength, sizeof(int), NULL);
		send(socketSendReceiveMesseger, sendmessenger.c_str(), sendmessengerlength, NULL);
	}

	iResult = closesocket(socketSendReceiveMesseger);
	if (iResult == SOCKET_ERROR) {
		wprintf(L"closesocket function failed with error: %ld\n", WSAGetLastError());
		WSACleanup();
		return 1;
	}

	WSACleanup();
	getchar();
	return 0;
}