#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct {
    char staffID[7];
    char staffName[51];
    char staffPass[51];
    char staffPassRecover[15];
    char staffPosition[12];
}Staff;
void main() {
    Staff staff;
}