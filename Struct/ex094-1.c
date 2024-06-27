#include<stdio.h>
#include<string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile prof[5] = { {"A",2000,2,11,"A"},{"B",1999,12,31,"O"},
		{"C",1999,2,25,"AB"},{"D",2000,3,1,"A"},{"E",1999,5,10,"B"} };
	struct profile* p;
	int i;
	p = &prof[0];
	for (i = 0; i < 5; i++) {
		if (prof[i].date.tuki == 2) {
			printf("%s[[%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", (p + i)->name
				, (p + i)->date.nen,(p + i)->date.tuki, (p + i)->date.hi
				, (p + i)->blood);
		}
	}
}