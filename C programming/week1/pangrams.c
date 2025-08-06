char* pangrams(char* s) {
    static char yes[] = "pangram";
    static char no[] = "not pangram";

    int letters[26] = {0};  // to track a-z
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);  // convert to lowercase
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (letters[index] == 0) {
                letters[index] = 1;
                count++;  // count how many unique letters seen
            }
        }
    }

    if (count == 26) {
        return yes;
    } else {
        return no;
    }
}
