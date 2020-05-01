/* does not need to include .h file here but can refer to 2.11 section to clarify .....
    Reason now its best practise to not to rely on the other files header files to be included.
    That's why we won't rely on the header included in the main(2_11_1.cpp) file and we include it again here.
    Always in each file include the header file that might be needed.
*/

#include "2_11_2.h"
int add(int x, int y)
{
    return x+y;
}
