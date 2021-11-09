obj = main.o hello.o factorial.o

ins = /home/02/mereckih/bin/

.PHONY: hello clean cloon install uninstall district wc help test
.DEFAULT:
	@echo 'Error'
	@make help

hello: $(obj)
	g++ -o hello $(obj)
 
main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

factorial.o: factorial.cpp
	g++ -c factorial.cpp

test: hello
	@./hello

install:
	install ./hello $(ins)

uninstall:
	rm -rf $(ins)hello

dist:
	tar -cvf hello.tar main.cpp hello.cpp functions.h factorial.cpp config Makefile

doxygen:
	doxygen config        

help:
	@chmod ugo+x inf
	@./inf

cleanAll:
	rm hello *.o

clean:
	rm *.o

cal:
	@echo "Календарь: "
	@cal -m