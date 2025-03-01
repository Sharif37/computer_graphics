# Default source file if not specified
SRC ?= test.c

# Derive target name from source file (strip .c and use basename)
TARGET = $(basename $(SRC))

# Compiler and flags
CC = gcc
LIBS = /usr/lib64/libXbgi.a -lX11 -lm -no-pie

# Build rule
build: $(TARGET)
	./$(TARGET)
	

# Compile and link
$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(LIBS)

# Clean rule
clean:
	rm -f $(TARGET)

# Phony targets (not actual files)
.PHONY: build clean