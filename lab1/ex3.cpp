#include <stdio.h>
#include <cstring>

char sentence[200], words[20][50];
int i;
void swap(char s1[50], char s2[50])
{
	char aux[50];
	strcpy(aux, s1);
	strcpy(s1, s2);
	strcpy(s2, aux);
}
int Compare(char s1[50], char s2[50])
{
	int n, m;
	m = strlen(s1);
	n = strlen(s2);
	if (m < n) return -1;
	else if (m > n) return 1;
	else if (strcmp(s1, s2) > 0) return 1;
	else if (strcmp(s1, s2) < 0) return -1;
	return 0;

}
void Sort(char c[20][50], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (Compare(c[i], c[j]) < 0) swap(c[i], c[j]);
}
void Print(char c[20][50], int n)
{
	for (int i = 0; i < n; i++)
		printf("%s\n", c[i]);
}
int main()
{
	scanf("%[^\n]%*c", sentence);
	int n = strlen(sentence);
	char* p;
	int placeFound = 0;;
	p = strtok(sentence, " ");
	while (p != NULL)
	{
		strcpy(words[i], p);
		i++;
		p = strtok(NULL, " ");
	}
	Sort(words, i);
	Print(words, i);
	return 0;
}

