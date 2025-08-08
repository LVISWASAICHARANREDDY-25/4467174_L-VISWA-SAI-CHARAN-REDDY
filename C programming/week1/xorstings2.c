int main() {
    char s[1001], t[1001];
    scanf("%s", s);
    scanf("%s", t);

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i] == t[i] ? '0' : '1');
    }

    printf("\n");
    return 0;
}
