#include "alicenet.hpp"
#include <iostream>
#include <ostream>

using namespace std;
int main() {
     /*
     * Struct Options are as follows:
     * 1. User agent (string)
     * 2. Headers (std::map<std::string, std::string> )
     * 3. Request Type (string: "GET" or "POST")
     * 4. authentication (string)(username:password)
     * 5. post options (string)
     */
	alicenetoptions options {
		"alice/1.0",
		{},
		"GET"
	};


	alicenet request("https://httpbin.org/anything");

	cout << "Response Headers:" << endl;
	for(auto header: request.response.headers) {
		cout << header.first << " is " << header.second << endl;
	}
	cout << endl << endl;
	if (request.response.code == 200) {
		cout << "Response was successful" << endl;
	} else {
    		cout << "Response was not successful" << endl << endl;
	}

	cout << "Reponse Data:" << endl;

	cout << request.response.data;

}
