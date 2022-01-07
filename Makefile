default: build

build:
	clang++ -Wall -o alicenet testApplication.cpp -l curl 

clean:
	rm -rf curl