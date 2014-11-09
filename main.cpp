#include <windows.h>

#define EXPORT __declspec (dllexport)

#include 'shiftRows.h'

#include 'generateRoundKey.h


void encryptBlock

int main()
{
    char[16]  ChipherKey;

    char[128] Word;




}


void encryptBlock (*char[16] block, *char[16] ChipherKey)
{
    char[128] RoundKeys;

    int i;
    for (i=0; i<16, i++)
    {
        RoundKeys[i]=ChipjerKey[i]
    }

    generate_round_key(*RoundKeys)

    addRoundKey(*block, *RoundKeys[0]);
    int i;
    for (i=1, i<=9, i++)
    {
        subBytes(*block);
        shiftRows(*block):
        mixColumns(*block);
        addRoundKey(*block, *RoundKeys[(i*16)]);
    }
    subBytes(*block);
    shiftRows(*block);
    addRoundKey(*block, *RoundKeys[(i*16)])
}


