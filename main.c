#include <stdio.h>

int main(void)
{
    int  i = 10;
    char c = 'a';

    int  *iptr  = &i; 
    char *cptr  = &c;
    int  *iptr2 = iptr;

    printf("i : iptr=%p, &i=%p (size:%zu)\n",  (void*)iptr,  (void*)&i, sizeof(iptr));
    printf("c : cptr=%p, &c=%p (size:%zu)\n",  (void*)cptr,  (void*)&c, sizeof(cptr));
    printf("iptr2 : %p, *iptr2=%d\n",          (void*)iptr2, *iptr2);
    return 0;
}
