//////////////////////////////
//////////Extension in c/////////////////////////////

#include <stdio.h>

// learning c
// extension
int main()
{

    short a = 9;
    int ia = a;
    printf("%d\n", a);  // 9
    printf("%d\n", ia); // 9
    printf("%u\n", a);  // 9
    printf("%u\n", ia); // 9

    //
    unsigned short c = 9;
    int ic = c;
    printf("%d\n", c);  // 9
    printf("%d\n", ic); // 9
    printf("%u\n", c);  // 9
    printf("%u\n", ic); // 9

    //
    signed short d = 9;
    int id = d;
    printf("%d\n", d);  // 9
    printf("%d\n", id); // 9
    printf("%u\n", d);  // 9
    printf("%u\n", id); // 9

    //
    short b = -9;
    int ib = b;
    printf("%d\n", b);  // -9
    printf("%d\n", ib); // -9
    printf("%u\n", b);  // huge number
    printf("%u\n", ib); // huge number

    //
    signed short e = -9;
    int ie = e;
    printf("%d\n", e);  // 9
    printf("%d\n", ie); // -9
    printf("%u\n", e);  // huge nu
    printf("%u\n", ie); // huge nu

    //
    unsigned short x = -9; // 111111111(11bits)10111
    int ix = x;            // 00000000000000(till 16bits)1111111111(11bits)1011
    // here integer promotion makes x===-9 as 00000000000000(till 16bits)1111111111(11bits)10111
    printf("%d\n", x);  // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527
    printf("%d\n", ix); // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527
    printf("%u\n", x);  // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527
    printf("%u\n", ix); // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527

    //
    unsigned short p = -1;
    unsigned int u = p;
    printf("%d\n", p); // -1
    printf("%d\n", u); // -1
    printf("%u\n", p); // huge
    printf("%u\n", u); // huges
}
