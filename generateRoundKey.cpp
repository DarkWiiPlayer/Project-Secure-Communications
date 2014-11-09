#include ' stdint.h'



//ExpandedKey Spaltenweise gespeichert
uint8_t generate_round_key (*uint8_t[32] ChipherKey, uint8_t[128] ExpandedKey)        //ChiperKey 32bit großes Array
{
    int i,j;
    uint8_7[4] aktWord;
    uint8_t rcon[10] = {0x01, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36}

    //filling first 32 bit of ExpandedKey with ChipherKey
    for (i=0, i<32, i++)
    {
        ExpandedKey[i]=ChipherKey[i];
    }


    for ( i=0, (i % 16)=0, i++)
    {

    }

    if (i % 16 = 0)
    {
        aktWord[0]=ExpandedKey[i-4];
        aktWord[1]=ExpandedKey[i-3];
        aktWord[2]=ExpandedKey[i-2];
        aktWord[3]=ExpandedKey[i-1];
        RotWord(*aktWord);
        //SubByte(*aktWord)
        ExpandedKey[i]=ExpandedKey[i-4] ^ aktWord[0] ^ rcon[(i/16)-1];

    }

}


void RotWord(*uint8_t[4] word)
{
    uint8_t help;
    help=word[0];
    word[0]=word[1];
    word[1]=word[2];
    word[2]=word[3];
    word[3]=help;
}
