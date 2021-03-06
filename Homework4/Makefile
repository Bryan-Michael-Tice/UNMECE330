DIR = ../include
CC = g++
CFLAGS = -I$(IDIR)

ODIR = ../obj
LDIR = ../lib

LIBS = -lm

DEPS = employee.h employee.cpp employeeCategory.h employeeCategory.cpp
DEPS := $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = test.o employee.o employeeCategory.o 
OBJ = $(patsubst &,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	        $(CC) -cpp -o $< $(CFLAGS)
main: $(OBJ)
	        $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean
	clean:
	        rm -f $(ODIR)/*.o*~core $(INCRIR)/*~
