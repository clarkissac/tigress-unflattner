__int64 __fastcall RSHash(char *a1, unsigned int a2)
{
  int v4; // [rsp+14h] [rbp-18h]
  int v5; // [rsp+18h] [rbp-14h]
  unsigned int v6; // [rsp+1Ch] [rbp-10h]
  unsigned int v7; // [rsp+20h] [rbp-Ch]
  __int64 v8; // [rsp+24h] [rbp-8h]

  v8 = 2LL;
  while ( 1 )
  {
    while ( v8 == 5 )
    {
      v6 = v5 * v6 + *a1;
      v5 *= v4;
      ++a1;
      ++v7;
      v8 = 3LL;
    }
    if ( v8 == 4 )
      break;
    if ( v8 == 2 )
    {
      v4 = 378551;
      v5 = 63689;
      v6 = 0;
      v7 = 0;
      v8 = 3LL;
    }
    else if ( v7 >= a2 )
    {
      v8 = 4LL;
    }
    else
    {
      v8 = 5LL;
    }
  }
  return v6;
}
