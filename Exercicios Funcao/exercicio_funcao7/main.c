#include <stdio.h>
#include <stdlib.h>
struct Vetor{
float x;
float y;
float z;
};

void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);

int main()
{
    struct Vetor p1 = {2.4,5.8,6.8};
    struct Vetor p2 = {5.3,4.1,9.0};
    struct Vetor r;

    soma(&p1, &p2, &r);

    printf("X: %f -- Y: %f -- Z: %f", r.x, r.y, r.z);
    return 0;
}

void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res){
    res -> x = v1->x + v2->x;
    (*res).y = (*v1).y + (*v2).y;
    res -> z = v1->z + v2->z;
}
