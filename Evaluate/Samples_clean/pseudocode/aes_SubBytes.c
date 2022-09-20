_BYTE *__fastcall SubBytes(__int64 a1)
{
  _BYTE *result; // rax
  unsigned __int8 j; // [rsp+16h] [rbp-2h]
  unsigned __int8 i; // [rsp+17h] [rbp-1h]

  for ( i = 0; i <= 3u; ++i )
  {
    for ( j = 0; j <= 3u; ++j )
    {
      result = (_BYTE *)(i + a1 + 4LL * j);
      *result = sbox[(unsigned __int8)*result];
    }
  }
  return result;
}
