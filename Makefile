run-%:
	clang++ -Wall -std=c++1z ./$*.cpp -o $*
	./$*
