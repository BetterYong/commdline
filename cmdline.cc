#include <signal.h>
#include <string.h>
#include "cmdline.h"
/*
    ./t_proxy_server　-h 10.0.0.1 -p 3333
*/

using namespace std;

int main(int argc, char *argv[]){
       
    cmdline::parser a;
    a.add<string>("host", 'h', "host name", false, "0.0.0.0");
    a.add<uint16_t>("port", 'p', "port number", false, 3333, cmdline::range(1, 65535));
    a.parse_check(argc, argv); 
    std::string host=a.get<string>("host");
    uint16_t port=a.get<uint16_t>("port");
    std::cout<<host<<" "<<port<<std::endl;
    return 0;
}
