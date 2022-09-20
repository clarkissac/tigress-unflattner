__int64 __fastcall partition(__int64 a1, int a2, int a3)
{
  int v5; // [rsp+1Ch] [rbp-14h]
  int i; // [rsp+20h] [rbp-10h]
  int v7; // [rsp+24h] [rbp-Ch]

  v5 = *(_DWORD *)(4LL * a3 + a1);
  v7 = a2 - 1;
  for ( i = a2; a3 > i; ++i )
  {
    if ( v5 > *(_DWORD *)(4LL * i + a1) )
      swap(4LL * ++v7 + a1, a1 + 4LL * i);
  }
  swap(4 * (v7 + 1LL) + a1, a1 + 4LL * a3);
  return (unsigned int)(v7 + 1);
}
