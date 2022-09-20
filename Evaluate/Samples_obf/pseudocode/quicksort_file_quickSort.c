void __fastcall quickSort(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+14h] [rbp-Ch]
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 2LL; ; i = 0LL )
  {
    do
    {
      while ( i == 2 )
        i = a2 < a3;
    }
    while ( i > 2 );
    if ( !i )
      break;
    v4 = partition(a1, a2, a3);
    quickSort(a1, (unsigned int)a2, (unsigned int)(v4 - 1));
    quickSort(a1, (unsigned int)(v4 + 1), (unsigned int)a3);
  }
}
