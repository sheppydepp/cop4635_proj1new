/*
 * Server.hpp
 *
 *  Created on: Feb 18, 2024
 *      Author: Tyre Sheffield, Shep Harper
 */

#ifndef SERVER_HPP
#define SERVER_HPP

#include <arpa/inet.h>
#include <ctype.h>
#include <dirent.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <pthread.h>
#include <regex.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;
#define PORT 60004
#define BUFFER_SIZE 104857600

class Server {
public:
  static const char* get_file_extension(const char* file_name);
  static const char* get_mime_type(const char* file_ext);
  static bool case_insensitive_compare(const char *s1, const char *s2);
  static char* get_file_case_insensitive(const char *file_name);
  static char* url_decode(const char *src);
  static void build_http_response(const char *file_name, 
                        const char *file_ext, 
                        char *response, 
                        size_t *response_len);
  static void* handle_client(void *arg);
  void startServer();
private:
};

#endif
