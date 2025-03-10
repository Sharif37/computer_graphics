# Default source file if not specified
SRC ?= circle_beshardho.cpp


TARGET = $(basename $(SRC))


build: $(TARGET)
    ./$(TARGET)


$(TARGET): $(SRC)
    g++ -o $(TARGET) $(SRC) /usr/lib64/libXbgi.a -lX11 -lm -no-pie


clean:
    rm -f $(TARGET) *.o *.out *.exe *.a *.so *.dll *.out


.PHONY: build clean