	# $^ => all values right to the colon
OBJ = main.c utils.c # If any of these files change the cmd needs to be executed ->
deepwalk: $(OBJ)
	g++ -o $@ $^ -I .
