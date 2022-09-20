__int64 __fastcall InvCipher(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 i; // [rsp+1Fh] [rbp-1h]

  AddRoundKey(10LL, a1, a2);
  for ( i = 9; ; --i )
  {
    InvShiftRows(a1);
    InvSubBytes(a1);
    result = AddRoundKey(i, a1, a2);
    if ( !i )
      break;
    InvMixColumns(a1);
  }
  return result;
}
