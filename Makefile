OBJ_FILE = mytime_impl.o
EXEC_FILE = mytime_impl
CFLAGS = -Wall

$(EXEC_FILE): $(OBJ_FILE)
	cc $(CFLAGS) -o $(EXEC_FILE) $(OBJ_FILE)

clean:
	rm $(OBJ_FILE) $(EXEC_FILE)
