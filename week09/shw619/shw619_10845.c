#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int q[10000];
int start = 0, end = 0, count = 0;


void push(int x) {
	q[end++] = x;
	++count;
}
void pop() {
	if (count != 0) {
		printf("%d\n", q[start++]);
		--count;
	}
	else
		printf("-1\n");
}
void size() {
	printf("%d\n", count);
}
void empty() {
	if (count == 0)
		printf("1\n");
	else
		printf("0\n");
}
void front() {
	if (count != 0)
		printf("%d\n", q[start]);
	else
		printf("-1\n");
}
void back() {
	if (count != 0)
		printf("%d\n", q[end - 1]);
	else
		printf("-1\n");
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		char c[6];
		int x;
		scanf("%s", &c);

		if (!strcmp(c, "push")) {
			scanf("%d", &x);
			push(x);
		}
		else if (!strcmp(c, "pop"))
			pop();
		else if (strcmp(c, "size") == 0)
			size();
		else if (strcmp(c, "empty") == 0)
			empty();
		else if (strcmp(c, "front") == 0)
			front();
		else if (strcmp(c, "back") == 0)
			back();
	}
	return 0;
}