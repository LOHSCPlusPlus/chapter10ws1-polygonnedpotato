Line: Point.o Line.o Rectangle.o RectangleClient.o
	g++ -Wall -Wextra -Wunused Point.o Line.o Rectangle.o RectangleClient.o -o Rectangle

Point.o: Point.cpp Point.h
	g++ -Wall -Wextra -Wunused -c Point.cpp -o Point.o

Line.o: Line.cpp Line.h Point.h
	g++ -Wall -Wextra -Wunused -c Line.cpp -o Line.o

Rectangle.o: Rectangle.cpp Rectangle.h Line.h
	g++ -Wall -Wextra -Wunused -c Rectangle.cpp -o Rectangle.o

RectangleClient.o: RectangleClient.cpp Point.h Line.h
	g++ -Wall -Wextra -Wunused -c RectangleClient.cpp -o RectangleClient.o
