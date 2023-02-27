#include <stdio.h> 
int main() 
{ 
    int i; 
    float x; 
    i = 40; 
    x = 839.21f; 
    /*
    various format specifications are performed in the form of %m.pX 
    
    -> m denotes the minimum space allocated for an output. If the output lenght is lesser than m, white spaces are added to the left 
    to fill the length to m. -m adds the white spaces to the right instead on the left. If the lenght of the output is greater than m however, 
    it just normally prints the output.

    -> p denotes the precision when printing numbers. It precedes the "." character and specifies how many decimal places should be shown 
    in an output.

    -> X denotes the type of data to be displayed. It could be "d" for an integer or "f" for floating numbers. "e" is for exponent format
    and "g" is for exponent and standard format, depending on the lenght of the number.  
    */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); 
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); 
    return 0;
} 
