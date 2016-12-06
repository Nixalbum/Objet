# Project name
EXEC=Quasar

# Compiler
IDIR=`lib/bin/sdl2-config --cflags --libs`
#IDIRFLAG=$(foreach idir, $(IDIR), -I$(idir))
CXXFLAGS=-std=c++0x -g -Wall $(IDIR)

# Linker
LFLAGS=$(IDIR)

# Directories
SRCDIR=Quasar/src
OBJDIR=Quasar/obj
BINDIR=Quasar/bin

# Files
SOURCES=$(foreach sdir, $(SRCDIR), $(wildcard $(sdir)/*.cpp))
OBJECTS=$(patsubst %.cpp, $(OBJDIR)/%.o, $(notdir $(SOURCES)))

# For rm
SOURCESTILDE=$(foreach sdir, $(SRCDIR), $(wildcard $(sdir)/*.cpp~))
INCLUDESTILDE=$(foreach idir, $(IDIR), $(wildcard $(idir)/*.hpp~))

vpath %.cpp $(SRCDIR)

# Reminder, 'cause it is easy to forget makefile's fucked-up syntax...
# $@ is what triggered the rule, ie the target before :
# $^ is the whole dependencies list, ie everything after :
# $< is the first item in the dependencies list

# Rules
gcc: clean
gcc: CXX=g++
gcc: LINKER=g++ -o
gcc: CXXFLAGS += -DNDEBUG
gcc: $(BINDIR)/$(EXEC)

gcc-debug: clean
gcc-debug: CXX=g++
gcc-debug: LINKER=g++ -o
gcc-debug: CXXFLAGS += -g
gcc-debug: $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC): $(OBJECTS)
	@$(LINKER) $@ $(LFLAGS) $^

$(OBJDIR)/%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: gcc gcc-debug clean 

clean:
	rm -fr core *~ $(OBJECTS) $(BINDIR)/$(EXEC) $(SOURCESTILDE) $(INCLUDESTILDE)

