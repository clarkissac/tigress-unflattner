__int64 __fastcall SDBMHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+14h] [rbp-8h]
  unsigned int i; // [rsp+18h] [rbp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 = *a1++ + (v4 << 6) + (v4 << 16) - v4;
  return v4;
}
