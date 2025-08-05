char* timeConversion(char* s) {
    static char give_format[9];
    int hour=(s[0]-'0')*10+(s[1]-'0');
    char Period1=toupper(s[8]);
    
    if (Period1=='A'){
        if(hour==12){
            hour=0;
        }
        
    }
    if(Period1=='P'){
        if (hour!=12){
            hour+=12;
        }
    
    }
    give_format[0]=(hour/10)+'0';
    give_format[1]=(hour%10)+'0';
    give_format[2]=':';
    give_format[3]=s[3];
    give_format[4]=s[4];
    give_format[5]=':';
    give_format[6]=s[6];
    give_format[7]=s[7];
    give_format[8]='\0';
    return give_format;
}
