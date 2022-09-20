__int64 __fastcall Cipher(__int64 a1, __int64 a2)
{
  unsigned __int8 i; // [rsp+1Fh] [rbp-1h]

  AddRoundKey(0LL, a1, a2);
  for ( i = 1; ; ++i )
  {
    SubBytes(a1);
    ShiftRows(a1);
    if ( i == 10 )
      break;
    MixColumns(a1);
    AddRoundKey(i, a1, a2);
  }
  return AddRoundKey(10LL, a1, a2);
}
