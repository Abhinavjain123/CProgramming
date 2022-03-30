/*
arithmatic,relational,logical,bitwise,assignment
miscellaneous - sizeof(), address &, pointer to a variable(value at) *, ?: ternary

no bodmas
postfix () [] -> . ++ --
unary ! ++ -- & sizeof()
multi * / %
add + -
shift << >>
relational < <= > >=
equality == !=
bitwise &
bitwise ^
bitwise |
logical &&
logical ||
conditional ?:
assignment = += -= *= /= %= >>= <<= &= ^= |=
comma ,

operator precidence and associativity
1 --> * / %
2 --> + -
3 --> =
when operators of equal priority is present the tie is taken care by associativity
Left to right associativity a * b / c = (a*b)/c
*/
#include <stdio.h>

int main()
{
     printf("%f \n", 3.0 / 8 - 2); // 3.0/8-2 returns double
     printf("%d\n", 3 / 8 - 2);
     printf("%d\n", 8 / 7 * 4 - 4);
     printf("%d\n", 4 * 5 - 8 / 4);


     int a[4]= {1,11,12,13}, *p;
    p = a;
    printf("%d\n",p);
    int g = *++p;          // p=p+1  g = *(p+1)
    printf("%d",p);
    printf("\n%d",g);

     return 0;
}
/* Relational operators
used to evaluate conditions inside if 
==, >=, <=, <, >, !=
= --> assignment operator
== --> equality check
in c non zero value is considered to be true

Logical operators
&&, ||, !
and,or,not
operator precidence-->
!
* / %
+ -
> < >= <= 
== !=
&&
||
=
*/