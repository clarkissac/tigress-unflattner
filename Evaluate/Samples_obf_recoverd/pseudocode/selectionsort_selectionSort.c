__int64 __fastcall selectionSort(__int64 a1, int a2)
{
  __int64 result; // rax
  int i; // [rsp+1Ch] [rbp-14h]
  int j; // [rsp+20h] [rbp-10h]
  int v5; // [rsp+24h] [rbp-Ch]

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)(a2 - 1);
    if ( i >= (int)result )
      break;
    v5 = i;
    for ( j = i + 1; j < a2; ++j )
    {
      if ( *(_DWORD *)(4LL * j + a1) < *(_DWORD *)(4LL * v5 + a1) )
        v5 = j;
    }
    swap(4LL * v5 + a1, a1 + 4LL * i);
  }
  return result;
}
