CXX = g++
#CXX = clang++
CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= recTests 

COMMON_OBJECT_FILES = tddFuncs.o linkedListFuncs.o recLinkedListFuncs.o strFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./recTests

recTests: recTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -O $@

clean:
	/bin/rm -f ${BINARIES} *.o


