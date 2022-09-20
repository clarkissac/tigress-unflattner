__int64 __fastcall DJBHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+14h] [rbp-8h]
  unsigned int i; // [rsp+18h] [rbp-4h]

  v4 = 5381;
  for ( i = 0; i < a2; ++i )
    v4 = 33 * v4 + *a1++;
  return v4;
}
