.PHONY: build-and-run
build-and-run:
	clang++ -Wall -std=c++1z ./hello.cpp &&  ./a.out
