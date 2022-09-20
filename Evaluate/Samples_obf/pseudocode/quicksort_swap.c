int *__fastcall swap(int *a1, int *a2)
{
  int *result; // rax
  int v3; // [rsp+14h] [rbp-Ch]
  __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 1LL; i; i = 0LL )
  {
    v3 = *a1;
    *a1 = *a2;
    result = a2;
    *a2 = v3;
  }
  return result;
}
