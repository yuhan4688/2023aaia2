//week15-1.cpp
int equalSubstring(char* s, char* t, int maxCost) {
    int N=strlen(s);//先知道字串的長度
    for(int i=0;i<N;i++){//字串的迴圈
        printf("%c %c",s[i],t[i]);//字串的陣列
    }
    return 0;//課堂作業1，先隨便給個0當答案