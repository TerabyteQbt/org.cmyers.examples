.PHONY: all clean install

all: libexample.a install

DEPS=$(*.h)
%.o: *.cpp $(DEPS)
	$(CC) -c -fPIC -o $@ $< $(CFLAGS)

libexample.a: foo.o
	ar rcs libexample.a *.o

install: libexample.a
	mkdir -p $(OUTPUT_ARTIFACTS_DIR)/lib
	cp libexample.a $(OUTPUT_ARTIFACTS_DIR)/lib

clean:
	rm -f *.o
	rm -f *.a
