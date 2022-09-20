__int64 __fastcall PJWHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+24h] [rbp-18h]
  unsigned int v5; // [rsp+28h] [rbp-14h]
  unsigned int i; // [rsp+2Ch] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v4 = 16 * v4 + *a1;
    v5 = v4 & 0xF0000000;
    if ( v5 )
      v4 = (v4 ^ HIBYTE(v5)) & 0xFFFFFFF;
    ++a1;
  }
  return v4;
}
