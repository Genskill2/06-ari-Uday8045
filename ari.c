#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

string ari(string s)
{

int i;
    int char_count=0;
    int word_count=0;
    int sentence_count=0;
    float ari1;

    for(i=0;i<strlen(s);i++)
    {
        if(isalnum(s[i]))
        char_count+=1;

         if(s[i]==' ')
         word_count+=1;

          if(s[i]=='.' || s[i]== '?' || s[i]== '!')
         sentence_count+=1;
    }
    ari1= 4.71*((float)char_count/word_count)+ 0.5*((float)word_count/sentence_count)-21.43;


    char* s1[14]={"Kindergarten", "First/Second Grade","Third Grade","Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth grade",  "College student","Professor"};

    switch((int)(ceil(ari1)))
    {

    case 1: return(s1[0]);
    break;
    case 2: return(s1[1]);
    break;
    case 3:return(s1[2]);
    break;
    case 4:return(s1[3]);
    break;
    case 5:return(s1[4]);
    break;
    case 6:return(s1[5]);
    break;
    case 7:return(s1[6]);
    break;
    case 8:return(s1[7]);
    break;
    case 9:return(s1[8]);
    break;
    case 10:return(s1[9]);
    break;
    case 11:return(s1[10]);
    break;
    case 12:return(s1[11]);
    break;
    case 13:return(s1[12]);
    break;
    case 14:return(s1[13]);
    break;




    }


}
