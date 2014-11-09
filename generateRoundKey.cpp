#include ' stdint.h'

void RotWord(*char[4] word);


//ExpandedKey Spaltenweise gespeichert
void generate_round_key (*char[176] ExpandedKey)
{
    int i,j;
    char[4] aktWord;
    char rcon[10] =
    {
        0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36
    };

    for ( i=16, i<176, i+=4)
    {
        if (i % 16 == 0)
        {
            aktWord[0]=ExpandedKey[i-4];
            aktWord[1]=ExpandedKey[i-3];
            aktWord[2]=ExpandedKey[i-2];
            aktWord[3]=ExpandedKey[i-1];
            RotWord(*aktWord[0]);
            subByte4(*aktWord[0]);
            ExpandedKey[i]  =ExpandedKey[i-16] ^ aktWord[0] ^ rcon[(i/16)-1];
            ExpandedKey[i+1]=ExpandedKey[i-15] ^ aktWord[1];
            ExpandedKey[i+2]=ExpandedKey[i-14] ^ aktWord[2];
            ExpandedKey[i+3]=ExpandedKey[i-13] ^ aktWord[3];
        }
        else
        {
            ExpandedKey[i]  =ExpandedKey[i-16] ^ ExpandedKey[i-4];
            ExpandedKey[i+1]=ExpandedKey[i-15] ^ ExpandedKey[i-3];
            ExpandedKey[i+2]=ExpandedKey[i-14] ^ ExpandedKey[i-2];
            ExpandedKey[i+3]=ExpandedKey[i-13] ^ ExpandedKey[i-1];
        }
    }



}


void RotWord(*char[4] word)
{
    uint8_t help;
    help=word[0];
    word[0]=word[1];
    word[1]=word[2];
    word[2]=word[3];
    word[3]=help;
}
