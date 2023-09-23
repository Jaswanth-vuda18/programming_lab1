# all : compile run
# compile: testCases.o
# 	g++ -o output testCases.o
# testCases.o:
# 	g++ -c testCases.cpp
# run:
# 	./output	

# List:
# 	g++ -D LIST -o output testCases.cpp
# 	./output

# Array:
# 	g++ -o output testCases.cpp
# 	./output

# BFS:
# 	g++ -D BFS -o output Bfs_or_Dfs.cpp
# 	./output
# DFS:
# 	g++ -o output Bfs_or_Dfs.cpp
# 	./output


# graphList : graph1 run1
# graph1: test.cpp
# 	g++ test.cpp
# run1 :
# 	./a.out
	
# graphMatrix : graph2 run2
# graph2: testMat.cpp
# 	g++ testMat.cpp
# run2 :
# 	./a.out

# plot:
# 	gnuplot "output_list_1.dat" using 1:2

# clean:
# 	rm testCases.o output *.txt *.out *.exe


all :
	make all -C task

clean:
	make clean -C task