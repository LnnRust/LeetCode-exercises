#include <string.h>

int lengthOfLongestSubstring(char* s) 
{
    int n = strlen(s);
    if(n == 0) 
        return 0;

    int lastindex[256]; // tableau pour stocker les positions de chaque char
    for (int i = 0; i < 256; i++)
        lastindex[i] = -1; // - 1 = char pas encore vu

    int maxlen = 0;
    int start = 0;

    for(int i = 0; i < n; i++)
    {
        char c = s[i]; // initialisation au char actuel 

        if(lastindex[c] >= start) // si deja vu  dans la len en cours
        {
            start = lastindex[c] + 1; // je deplace le start a l occurence + 1
        }

        lastindex[c] = i;

        int currentlen = i - start + 1;
        if(currentlen > maxlen)
            maxlen = currentlen; // swap pour conserver la len la plus grande et pour reset currentlen
    } 
    return maxlen;
}