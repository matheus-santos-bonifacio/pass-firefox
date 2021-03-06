TARGET=pass-firefox
CXX=g++ -std=c++17
CXXFLAGS= -Wall -g -MMD
LD=g++
GTKFLAGS=`pkg-config gtkmm-3.0 --cflags --libs`
OBJS= main.o pass-firefox.o tools-pass-firefox.o
$(TARGET): $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(GTKFLAGS)
	@rm -f *.o *.d

main.o: main.cpp
	$(CXX) -c $(CXXFLAGS) $(GTKFLAGS) main.cpp -o main.o

pass-firefox.o: pass-firefox.cpp
	$(CXX) -c $(CXXFLAGS) $(GTKFLAGS) pass-firefox.cpp -o pass-firefox.o

tools-pass-firefox.o: tools-pass-firefox/tools-pass-firefox.cpp
	$(CXX) -c $(CXXFLAGS) tools-pass-firefox/tools-pass-firefox.cpp -o tools-pass-firefox.o
