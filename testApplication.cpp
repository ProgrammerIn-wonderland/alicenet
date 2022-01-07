#include "alicenet.hpp"
#include <iostream>
#include <ostream>

using namespace std;
int main() {
	alicenet request;
	request.url = "https://httpbin.org/anything";
	request.type = "GET"; // Optional
	request.userAgent = "alice/1.0";
	request.makeRequest();
	
	cout << "Response Headers:" << endl;
	for(auto header: request.responseHeaders) {
		cout << header.first << " is " << header.second << endl;
	}
	cout << endl << endl;
	if (request.responseCode == 200) {
		cout << "Response was successful" << endl; 
	} else {
    	cout << "Response was not successful" << endl << endl;
	}

	cout << "Reponse Data:" << endl;

	cout << request.responseData;
	
}
