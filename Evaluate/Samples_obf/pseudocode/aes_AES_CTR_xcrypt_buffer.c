__int64 __fastcall AES_CTR_xcrypt_buffer(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v6[3]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h]
  int v8; // [rsp+44h] [rbp-Ch]
  unsigned __int64 v9; // [rsp+48h] [rbp-8h]

  v7 = 3LL;
  while ( 1 )
  {
    result = v7;
    switch ( v7 )
    {
      case 0LL:
        --v8;
        v7 = 12LL;
        break;
      case 1LL:
        ++*(_BYTE *)(a1 + v8 + 176);
        v7 = 15LL;
        break;
      case 3LL:
        v9 = 0LL;
        v8 = 16;
        v7 = 11LL;
        break;
      case 4LL:
        v4 = *(_QWORD *)(a1 + 184);
        v6[0] = *(_QWORD *)(a1 + 176);
        v6[1] = v4;
        Cipher((__int64)v6, a1);
        v8 = 15;
        v7 = 12LL;
        break;
      case 5LL:
        *(_BYTE *)(a2 + v9++) ^= *((_BYTE *)v6 + v8++);
        v7 = 11LL;
        break;
      case 6LL:
        *(_BYTE *)(a1 + v8 + 176) = 0;
        v7 = 0LL;
        break;
      case 7LL:
        if ( *(_BYTE *)(a1 + v8 + 176) == 0xFF )
          v7 = 6LL;
        else
          v7 = 1LL;
        break;
      case 11LL:
        if ( v9 >= a3 )
          v7 = 16LL;
        else
          v7 = 17LL;
        break;
      case 12LL:
        if ( v8 < 0 )
          v7 = 15LL;
        else
          v7 = 7LL;
        break;
      case 15LL:
        v8 = 0;
        v7 = 5LL;
        break;
      case 16LL:
        return result;
      case 17LL:
        if ( v8 == 16 )
          v7 = 4LL;
        else
          v7 = 5LL;
        break;
      default:
        continue;
    }
  }
}
