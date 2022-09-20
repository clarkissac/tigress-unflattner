__int64 __fastcall JSHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+14h] [rbp-8h]
  unsigned int i; // [rsp+18h] [rbp-4h]

  v4 = 1315423911;
  for ( i = 0; i < a2; ++i )
    v4 ^= *a1++ + 32 * v4 + (v4 >> 2);
  return v4;
}
