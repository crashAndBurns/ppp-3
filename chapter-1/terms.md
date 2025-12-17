Exercise 5 from chapter 1 in the book Programming Principles and Practices
Using C++ Third Edition by Bjarne Stroustrup suggests to write out the terms
outlined at the end of each chapter. Should write the terms in my own language
and compare to the glossary.

1. // - Whole line comment. Everything after the // is ignored by the compiler.
        Comments are written for a human audience, either yourself or other
        programmers who are reading the code. Typically they exist to clarify
        ambiguity in the code or even to describe what it actually does.

2. Function - A function is a block of code broken out from the main code. 
              Typically a function performs one operation exceptionally well
              and they are modulized for use at various points in a program. 
              Every program begins with the main() {} function wherby the
              source code between the {} gets executed in order.

3. Output - "Code" produced by compiling or linking. Compiled code (executed by
            the computer) is called an object file while output from the linker
            is called an executable. Output is mostly a generic term for the 
            results of the program.

4. Compilter - A compiler is a special program that takes .cpp source code files
               and transforms it into binary object code files that the computer
               can read, understand, and follow.

5. Error - Errors come in a few different types. Syntactical errors like typos
           found during compilation are called compile-time errors. Errors found
           by the linker are called link-time errors. And errors found  when the
           program executes are called run-time errors or logic errors. Link-
           time and compile-time errors get catalogued and reported when the 
           compiler and linker run but run-time errors can be difficult to track
           down and debug.

6. Linker - Oftentimes source code is written by many different people or it
            it is located in different object files. The linker takes different
            object files and links them together forming an executable file
            that will run on a specific computer system.

7. Command Line - The prompt where the user enters commands to execute in the
                  computer's operating system. It is text based and allows a 
                  great deal of freedom for the user. A typical scenario is
                  for the user to enter the command g++ input-file.cpp -o 
                  output-file-name to get a .cpp file to compile.

8. Executable - The file output from the linker. An executable is system
                specific. .exe files designed for windows will not run on 
                a linux system. 

9. Object Code - The code resulting from the compilation process. It is 
                 designed to be used by the computer and not the user. It is
                 void of comments and whitespace.

10. Comment - A special type of code written for a human audience. See //.

11. Import - A  command that instructs the computer to make certain commands or
             "facilities" available in the current program. Ie. to 'import'
             them.

12. Library - A section of prewritten code that the user may include or import
              into their own code so that they can execute commands from the
              library in their own code.

13. Module - Contains facilities that a user can import into their own code
             without having to write them again. A common module is std, which
             imports the functionality of the C++ Standard Library.

14. Bug - An error. Named so because the first error in programming history
          was caused by a literall bug jammed in the computer.

15. main() - The main function of a program is where the essential body begins.
             The commands are executed in order inside main().

16. C++ - An object oriented programming language created by Bjarne Stroustrup.
          It is a high level language using near english language but also 
          allows access to low level functionality.

17. IDE - An IDE is an integrated development environment. Typically they have
          nice programming features like a source code editior, color coding,
          syntax error checking, debuggers, and a command line terminal. They
          are usefulf for organizing one's programs and files.

18. Source Code - High level "code" written by the developer. It uses near-
                  english language to describe what the program is doing. It is
                  intended to be seen by developers and is not useful to the
                  computer at all. Source code gets compiled into object code
                  which is executed by the computer.

19. Statement - A single line of code that actually performs some sort of task.
                This is a very broad definition of what a statement is. In C++
                statements always end with a ";".

20. #include - The include preprocessor directive. It directs the compiler to
               Make the functionality of a specific library available to the 
               current program. #include directives use .h header files.

21. Debugging - The process of detecting, cataloging, and elminating errors
                or "bugs" from a program. 

22. << - The output operator. It directs the program to move items to standard
         out to be displayed on screen.

23. Header File - A file that specifies the facilities to make available to a
                  program from a library.

24. Program - In general a set of instructions executed, in order, by a
              computer. A program could be high level source code or binary
              object code. Algorithms are a large part of programs.

25. Compile-time - Errors in a program discovered and reported to the user
                   during the compilation process. Typically a grammatical
                   or syntax error.

26. cout - The standard output stream. Contains characters to display to the 
           screen.

27. std - Short for standard. Follows an import statement which directs computer
          to make source code from the C++ Standard Library available in the 
          current program.