


void addRoundKey(*char[16] block, *char[16] roundKey)
{
    int i;
    for (i=0, i<=15, i++)
    {
        block[i] = block[i] ^ roundKey[i];
    }
}
