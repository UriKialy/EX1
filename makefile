CC=gcc
AR=ar

OBJECTS_MAIN=main.o

FLAGS=-Wall -g
DYN_LIB_FLAGS=-shared -fPIC -o 

all: loopd loops recursives recursived maindrec mains mainldoop

maindrec: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
    
mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
    
mainldoop: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
    
loopd: libclassloops.so
libclassloops.so: libclassloops.a $ basicClassification.o advancedClassificationLoop.o
	$(CC) $(DYN_LIB_FLAGS) libclassloops.so libclassloops.a $ basicClassification.o advancedClassificationLoop.o
    
recursived: libclassrec.so
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) $(DYN_LIB_FLAGS)	libclassrec.so basicClassification.o advancedClassificationRecursion.o

recursives:libclassrec.a
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

loops: libclassloops.a
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a $ basicClassification.o advancedClassificationLoop.o
        
main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c 
    
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 
    
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 
    
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec