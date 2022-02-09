#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct {
	char memberID[6];
	char memberName[51];
	char memberGender;
	char memberIC[15];
	char memberContactNum[12];
}Member;
void main() {
	Member member;
	strcpy(member.memberID, "M1001");
	strcpy(member.memberName, "PUA");
	member.memberGender = 'C';
	strcpy(member.memberIC, "030714-14-1567");
	strcpy(member.memberContactNum, "0133630908");
	printf("MEMBER ID: %s\n", member.memberID);
	printf("MEMBER NAME: %s\n", member.memberName);
	printf("MEMBER GENDER: %c\n", member.memberGender);
	printf("MEMBER IC: %s\n", member.memberIC);
	printf("MEMBER CONTACT NUMBER: %s\n", member.memberContactNum);
}
