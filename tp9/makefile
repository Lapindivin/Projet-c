CC=gcc
CFLAGS=-std=c11 -Wpedantic -Wall -Wextra
LDLIBS=-lm
RM=rm -f
OBJ=tp8exo1.o matrice.o
EXE=tp8exo1
# Pour produire le fichier exécutable
$(EXE):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXE) $(LDLIBS)
# Pour produire les fichiers objets
tp8exo1.o:tp8exo1.c matrice.h
	$(CC) $(CFLAGS) -c tp8exo1.c

matrice.o:matrice.c matrice.h
	$(CC) $(CFLAGS) -c matrice.c

# Pour effacer les objets et les exécutables
clean:
	$(RM) $(OBJ) $(EXE)