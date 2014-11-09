#ifndef _GENERATEROUNDKEY_H
#define _GENERATEROUNDKEY_H

uint8_t generate_round_key (*uint8_t[32] ChipherKey, uint8_t[128] ExpandedKey);
void RotWord(*uint8_t[4] word);

#endif // _SHIFTROWS_H
