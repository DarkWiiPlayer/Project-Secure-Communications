#ifndef _GENERATEROUNDKEY_H
#define _GENERATEROUNDKEY_H

void generate_round_key (*char[32] ChipherKey, char[128] ExpandedKey);
void RotWord(*char[4] word);

#endif // _SHIFTROWS_H