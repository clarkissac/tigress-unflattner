__int64 __fastcall DEKHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+14h] [rbp-8h]
  unsigned int i; // [rsp+18h] [rbp-4h]

  v4 = a2;
  for ( i = 0; i < a2; ++i )
    v4 = __ROL4__(v4, 5) ^ *a1++;
  return v4;
}
