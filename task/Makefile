IMAGES=../images/output.png

all : $(IMAGES)

clean:
	rm $(IMAGES)

../images/output.png : gnuplot/plotting.gpi ../output_list_1.dat
	gnuplot gnuplot/plotting.gpi