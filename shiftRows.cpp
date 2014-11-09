
void shiftRows(char *block)
{
    char hlp;

    hlp = block[4]; block[4] = block[5]; block[5] = block[6]; block[6] = block[7]; block[7] = hlp;
    hlp = block[8]; block[8] = block[10]; block[10] = hlp;
    hlp = block[9]; block[9] = block[11]; block[11] = hlp;
    hlp = block[15]; block[15] = block[14]; block[14] = block[13]; block[13] = block[12]; block[12] = hlp;
}
