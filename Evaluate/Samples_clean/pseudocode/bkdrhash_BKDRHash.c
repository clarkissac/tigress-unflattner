__int64 __fastcall BKDRHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+10h] [rbp-Ch]
  unsigned int i; // [rsp+14h] [rbp-8h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 = 131 * v4 + *a1++;
  return v4;
}
