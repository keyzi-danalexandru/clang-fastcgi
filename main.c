#include "fcgi_stdio.h"
#include <stdlib.h>
#include <string.h>


int main(int argc, const char *argv){
  int count = 0;

  while(FCGI_Accept() >= 0){
    char *server_name = getenv("SERVER_NAME");
    char da[100];

    if(server_name == NULL || strlen(server_name) < 1){
      strcpy(da,"missing SERVER_NAME");
    }else{
      strcpy(da,server_name);
    }

    //actually FCGI_printf
    printf("Content-type: text/html\r\n"
               "\r\n"

               "<title>FastCGI using C!</title>"
               "<h1>FastCGI Hello!</h1>"
               "Request number %d running on host <i>%s</i>\n",
                ++count, da);
  }

  return 0;
}
