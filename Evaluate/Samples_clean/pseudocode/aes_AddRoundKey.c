__int64 __fastcall AddRoundKey(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 j; // [rsp+26h] [rbp-2h]
  unsigned __int8 i; // [rsp+27h] [rbp-1h]

  result = a1;
  for ( i = 0; i <= 3u; ++i )
  {
    for ( j = 0; j <= 3u; ++j )
    {
      result = j + a2 + 4LL * i;
      *(_BYTE *)result ^= *(_BYTE *)(4 * (4 * (unsigned __int8)a1 + i) + j + a3);
    }
  }
  return result;
}
