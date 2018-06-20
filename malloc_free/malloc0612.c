#include <stdio.h>
#include <string.h>

struct student
{
	char name[100];
	int age;
};

int main01(void)
{
	struct student st = {"уея╖ся", 30};
	FILE *p = fopen("E:\\testwork\\a.dat", "wb");
	fwrite(&st, sizeof(st), 1, p);
	fclose(p);
	return 0;
}

int main(void)
{
	struct student st = { 0 };
	FILE *p = fopen("E:\\testwork\\a.dat", "rb");
	fread(&st, sizeof(st), 1, p);
	fclose(p);
	printf("name = %s, age = %d\n", st.name, st.age);
	return 0;
}

