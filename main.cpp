//============================================================================
// Name        : main.cpp
// Author      : Tyre Sheffield, Shep Harper
// Version     : 1.0
// 
// Description : Starts the Server with index.html and testPresence.html
//============================================================================


#include "Server.hpp"
int main()
{

	Server serv = Server();
	serv.startServer();

    return 0;
}
