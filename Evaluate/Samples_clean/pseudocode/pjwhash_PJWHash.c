__int64 __fastcall PJWHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+10h] [rbp-1Ch]
  unsigned int i; // [rsp+14h] [rbp-18h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v4 = 16 * v4 + *a1;
    if ( (v4 & 0xF0000000) != 0 )
      v4 = (v4 ^ ((v4 & 0xF0000000) >> 24)) & 0xFFFFFFF;
    ++a1;
  }
  return v4;
}
