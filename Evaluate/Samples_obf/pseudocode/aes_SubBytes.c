__int64 __fastcall SubBytes(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-10h]
  unsigned __int8 v3; // [rsp+16h] [rbp-2h]
  unsigned __int8 v4; // [rsp+17h] [rbp-1h]

  v2 = 10LL;
  while ( 1 )
  {
    result = v2;
    switch ( v2 )
    {
      case 1LL:
        if ( v4 > 3u )
          v2 = 9LL;
        else
          v2 = 8LL;
        break;
      case 3LL:
        *(_BYTE *)(v4 + a1 + 4LL * v3) = sbox[*(unsigned __int8 *)(v4 + a1 + 4LL * v3)];
        ++v3;
        v2 = 7LL;
        break;
      case 5LL:
        ++v4;
        v2 = 1LL;
        break;
      case 7LL:
        if ( v3 > 3u )
          v2 = 5LL;
        else
          v2 = 3LL;
        break;
      case 8LL:
        v3 = 0;
        v2 = 7LL;
        break;
      case 9LL:
        return result;
      case 10LL:
        v4 = 0;
        v2 = 1LL;
        break;
      default:
        continue;
    }
  }
}
