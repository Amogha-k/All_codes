
#include <stdio.h>
int main(){
int U = 3;
int v;
int *pu; /* pointer to an integer */
int *pv; /* pointer to an integer */
pu = &U; /* assign address of U to pu */
v = *pu; /* assign value of U to v */
pv = &v; /* assign address of v to pv */
printf("\nu=%d &u=%X pu=%X *pu=%d", U, &U, pu, *pu);
printf("\n\nv=%d &v=%X pv=%x *pv=%d", v, &v, pv, *pv);
return 0;
}