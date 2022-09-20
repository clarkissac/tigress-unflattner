__int64 __fastcall AddRoundKey(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+18h] [rbp-10h]
  unsigned __int8 v5; // [rsp+26h] [rbp-2h]
  unsigned __int8 v6; // [rsp+27h] [rbp-1h]

  v4 = 6LL;
  while ( 1 )
  {
    result = v4;
    switch ( v4 )
    {
      case 0LL:
        return result;
      case 1LL:
        ++v6;
        v4 = 10LL;
        break;
      case 2LL:
        v5 = 0;
        v4 = 5LL;
        break;
      case 5LL:
        if ( v5 > 3u )
          v4 = 1LL;
        else
          v4 = 7LL;
        break;
      case 6LL:
        v6 = 0;
        v4 = 10LL;
        break;
      case 7LL:
        *(_BYTE *)(v5 + a2 + 4LL * v6) ^= *(_BYTE *)(4 * (4 * a1 + v6) + v5 + a3);
        ++v5;
        v4 = 5LL;
        break;
      case 10LL:
        if ( v6 > 3u )
          v4 = 0LL;
        else
          v4 = 2LL;
        break;
      default:
        continue;
    }
  }
}
