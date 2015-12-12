
OBJS=Main.o

LDFLAGS=-lglut -lGLU -lGL

all : $(OBJS)
	$(CXX) -o Main $(LDFLAGS) $(OBJS)

clean : 
	$(RM) *.o
	$(RM) Main

