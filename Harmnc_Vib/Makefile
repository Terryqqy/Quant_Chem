EXENAME = harmnc
OBJS = main.o harmnc.o

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O2 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpthread -lm  -larmadillo

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o : main.cpp harmnc.h
	$(CXX) $(CXXFLAGS) main.cpp

harmnc.o : harmnc.cpp harmnc.h
	$(CXX) $(CXXFLAGS) harmnc.cpp

clean :
	-rm -f *.o $(EXENAME)
