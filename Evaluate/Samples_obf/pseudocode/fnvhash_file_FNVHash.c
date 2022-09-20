__int64 __fastcall FNVHash(char *a1, unsigned int a2)
{
  int v4; // [rsp+18h] [rbp-14h]
  unsigned int v5; // [rsp+1Ch] [rbp-10h]
  unsigned int v6; // [rsp+20h] [rbp-Ch]
  __int64 v7; // [rsp+24h] [rbp-8h]

  v7 = 2LL;
  while ( 1 )
  {
    while ( v7 == 5 )
    {
      v5 = *a1++ ^ (v4 * v5);
      ++v6;
      v7 = 3LL;
    }
    if ( v7 == 4 )
      break;
    if ( v7 == 2 )
    {
      v4 = -2128831035;
      v5 = 0;
      v6 = 0;
      v7 = 3LL;
    }
    else if ( v6 >= a2 )
    {
      v7 = 4LL;
    }
    else
    {
      v7 = 5LL;
    }
  }
  return v5;
}
