CXX=g++
CXXFLAGS= -g -O2 -std=c++11

VKAPI=../bin/main

CURL=`pkg-config libcurl --cflags --libs`

LIBS=$(CURL)\
	-lpthread

OBJS=../obj/main.o\
	../obj/networking.o\
	../obj/vkapi.o\
	../obj/parser.o\
	../obj/mainDataClass.o
	# ../obj/https.o\
	# ../obj/vkapi.o


BUILD_DIRECTORIES=../obj\
	../bin
#######################################################################
#######################################################################

all: folders $(VKAPI)
	echo "All Done"

$(VKAPI): $(OBJS)
	$(CXX) $(CXXFLAGS) -w $(OBJS) -o $(VKAPI) $(LIBS)

../obj/main.o: main.cpp
	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@
../obj/networking.o: networking.cpp
	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@
../obj/vkapi.o: vkapi.cpp
	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@
../obj/parser.o: parser.cpp
	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@
../obj/mainDataClass.o: mainDataClass.cpp
	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@
# ../obj/https.o: https.cpp
# 	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@
# ../obj/vkapi.o: vkapi.cpp
# 	$(CXX) $(CXXFLAGS) $(LIBS) -w -c $< -o $@

#######################################################################
folders: $(BUILD_DIRECTORIES)
$(BUILD_DIRECTORIES):
	mkdir -p $(BUILD_DIRECTORIES)

#######################################################################
clean:
	rm -f $(OBJS) $(VKAPI)

