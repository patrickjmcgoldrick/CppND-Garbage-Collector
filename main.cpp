#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(19);
    Pointer<int> p2 = new int(50);
    p = new int(21);
    p = new int(28);
    p = p2; 
    return 0;
}
