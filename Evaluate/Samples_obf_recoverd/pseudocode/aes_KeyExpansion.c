_BYTE *__fastcall KeyExpansion(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  char v3; // [rsp+10h] [rbp-20h]
  char v4; // [rsp+11h] [rbp-1Fh]
  unsigned __int8 v5; // [rsp+12h] [rbp-1Eh]
  unsigned __int8 v6; // [rsp+13h] [rbp-1Dh]
  int v7; // [rsp+14h] [rbp-1Ch]
  unsigned int v8; // [rsp+18h] [rbp-18h]
  unsigned int j; // [rsp+2Ch] [rbp-4h]
  unsigned int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; i <= 3; ++i )
  {
    *(_BYTE *)(4 * i + a1) = *(_BYTE *)(4 * i + a2);
    *(_BYTE *)(4 * i + 1 + a1) = *(_BYTE *)(4 * i + 1 + a2);
    *(_BYTE *)(4 * i + 2 + a1) = *(_BYTE *)(4 * i + 2 + a2);
    result = (_BYTE *)*(unsigned __int8 *)(4 * i + 3 + a2);
    *(_BYTE *)(4 * i + 3 + a1) = (_BYTE)result;
  }
  for ( j = 4; j <= 0x2B; ++j )
  {
    v3 = *(_BYTE *)(4 * (j - 1) + a1);
    v4 = *(_BYTE *)(4 * (j - 1) + 1 + a1);
    v5 = *(_BYTE *)(4 * (j - 1) + 2 + a1);
    v6 = *(_BYTE *)(4 * (j - 1) + 3 + a1);
    if ( (j & 3) == 0 )
    {
      v4 = sbox[v5];
      v5 = sbox[v6];
      v6 = sbox[*(unsigned __int8 *)(4 * (j - 1) + a1)];
      v3 = sbox[*(unsigned __int8 *)(4 * (j - 1) + 1 + a1)] ^ Rcon[j >> 2];
    }
    v7 = 4 * j;
    v8 = 4 * (j - 4);
    *(_BYTE *)(4 * j + a1) = *(_BYTE *)(v8 + a1) ^ v3;
    *(_BYTE *)((unsigned int)(v7 + 1) + a1) = *(_BYTE *)(v8 + 1 + a1) ^ v4;
    *(_BYTE *)((unsigned int)(v7 + 2) + a1) = *(_BYTE *)(v8 + 2 + a1) ^ v5;
    result = (_BYTE *)(4 * j + 3 + a1);
    *result = *(_BYTE *)(v8 + 3 + a1) ^ v6;
  }
  return result;
}
