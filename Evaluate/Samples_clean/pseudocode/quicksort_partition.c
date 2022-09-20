__int64 __fastcall partition(__int64 a1, int a2, int a3)
{
  int i; // [rsp+14h] [rbp-Ch]
  int v6; // [rsp+18h] [rbp-8h]
  int v7; // [rsp+1Ch] [rbp-4h]

  v7 = *(_DWORD *)(4LL * a3 + a1);
  v6 = a2 - 1;
  for ( i = a2; a3 > i; ++i )
  {
    if ( v7 > *(_DWORD *)(4LL * i + a1) )
      swap((int *)(4LL * ++v6 + a1), (int *)(a1 + 4LL * i));
  }
  swap((int *)(4 * (v6 + 1LL) + a1), (int *)(a1 + 4LL * a3));
  return (unsigned int)(v6 + 1);
}
