#include<bits/stdc++.h>

void findposition(string & strng, string & substrng)
{
//cout<<*strng<<"  "<<*substrng<<endl;

    int sbl= substrng.length();
    int max= strng.length()- sbl +1;

    int i=0, j=0 ,k=0;

    for(i = 0, j = 0; strng[i]!='\0' && substrng[j]!='\0'; i++)
    {
        if(strng[i] == substrng[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == sbl)
        cout<<substrng<<"   found at position "<< i - j + 1<<" from :   "<<strng<<endl;
        //printf("%s found at position %d from %s \n\n",substrng,i-j+1,strng);
    else
        cout<<substrng<<"   not found from :   "<<strng<<endl;
        //printf("%s not found from %s\n\n",substrng,strng);

}
int main()
{
    string S="JOHN PAUL JONES", T="A THING OF BEAUTY IS A JOY FOREVER";
    string sb1="JO",sb2="JOY",sb3="A",sb4="THE";
/*
    findposition(&S,&sb1);
    findposition(&T,&sb1);
    findposition(&S,&sb2);
    findposition(&T,&sb2);
    findposition(&S,&sb3);
    findposition(&T,&sb3);
    findposition(&S,&sb4);
    findposition(&T,&sb4);
*/
    findposition(S,sb1);
    findposition(T,sb1);cout<<endl;
    findposition(S,sb2);
    findposition(T,sb2);cout<<endl;
    findposition(S,sb3);
    findposition(T,sb3);cout<<endl;
    findposition(S,sb4);
    findposition(T,sb4);cout<<endl;
    return 0;
}
