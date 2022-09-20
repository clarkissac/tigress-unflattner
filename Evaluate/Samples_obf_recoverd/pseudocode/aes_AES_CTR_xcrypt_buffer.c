unsigned __int64 __fastcall AES_CTR_xcrypt_buffer(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 result; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-30h] BYREF
  int i; // [rsp+44h] [rbp-Ch]
  unsigned __int64 v8; // [rsp+48h] [rbp-8h]

  v8 = 0LL;
  for ( i = 16; ; ++i )
  {
    result = v8;
    if ( v8 >= a3 )
      break;
    if ( i == 16 )
    {
      v3 = *(_QWORD *)(a1 + 184);
      v6[0] = *(_QWORD *)(a1 + 176);
      v6[1] = v3;
      Cipher((__int64)v6, a1);
      for ( i = 15; i >= 0; --i )
      {
        if ( *(_BYTE *)(a1 + i + 176) != 0xFF )
        {
          ++*(_BYTE *)(a1 + i + 176);
          break;
        }
        *(_BYTE *)(a1 + i + 176) = 0;
      }
      i = 0;
    }
    *(_BYTE *)(a2 + v8++) ^= *((_BYTE *)v6 + i);
  }
  return result;
}
