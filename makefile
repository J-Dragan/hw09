c = g++

obj = hw09.o face.o suit.o both.o menu.o makeDeck.o 

all:hw09

hw09: $(obj)
	$(c) -o hw09 $(obj)

suit.o: suit.cpp hw09.h
	$(c) -c suit.cpp

both.o: both.cpp hw09.h
	$(c) -c both.cpp

menu.o: menu.cpp hw09.h
	$(c) -c menu.cpp

makeDeck.o: makeDeck.cpp hw09.h
	$(c) -c makeDeck.cpp

hw09.o:hw09.cpp hw09.h
	$(c) -c hw09.cpp


