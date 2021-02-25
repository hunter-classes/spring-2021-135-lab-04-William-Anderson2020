main: main.o box.o checkerboard.o cross.o lower_triangle.o upper_triangle.o
	g++ -o main main.o box.o checkerboard.o cross.o lower_triangle.o upper_triangle.o

main.o: main.cpp box.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

lower_triangle.o: lower_triangle.cpp lower_triangle.h
	g++ -c lower_triangle.cpp

upper_triangle.o: upper_triangle.cpp upper_triangle.h
	g++ -c upper_triangle.cpp

clean:
	rm -f main.o box.o checkerboard.o cross.o lower_triangle.o upper_triangle.o