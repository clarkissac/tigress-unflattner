__int64 __fastcall InvCipher(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+10h] [rbp-10h]
  unsigned __int8 v4; // [rsp+1Fh] [rbp-1h]

  v3 = 4LL;
  while ( 1 )
  {
    result = v3;
    switch ( v3 )
    {
      case 1LL:
        InvShiftRows(a1);
        InvSubBytes(a1);
        AddRoundKey(v4, a1, a2);
        v3 = 6LL;
        break;
      case 2LL:
        return result;
      case 3LL:
        InvMixColumns(a1);
        --v4;
        v3 = 1LL;
        break;
      case 4LL:
        AddRoundKey(10LL, a1, a2);
        v4 = 9;
        v3 = 1LL;
        break;
      case 6LL:
        if ( v4 )
          v3 = 3LL;
        else
          v3 = 2LL;
        break;
      default:
        continue;
    }
  }
}
