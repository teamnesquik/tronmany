SOURCE=main.cpp
MYPROGRAM=etapa1
CC=g++

#------------------------------------------------------------------------------



all: $(MYPROGRAM)



$(MYPROGRAM): $(SOURCE)

	$(CC) $(SOURCE) -o $(MYPROGRAM)

clean:

	rm -f $(MYPROGRAM)
