char* caesarCipher(char* s, int k) {
    int len=strlen(s);
    char* result=(char*)malloc((len+1)*sizeof(char));
    k=k%26;
    for (int i=0;i<len;i++){
        char c=s[i];
        if(c>='a'&& c<='z'){
            result[i]='a'+((c-'a'+k)%26);
        }
        else if (c>='A'&&c<='Z'){
            result[i]='A'+((c-'A'+k)%26);
        }
        else{
            result[i]=c;
        }
    }
    result[len]='\0';
    return result;

}
