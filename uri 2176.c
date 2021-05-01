#include<stdio.h>

int main()
{
    int len, cnt=1,i=0;

    char str[110];

    gets(str);

    // calculating length of the message
    len = strlen(str);

    // counting the number of 1 in the message
    for(i=0; i<len; i++)
    {
        if (str[i]=='1')
            cnt++;
    }

    // if the number of count is even then
    //add 1 with the message otherwise add 0
    if (cnt%2==0)
        printf("%s1\n",str);
    else
        printf("%s0\n",str);

    return 0;
}

