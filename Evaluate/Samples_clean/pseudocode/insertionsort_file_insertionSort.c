__int64 __fastcall insertionSort(__int64 a1, int a2)
{
  __int64 result; // rax
  int i; // [rsp+10h] [rbp-Ch]
  int j; // [rsp+14h] [rbp-8h]
  int v5; // [rsp+18h] [rbp-4h]

  for ( i = 1; ; ++i )
  {
    result = (unsigned int)i;
    if ( i >= a2 )
      break;
    v5 = *(_DWORD *)(4LL * i + a1);
    for ( j = i - 1; j >= 0 && v5 < *(_DWORD *)(4LL * j + a1); --j )
      *(_DWORD *)(4 * (j + 1LL) + a1) = *(_DWORD *)(4LL * j + a1);
    *(_DWORD *)(a1 + 4 * (j + 1LL)) = v5;
  }
  return result;
}
