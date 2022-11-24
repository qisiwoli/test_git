lib=libcal.a
main:$(lib) main.c ./include/add.h ./include/sub.h
	gcc -o $@ main.c -lcal -Llib -I./include
$(lib):add.o sub.o
	ar rcs ./lib/$@ ./lib/add.o
	ar rcs ./lib/$@ ./lib/sub.o
add.o:./src/add.c ./include/add.h
	gcc -c $< -I ./include -o ./lib/$@
sub.o:./src/sub.c ./include/add.h
	gcc -c $< -I ./include -o ./lib/$@
clean:
	rm ./lib/*.o main
test:
	./main
