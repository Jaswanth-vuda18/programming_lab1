all : compile run
compile: testCases.o
	g++ -o output testCases.o
testCases.o:
	g++ -c testCases.cpp
run:
	./output	

graphList : graph1 run1
graph1: test.cpp
	g++ test.cpp
run1 :
	./a.out
	
graphMatrix : graph2 run2
graph2: testMat.cpp
	g++ testMat.cpp
run2 :
	./a.out

clean:
	rm a.out testCases.o output