__int64 __fastcall Cipher(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+10h] [rbp-10h]
  unsigned __int8 v4; // [rsp+1Fh] [rbp-1h]

  v3 = 1LL;
  while ( 1 )
  {
    result = v3;
    switch ( v3 )
    {
      case 1LL:
        AddRoundKey(0LL, a1, a2);
        v4 = 1;
        v3 = 7LL;
        break;
      case 3LL:
        AddRoundKey(10LL, a1, a2);
        v3 = 4LL;
        break;
      case 4LL:
        return result;
      case 5LL:
        MixColumns(a1);
        AddRoundKey(v4++, a1, a2);
        v3 = 7LL;
        break;
      case 6LL:
        if ( v4 == 10 )
          v3 = 3LL;
        else
          v3 = 5LL;
        break;
      case 7LL:
        SubBytes(a1);
        ShiftRows(a1);
        v3 = 6LL;
        break;
      default:
        continue;
    }
  }
}
