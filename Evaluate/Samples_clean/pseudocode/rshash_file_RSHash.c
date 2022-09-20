__int64 __fastcall RSHash(char *a1, unsigned int a2)
{
  int v4; // [rsp+Ch] [rbp-10h]
  unsigned int v5; // [rsp+10h] [rbp-Ch]
  unsigned int i; // [rsp+14h] [rbp-8h]

  v4 = 63689;
  v5 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v5 = v4 * v5 + *a1;
    v4 *= 378551;
    ++a1;
  }
  return v5;
}
