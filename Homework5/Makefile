DIR = ../include
CC = g++
CFLAGS = -I$(IDIR)

ODIR = ../obj
LDIR = ../lib

LIBS = -lm

DEPS = SelSort.hpp
DEPS := $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = tests.o 
OBJ = $(patsubst &,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
		        $(CC) -cpp -o $< $(CFLAGS)
main: $(OBJ)
		        $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean
		clean:
			        rm -f $(ODIR)/*.o*~core $(INCRIR)/*~
