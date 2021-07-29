//create an endpoint client with boost.asio

#include<boost/asio.hpp>
#include<iostream>

using namespace boost;
using namespace std;


int main(){
    string raw_ip_address = "127.0.0.1";
    unsigned short port_num = 3333;
    system::error_code ec;
    asio::ip::address ip_address =
    asio::ip::address::from_string(raw_ip_address, ec);

    


    if(ec.value() !=0) {
        cout<<"Failed, Error code = "
        << ec.value() << ". Massage: " <<ec.message();
        return ec.value();
    }

    asio::ip::tcp::endpoint ep(ip_address, port_num);

    return 0;

}