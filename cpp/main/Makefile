.PHONY: all clean install

all: example install

OBJS=$($(INPUT_ARTIFACT_DIR)/strong/*/lib/*.a)
DEPS=$(*.h)
%.o: *.cpp $(DEPS)
	$(CC) -c -fPIC -o $@ $< $(CFLAGS)

example: main.o
	gcc -o example main.o $(OBJS)

install: example
	mkdir -p $(OUTPUT_ARTIFACTS_DIR)/bin
	cp example $(OUTPUT_ARTIFACTS_DIR)/bin

clean:
	rm -f example
	rm -f *.o
	rm -f *.a
