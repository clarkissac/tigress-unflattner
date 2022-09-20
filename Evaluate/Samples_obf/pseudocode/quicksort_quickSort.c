void __fastcall quickSort(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+14h] [rbp-Ch]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v5 = 1LL;
  while ( 1 )
  {
    while ( v5 == 2 )
    {
      v4 = partition(a1, a2, a3);
      quickSort(a1, (unsigned int)a2, (unsigned int)(v4 - 1));
      quickSort(a1, (unsigned int)(v4 + 1), (unsigned int)a3);
      v5 = 0LL;
    }
    if ( !v5 )
      break;
    if ( a2 >= a3 )
      v5 = 0LL;
    else
      v5 = 2LL;
  }
}
