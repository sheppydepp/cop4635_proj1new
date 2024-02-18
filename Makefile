CXX = g++
CXXFLAGS = -std=c++17 -g -Wall

OBJECTS = Server.o

main: $(OBJECTS) main.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	$(RM) *.o main
