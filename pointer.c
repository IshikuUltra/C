// Pionters are also variables and play a VERY important part in C programming. 
// They are used for several reasons such as: Strings, Dynamic memory allocations, Sending functions args by reference!!!, Building complex data strucs, Pointing to functions, Building special data strucs(i.e. Trees, Tries, etc...)
// And many more...

// So what is a pointer?
// Essentially a simple integer variable which holds a memory address that points to a value, instead of holding the actual value itself.

// Computer memory is a sequential store of data, and a pointer points to a specific part of memory.

//Strings as pointers.
//char * name = "John"; -> okay so wtf does this mean?
// 1) It allocates a local (stack) variable called 'name', which is a 'pointer' to a single character.
// 2) It causes the string "John" to appear somewhere in the program memory (after its compiled and executed)
// 3) It inits the 'name' argument to point to where the "j" character resides at (which is followed by the res of the string in the memory. 
//NOTE: if we try to access the 'name' var as an array, it will work, and will return the ordinal value of the character 'j', since the name variable actually points exactly to the beginning of the string

//Dereferencing:
// The act of referring to where the pointer points, instead of the memory address. We are already using-
// 	dereferencing in arrays - we just didnt know it yet.


#include <stdio.h>

int main() {
	
}












