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
  const char* get_file_extension(const char* file_name);
  const char* get_mime_type(const char* file_ext);
  bool case_insensitive_compare(const char *s1, const char *s2);
  char* get_file_case_insensitive(const char *file_name);
  char* url_decode(const char *src);
  void build_http_response(const char *file_name, 
                        const char *file_ext, 
                        char *response, 
                        size_t *response_len);
  void* handle_client(void *arg);
  void startServer();
private:
};

#endif
