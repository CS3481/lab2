#For this problem, you'll create a makefile like the previous ones, 
#but this one will be different in these ways:
#
#1) The header files are not in the same directory as the sources. 
#   Thus, you won't be able to do this:
#   Dog.o: Dog.h 
#   because make will look for Dog.h in the sources directory.  
#   See the lab assignment page for more details.
#
#   You also will need to tell the g++ compiler where the header files
#   are.  See the lab assignment page for more details.
#
#2) The .o files will need to be placed in the ../objects directory. 
#   This can easily be done using the suffix rule provided below.
#
#3) The targets need to defined using a relative path, for example:
#   ../bin/makeAnimals: etc
#   and
#   ../objects/makeAnimals.o: etc
#   But using macros here instead of ../bin and ../objectsjx
#
#4) The link step will combine object files that are in the ../objects
#   directory. The macro that defines a list of the object files needs
#   to take into account the actual location of the object files. 
#
#5) The executable produced needs go in the bin directory.
#   For this to work, you will need to explicity provide a link step that
#   causes the executable to be stored in the bin directory. 
#
#Note: Be sure to provide all of the same kinds of macros and targets
#      that you did in the previous two problems. You can omit the help 
#      target since that is in the top level makefile
#
#Note: Don't define a macro name PATH. There is already an environment 
#      variable with that name.  (Seriously, this introduces a weird bug.)
#
#Note: Don't use touch with a file that doesn't exist.  For example,
#      don't type touch Dog.h from within the sources directory.
#      (Seriously, you'll cause yourself some pain if you do that.)
#
#USE this SUFFIX RULE. You will need to define the OBJ, CC, and CFLAGS 
#macros above this rule.
$(OBJ)/%.o: %.C
    $(CC) $(CFLAGS) $< -o $@
