#include <cstdio>

const int MN = 1e6;
char s[MN];

void solve()
{
	scanf(" %s", s);
	int v = 0;
	for(int i = 0;s[i];++i)
	{
		for( ;v < s[i]-'0';++v)
			printf("(");
		for(;v > s[i]-'0';--v)
			printf(")");
		printf("%c", s[i]);
	}
	for(;v;--v) printf(")");
	printf("\n");
}
int main(void)
{
	int T;
	scanf(" %d", &T);
	for(int i = 1;i <= T;++i)
	{
		printf("Case #%d: ", i);
		solve();
	}
	return 0;
}
