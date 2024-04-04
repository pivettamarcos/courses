all: gcc mingw

gcc:
	gcc -o $(dir $(FILE))../bin/$(notdir $(FILE)) $(FILE).c -g

mingw:
	x86_64-w64-mingw32-g++ -o $(dir $(FILE))../bin/$(notdir $(FILE)).exe $(FILE).c

clean:
	rm -f $(dir $(FILE))../bin/$(notdir $(FILE) ) $(dir $(FILE) )../bin/$(notdir $(FILE) ).exe
