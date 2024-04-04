LDFLAGS = -Wl,-rpath=.,-export-dynamic

main: main.c module
	$(CC) $(LDFLAGS) -L. -o $@ $<

.PHONY: module
module: libmodule.so
libmodule.so: module.c
	$(CC) -fPIC -shared -o $@ $^

.PHONY: clean
clean:
	rm -f main libmodule.so
