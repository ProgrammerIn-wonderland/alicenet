# Alicenet

This is a small single header internal C++ HTTP/s client library I made for my own projects, it is a wrapper around libcurl

Q&A
is it well written?
No

Should I use it?
Maybe

Why should I use it?
Its simple to use


To get started with alicenet, simply copy the "alicenet.hpp" header to your program and include it like this
`#include "alicenet.hpp"`

to make a request, make an alicenet object `alicenet request;`
set your URL as so `request.url = "https://httpbin.org/anything"`
then set your request type (GET or POST) `request.type = "GET"`


if you wish you can additionally pass
*  postOptions (as std::string)
*  headers (as std::map)
*  userAgent (as std::string)
*  authentication (as std::string) (the format is "username:password")

once you declare all your options, go and make that request `request.makeRequest()`

all your outputs will start with `response`, so if you want the body of your response, and you want to print it,
`std::cout << response.responseData` 

if you want to know if your response was sucessful
```cpp
if (response.responseCode = 200) {
    // celebrate
} else {
    // cry
}
```

if you want to get all the headers, they'll be provided in a nice std::map object, so just 

```cpp
	for(auto header: request.responseHeaders) {
		cout << header.first << ": " << header.second << endl;
	}
```

and if you need to know how much time the request took, that'll be provided in a variable called "timeElapsed"

