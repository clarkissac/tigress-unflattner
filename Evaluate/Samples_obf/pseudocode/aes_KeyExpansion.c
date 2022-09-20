__int64 __fastcall KeyExpansion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+10h] [rbp-20h]
  unsigned __int8 v4; // [rsp+10h] [rbp-20h]
  char v5; // [rsp+11h] [rbp-1Fh]
  unsigned __int8 v6; // [rsp+12h] [rbp-1Eh]
  unsigned __int8 v7; // [rsp+13h] [rbp-1Dh]
  int v8; // [rsp+14h] [rbp-1Ch]
  unsigned int v9; // [rsp+18h] [rbp-18h]
  unsigned __int8 v10; // [rsp+1Fh] [rbp-11h]
  __int64 v11; // [rsp+20h] [rbp-10h]
  unsigned int v12; // [rsp+2Ch] [rbp-4h]

  v11 = 7LL;
  while ( 1 )
  {
    result = v11;
    switch ( v11 )
    {
      case 0LL:
        if ( v12 > 0x2B )
          v11 = 3LL;
        else
          v11 = 11LL;
        break;
      case 1LL:
        v8 = 4 * v12;
        v9 = 4 * (v12 - 4);
        *(_BYTE *)(4 * v12 + a1) = *(_BYTE *)(v9 + a1) ^ v3;
        *(_BYTE *)((unsigned int)(v8 + 1) + a1) = *(_BYTE *)(v9 + 1 + a1) ^ v5;
        *(_BYTE *)((unsigned int)(v8 + 2) + a1) = *(_BYTE *)(v9 + 2 + a1) ^ v6;
        *(_BYTE *)(4 * v12++ + 3 + a1) = *(_BYTE *)(v9 + 3 + a1) ^ v7;
        v11 = 0LL;
        break;
      case 2LL:
        if ( v12 > 3 )
          v11 = 13LL;
        else
          v11 = 8LL;
        break;
      case 3LL:
        return result;
      case 4LL:
        if ( (v12 & 3) != 0 )
          v11 = 1LL;
        else
          v11 = 12LL;
        break;
      case 7LL:
        v12 = 0;
        v11 = 2LL;
        break;
      case 8LL:
        *(_BYTE *)(4 * v12 + a1) = *(_BYTE *)(4 * v12 + a2);
        *(_BYTE *)(4 * v12 + 1 + a1) = *(_BYTE *)(4 * v12 + 1 + a2);
        *(_BYTE *)(4 * v12 + 2 + a1) = *(_BYTE *)(4 * v12 + 2 + a2);
        *(_BYTE *)(4 * v12 + 3 + a1) = *(_BYTE *)(4 * v12 + 3 + a2);
        ++v12;
        v11 = 2LL;
        break;
      case 11LL:
        v3 = *(_BYTE *)(4 * (v12 - 1) + a1);
        v5 = *(_BYTE *)(4 * (v12 - 1) + 1 + a1);
        v6 = *(_BYTE *)(4 * (v12 - 1) + 2 + a1);
        v7 = *(_BYTE *)(4 * (v12 - 1) + 3 + a1);
        v11 = 4LL;
        break;
      case 12LL:
        v10 = v3;
        v4 = v5;
        v5 = sbox[v6];
        v6 = sbox[v7];
        v7 = sbox[v10];
        v3 = sbox[v4] ^ Rcon[v12 >> 2];
        v11 = 1LL;
        break;
      case 13LL:
        v12 = 4;
        v11 = 0LL;
        break;
      default:
        continue;
    }
  }
}
