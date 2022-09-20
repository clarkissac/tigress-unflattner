__int64 __fastcall selectionSort(__int64 a1, int a2)
{
  __int64 result; // rax
  int i; // [rsp+14h] [rbp-Ch]
  int j; // [rsp+18h] [rbp-8h]
  int v5; // [rsp+1Ch] [rbp-4h]

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
    swap((int *)(4LL * v5 + a1), (int *)(a1 + 4LL * i));
  }
  return result;
}
