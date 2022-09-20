__int64 __fastcall ELFHash(char *a1, unsigned int a2)
{
  int v4; // [rsp+18h] [rbp-14h]
  unsigned int v5; // [rsp+18h] [rbp-14h]
  unsigned int v6; // [rsp+1Ch] [rbp-10h]
  unsigned int i; // [rsp+20h] [rbp-Ch]

  v5 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v4 = 16 * v5 + *a1;
    v6 = v4 & 0xF0000000;
    if ( v6 )
      v4 ^= HIBYTE(v6);
    v5 = ~v6 & v4;
    ++a1;
  }
  return v5;
}
