long long digitSum(char*n){
    long long sum=0;
    for(int i=0;n[i]!='\0';i++){
        sum +=(n[i]-'0');
    }
    return sum;
 }
 int recursiveSuperDigit(long long num){
    if(num<10) return (int)num;
    long long sum=0;
    while (num>0){
        sum +=num % 10;
        num /=10;
    }
    return recursiveSuperDigit(sum);
 }

int superDigit(char* n, int k) {
    long long intial_sum=digitSum(n);
    long long total=intial_sum * k;
    return recursiveSuperDigit(total);
    
}


int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** first_multiple_input = split_string(rtrim(readline()));

    char* n = *(first_multiple_input + 0);

    int k = parse_int(*(first_multiple_input + 1));

    int result = superDigit(n, k);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

