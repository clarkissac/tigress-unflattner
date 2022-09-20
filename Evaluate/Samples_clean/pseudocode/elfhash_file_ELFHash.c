__int64 __fastcall ELFHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+10h] [rbp-Ch]
  int v5; // [rsp+10h] [rbp-Ch]
  unsigned int i; // [rsp+14h] [rbp-8h]
  unsigned int v7; // [rsp+18h] [rbp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v5 = 16 * v4 + *a1;
    v7 = v5 & 0xF0000000;
    if ( (v5 & 0xF0000000) != 0 )
      v5 ^= HIBYTE(v7);
    v4 = ~v7 & v5;
    ++a1;
  }
  return v4;
}
