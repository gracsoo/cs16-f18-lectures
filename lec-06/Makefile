# This is a makefile to automate the compilation process
# This is a comment

#target: dependencies 
test_shapes: shapes.o test_shapes.o
	g++ shapes.o test_shapes.o -o test_shapes

shapes.o: shapes.cpp
	g++ -c shapes.cpp

test_shapes.o: test_shapes.cpp
	g++ -c test_shapes.cpp

clean:
	rm test_shapes *.o
