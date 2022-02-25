#define _CTR_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>




int nr(const char* string)
{
	int result = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		result = result * 10 + string[i] - '0';


	}
	return result;
}

void strip_space(char* string) {
	int space=-1;
	for (int i = 0; string[i] != '\0'; i++)
	{
		char ch = string[i];
		if(ch!='\n'&&ch!=' ')
		{
			space = i;
		}


	}
	string[space+1] = '\0';
}




int main() {
	FILE* input_file = fopen("in.txt", "r");
	if(input_file == nullptr){
	printf("eroare fisier\n");
	return 0;
 }
 int sum = 0;
 while (!feof(input_file))
 {
	 char line[1024];
	 fgets(line, sizeof(line), input_file);
	 strip_space(line);
	 int value = nr(line);
	 printf("value: %d\n", value);
	 sum += value;


 }
 fclose(input_file);
 printf("sum: %d\n", sum);



}


