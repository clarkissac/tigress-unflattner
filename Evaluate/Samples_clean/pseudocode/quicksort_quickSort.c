__int64 __fastcall quickSort(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v5; // [rsp+1Ch] [rbp-4h]

  result = a2;
  if ( (int)a2 < a3 )
  {
    v5 = partition(a1, a2, a3);
    quickSort(a1, a2, (unsigned int)(v5 - 1));
    result = quickSort(a1, (unsigned int)(v5 + 1), (unsigned int)a3);
  }
  return result;
}
