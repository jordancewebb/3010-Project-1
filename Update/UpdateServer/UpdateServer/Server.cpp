#include <WinSock2.h>
#include <Ws2tcpip.h>
#include <iostream>
#include "FileHelper.h"
using namespace std;

#pragma comment(lib, "Ws2_32.lib")

const char FILENAME[] = "data.bin";
const char IPADDR[] = "127.0.0.1";
const int  PORT = 50000;
const int  QUERY = 1;
const int  UPDATE = 2;

int main()
{
	// Add your code here for the server
	int verNum = 0;
	SOCKET listener; 
	listener = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	openInputFile(datafile,FILENAME);
	verNum = readInt(dataFile);
	int code = bind(listener, IPADDR, sizeOf(IPPADDR));
	int connection = listen(listener, 1);
	
	

	return 0;
}
