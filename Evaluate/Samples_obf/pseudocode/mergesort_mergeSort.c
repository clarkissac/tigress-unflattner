unsigned __int64 __fastcall mergeSort(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned int v5; // [rsp+14h] [rbp-Ch]
  __int64 v6; // [rsp+18h] [rbp-8h]

  v6 = 1LL;
  while ( 1 )
  {
    while ( v6 == 2 )
    {
      v5 = (int)(a3 - a2) / 2 + a2;
      mergeSort(a1, a2, v5);
      mergeSort(a1, v5 + 1, (unsigned int)a3);
      result = merge(a1, a2, v5, a3);
      v6 = 0LL;
    }
    if ( !v6 )
      break;
    result = a2;
    if ( (int)a2 >= a3 )
      v6 = 0LL;
    else
      v6 = 2LL;
  }
  return result;
}
