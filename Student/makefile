#For this problem, you'll modify the makefile to create a better one.
#Follow the steps below.  Your work will go AFTER these comments.
#
#1) Add macros for the compiler and compiler flags. Call them
#   CC and CFLAGS.  Note the flags (options) passed to the g++
#   compiler in the commands below. You need to set CFLAGS to that
#   list (starts with -c and ends with -g).
#
#2) Add a macro for the object files that should be linked together
#   to create the executable. Call it OBJS.
#
#3) Add a macro for the targets. Call it TARGETS. Note the echo below
#   the help target lists all of the targets.
#
#4) Add suffix rule that specifies how to create a .o out of a .C file.
#
#5) Modify makefile to use the macros. (Use the TARGETS macro with the help
#   target. @echo "$(MACRO)" outputs the value of the macro.)
#
#6) Eliminate unnecessary commands and dependencies. (If the make utility can
#   determine a dependence or a command then don't provide it.)
#
#Note: Remember to use tabs properly or the makefile won't work.
#
#Note: The @ before the echo command prevents make from displaying the
#      command. It just displays the output of the echo
#
#Note: After you get it working, you can delete all of the
#      instructions. 
#
#Define macros below this line.


#help needs to be first target so if someone types: make
#help information is displayed.
help:
	@echo "to use makefile, type: make <target>"
	@echo "targets: help run createStudent createStudent.o Student.o clean"
	@echo "examples:"
	@echo "to create executable and run code: make run"
	@echo "to create executable: make createStudent"
	@echo "to compile Student.C: make Student.o"
	@echo "to delete all .o files: make clean"

run:
	make createStudent
	./createStudent

#The g++ command below invokes the linker
createStudent: createStudent.o Student.o
	g++ createStudent.o Student.o -o createStudent

#The g++ command below invokes the compiler (note compiler options)
createStudent.o: createStudent.C Student.h
	g++ -c -std=c++11 -Wall -g createStudent.C

Student.o: Student.C Student.h
	g++ -c -std=c++11 -Wall -g Student.C

clean:
	rm -f *.o createStudent
