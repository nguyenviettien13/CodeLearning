//#include <winsock2.h>
//#include <stdio.h>
//#include <windows.h>
//#include <iostream>
//
//// Need to link with Ws2_32.lib
//#pragma comment(lib, "Ws2_32.lib")
//
//SOCKET Connections[100];
//int connectionCounter = 0;
//
//void HandlerReceiveMesseger(int id)
//{
//	char buffer[256];
//	while (true)
//	{
//		recv(Connections[id], buffer, sizeof(buffer), NULL);
//		for (int i = 0; i < connectionCounter; i++)
//		{
//			if (i == id)
//			{
//				send(Connections[i], buffer, sizeof(buffer), NULL);
//				continue;
//			}
//			else
//			{
//				send(Connections[i], buffer, sizeof(buffer), NULL);
//			}
//		}
//	}
//}
//int wmain(void)
//{
//
//	//----------------------
//	// Initialize Winsock.
//	WSADATA wsaData;
//	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
//	if (iResult != NO_ERROR) {
//		wprintf(L"WSAStartup failed with error: %ld\n", iResult);
//		return 1;
//	}
//	
//	//----------------------
//	// Create a SOCKET for listening for
//	// incoming connection requests.
//	SOCKET ListenSocket;
//	ListenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//	if (ListenSocket == INVALID_SOCKET) {
//		wprintf(L"socket failed with error: %ld\n", WSAGetLastError());
//		WSACleanup();
//		return 1;
//	}
//	//----------------------
//	// The sockaddr_in structure specifies the address family,
//	// IP address, and port for the socket that is being bound.
//	sockaddr_in service;
//	service.sin_family = AF_INET;
//	service.sin_addr.s_addr = htonl(INADDR_ANY);
//	service.sin_port = htons(27015);
//
//	if (bind(ListenSocket,
//		(SOCKADDR *)& service, sizeof(service)) == SOCKET_ERROR) 
//	{ 
//		wprintf(L"bind failed with error: %ld\n", WSAGetLastError());
//		closesocket(ListenSocket);
//		WSACleanup();
//		return 1;
//	}
//	//----------------------
//	// Listen for incoming connection requests.
//	// on the created socket
//	if (listen(ListenSocket, 1) == SOCKET_ERROR) {
//		wprintf(L"listen failed with error: %ld\n", WSAGetLastError());
//		closesocket(ListenSocket);
//		WSACleanup();
//		return 1;
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		//----------------------
//		// Create a SOCKET for accepting incoming requests.
//		wprintf(L"Waiting for client to connect...\n");
//
//		//----------------------
//		// Accept the connection.
//		Connections[i] = accept(ListenSocket, NULL, NULL);
//		connectionCounter++;
//		if (Connections[i] == INVALID_SOCKET) {
//			wprintf(L"accept failed with error: %ld\n", WSAGetLastError());
//			closesocket(ListenSocket);
//			WSACleanup();
//			return 1;
//		}
//		else
//		{
//			wprintf(L"Client connected.\n");
//			//xử lý tin nhắn đến
//			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)HandlerReceiveMesseger,(LPVOID)(i), NULL, NULL);
//
//		}
//	}
//	
//
//	// No longer need server socket
//	closesocket(ListenSocket);
//
//	WSACleanup();
//	getchar();
//	return 0;
//}






#include <winsock2.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>


using namespace std;
// Need to link with Ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")

SOCKET Connection[100];
int ConnectionCount = 0;

void HandleAthread(int index)
{
	while (true)
	{
		int receiveMessengerlength;
		int n = recv(Connection[index], (char*)&receiveMessengerlength, sizeof(int), NULL);
		char* buffer_receive = new char[receiveMessengerlength + 1];
		buffer_receive[receiveMessengerlength] = '\0';
		n = recv(Connection[index],buffer_receive, receiveMessengerlength, NULL);
		if (n > 0)
		{
			std::cout << "advented message: " << buffer_receive << std::endl;
			std::cout << "send ms to all client" << std::endl;
			for (int i = 0; i < ConnectionCount; i++)
			{
				if (i != index)
				{
					send(Connection[i],(char*)&receiveMessengerlength, sizeof(int), NULL);
					send(Connection[i], buffer_receive, receiveMessengerlength, NULL);
				}
			}
		}
		delete[] buffer_receive;
	}
}
 
int wmain(void)
{
	//----------------------
	// Initialize Winsock.
	WSADATA wsaData;
	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != NO_ERROR) {
		wprintf(L"WSAStartup failed with error: %ld\n", iResult);
		return 1;
	}

	//----------------------
	// Create a SOCKET for listening for
	// incoming connection requests.
	SOCKET ListenSocket;
	ListenSocket = socket(AF_INET, SOCK_STREAM, NULL);
	if (ListenSocket == INVALID_SOCKET) {
		wprintf(L"socket failed with error: %ld\n", WSAGetLastError());
		WSACleanup();
		return 1;
	}
	
	//----------------------
	// The sockaddr_in structure specifies the address family,
	// IP address, and port for the socket that is being bound.

	sockaddr_in service;
	service.sin_family = AF_INET;
	service.sin_addr.s_addr = htonl(INADDR_ANY);
	service.sin_port = htons(27015);

	if (bind(ListenSocket,
		(SOCKADDR *)& service, sizeof(service)) == SOCKET_ERROR)
	{
		wprintf(L"bind failed with error: %ld\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}
	//----------------------
	// Listen for incoming connection requests.
	// on the created socket
	if (listen(ListenSocket, 1) == SOCKET_ERROR) {
		wprintf(L"listen failed with error: %ld\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	//----------------------
	// Create a SOCKET for accepting incoming requests.
	wprintf(L"Waiting for client to connect...\n");

	//----------------------
	// Accept the connection.
	while (true)
	{
		Connection[ConnectionCount] = accept(ListenSocket, NULL, NULL);
		if (Connection[ConnectionCount] == INVALID_SOCKET) {
			wprintf(L"accept failed with error: %ld\n", WSAGetLastError());
			closesocket(ListenSocket);
			WSACleanup();
			return 1;
		}
		else
		{
			wprintf(L"Client connected.\n");
			//tạo một thread để lắng nghe các tin nhắn client gửi đến
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)HandleAthread, (LPVOID)(ConnectionCount), NULL, NULL);
			ConnectionCount++;
		}
	}
	
	// No longer need server socket
	closesocket(ListenSocket);

	WSACleanup();
	getchar();
	return 0;
}