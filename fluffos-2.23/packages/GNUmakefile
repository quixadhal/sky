
SRC=uids.c math.c develop.c contrib.c sockets.c dwlib.c 
OBJ=uids.$(O) math.$(O) develop.$(O) contrib.$(O) sockets.$(O) dwlib.$(O) 

OBJ=$(addprefix $(OBJDIR)/,$(subst .c,.o,$(SRC)))

$(OBJDIR)/%.o: %.c
	$(CC) -I$(OBJDIR) -I.. $(CFLAGS) -o $@ -c $<

all: $(OBJ)
	ar rcu packages.$(A) $(OBJ)
	$(RANLIB) packages.$(A)

$(OBJDIR)/db.o: db.c
	$(CC) -I$(OBJDIR) -I.. -I/usr/include/mysql $(CFLAGS) -o $@ -c $<

clean:
	rm -f *.$(O)
	rm -f packages.$(A)
