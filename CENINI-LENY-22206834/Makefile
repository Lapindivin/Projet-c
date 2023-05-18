CC=gcc
CFLAGS=-std=c11 -Wpedantic -Wall 
LDLIBS=-lm
RM=rm -f
OBJ=
EXE=
# Pour produire le fichier exécutable
$(EXE):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXE) $(LDLIBS)
# Pour produire les fichiers objets
ici
# test-cci3.o:test-cci3.c cci3.h
# 	$(CC) $(CFLAGS) -c test-cci3.c
# cci3.o:cci3.c cci3.h
# 	$(CC) $(CFLAGS) -c cci3.c
# Pour effacer les objets et les exécutables
clean:
	$(RM) $(OBJ) $(EXE)
