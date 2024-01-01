__int64 (__fastcall *__fastcall sub_139(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(char *),
        __int64 (__fastcall *a4)(__int64, char *),
        char *a5))(__int64, __int64 (__fastcall *)())
{
  __int64 (__fastcall *result)(__int64, __int64 (__fastcall *)()); // rax
  int i1; // [rsp+30h] [rbp-3E8h]
  char v7; // [rsp+34h] [rbp-3E4h]
  int i; // [rsp+38h] [rbp-3E0h]
  char v9; // [rsp+3Ch] [rbp-3DCh] BYREF
  int m; // [rsp+40h] [rbp-3D8h]
  int j; // [rsp+44h] [rbp-3D4h]
  int ii; // [rsp+48h] [rbp-3D0h]
  int kk; // [rsp+4Ch] [rbp-3CCh]
  int nn; // [rsp+50h] [rbp-3C8h]
  int k; // [rsp+54h] [rbp-3C4h]
  int n; // [rsp+58h] [rbp-3C0h]
  int jj; // [rsp+5Ch] [rbp-3BCh]
  int mm; // [rsp+60h] [rbp-3B8h]
  char v19[16]; // [rsp+68h] [rbp-3B0h] BYREF
  char v20[8]; // [rsp+78h] [rbp-3A0h] BYREF
  char v21[8]; // [rsp+80h] [rbp-398h] BYREF
  char v22[8]; // [rsp+88h] [rbp-390h]
  char v23[8]; // [rsp+90h] [rbp-388h]
  char v24[16]; // [rsp+98h] [rbp-380h] BYREF
  char v25[16]; // [rsp+A8h] [rbp-370h]
  char v26[16]; // [rsp+B8h] [rbp-360h] BYREF
  char v27[16]; // [rsp+C8h] [rbp-350h] BYREF
  char v28[16]; // [rsp+D8h] [rbp-340h] BYREF
  char v29[16]; // [rsp+E8h] [rbp-330h] BYREF
  char v30[16]; // [rsp+F8h] [rbp-320h] BYREF
  char v31[16]; // [rsp+108h] [rbp-310h] BYREF
  char v32[16]; // [rsp+118h] [rbp-300h] BYREF
  char v33[16]; // [rsp+128h] [rbp-2F0h] BYREF
  char v34[16]; // [rsp+138h] [rbp-2E0h] BYREF
  char v35[16]; // [rsp+148h] [rbp-2D0h] BYREF
  char v36[24]; // [rsp+158h] [rbp-2C0h] BYREF
  char v37[24]; // [rsp+170h] [rbp-2A8h] BYREF
  char v38[24]; // [rsp+188h] [rbp-290h] BYREF
  char v39[24]; // [rsp+1A0h] [rbp-278h] BYREF
  char v40[24]; // [rsp+1B8h] [rbp-260h] BYREF
  char v41[24]; // [rsp+1D0h] [rbp-248h] BYREF
  char v42[24]; // [rsp+1E8h] [rbp-230h] BYREF
  char v43[21]; // [rsp+200h] [rbp-218h]
  char v44[11]; // [rsp+215h] [rbp-203h] BYREF
  char v45[32]; // [rsp+220h] [rbp-1F8h] BYREF
  char v46[32]; // [rsp+240h] [rbp-1D8h] BYREF
  char v47[32]; // [rsp+260h] [rbp-1B8h] BYREF
  int i2; // [rsp+280h] [rbp-198h]
  __int64 (__fastcall *v49)(); // [rsp+288h] [rbp-190h]
  __int64 v50; // [rsp+290h] [rbp-188h]
  unsigned int v51; // [rsp+298h] [rbp-180h] BYREF
  __int64 v52; // [rsp+2A0h] [rbp-178h]
  __int64 v53; // [rsp+2A8h] [rbp-170h]
  __int64 v54; // [rsp+2B0h] [rbp-168h]
  __int64 v55; // [rsp+2B8h] [rbp-160h]
  __int64 v56; // [rsp+2C0h] [rbp-158h]
  void (__fastcall *v57)(__int64); // [rsp+2C8h] [rbp-150h]
  __int64 v58; // [rsp+2D0h] [rbp-148h]
  __int64 v59; // [rsp+2D8h] [rbp-140h]
  __int64 v60; // [rsp+2E0h] [rbp-138h]
  char *v61; // [rsp+2E8h] [rbp-130h]
  __int64 v62; // [rsp+2F0h] [rbp-128h]
  __int64 v63; // [rsp+2F8h] [rbp-120h]
  __int64 (__fastcall *v64)(__int64, __int64 (__fastcall *)()); // [rsp+300h] [rbp-118h]
  __int64 v65; // [rsp+308h] [rbp-110h] BYREF
  __int64 v66; // [rsp+310h] [rbp-108h]
  __int64 v67; // [rsp+318h] [rbp-100h]
  __int64 v68; // [rsp+320h] [rbp-F8h]
  __int64 v69; // [rsp+328h] [rbp-F0h]
  __int64 (__fastcall *v70)(__int64, __int64 (__fastcall *)()); // [rsp+330h] [rbp-E8h]
  int (__fastcall *v71)(__int64, __int64 *, __int64 *, __int64, unsigned int *); // [rsp+338h] [rbp-E0h]
  __int64 v72; // [rsp+340h] [rbp-D8h] BYREF
  void (__fastcall *v73)(__int64 (__fastcall *)(__int64, __int64 (__fastcall *)())); // [rsp+348h] [rbp-D0h]
  __int64 v74; // [rsp+350h] [rbp-C8h]
  __int64 v75[23]; // [rsp+360h] [rbp-B8h] BYREF

  strcpy(v34, "KERNEL32.dll");
  v58 = a3(v34);
  v9 = 1;
  strcpy(v37, "BEClient_x64.dll");
  v66 = a3(v37);
  if ( *(_DWORD *)(v66 + *(int *)(v66 + 60) + 8) < 0x5D7AA2AFu )
    v61 = &v9;
  else
    v61 = a5;
  strcpy(v46, "AddVectoredExceptionHandler");
  result = (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)()))a4(v58, v46);
  v64 = result;
  if ( result )
  {
    v49 = sub_19C1;
    *(_QWORD *)((char *)sub_19C1 + 14) = a2;
    strcpy(v27, "ntdll.dll");
    v50 = a3(v27);
    strcpy(v40, "NtQueryVirtualMemory");
    v74 = a4(v50, v40);
    *(_QWORD *)((char *)v49 + 29) = v74;
    *(_QWORD *)((char *)v49 + 44) = a3(0i64);
    memset(v75, 0, 0xB0ui64);
    strcpy(v30, "USER32.dll");
    v52 = a3(v30);
    strcpy(v36, "GetAsyncKeyState");
    v75[0] = a4(v52, v36);
    strcpy(v33, "GetCursorPos");
    v75[1] = a4(v52, v33);
    strcpy(v32, "IsBadReadPtr");
    v75[2] = a4(v58, v32);
    strcpy(v29, "win32u.dll");
    v68 = a3(v29);
    strcpy(v42, "NtUserGetAsyncKeyState");
    v75[3] = a4(v68, v42);
    strcpy(v39, "GetForegroundWindow");
    v75[4] = a4(v52, v39);
    strcpy(v19, "CallWindowProcW");
    v75[5] = a4(v52, v19);
    strcpy(v38, "NtUserPeekMessage");
    v75[6] = a4(v68, v38);
    strcpy(v28, "NtSetEvent");
    v75[7] = a4(v50, v28);
    for ( i = 6; i <= 7; ++i )
    {
      if ( v75[i] )
      {
        for ( j = 0; j < 32; ++j )
        {
          _mm_lfence();
          if ( *(_WORD *)(v75[i] + j) == 1295 )
          {
            _mm_lfence();
            if ( *(unsigned __int8 *)(v75[i] + j + 2) == 195 )
            {
              v75[i] += j;
              break;
            }
          }
        }
      }
    }
    strcpy(v35, "UnityPlayer.dll");
    v56 = a3(v35);
    *(_QWORD *)((char *)v49 + 44) = v56;
    if ( *(_DWORD *)(v56 + 5627074) == -1017422497 && *(_DWORD *)(v56 + 5564315) == 1208191816 )
      v75[8] = v56 + 5627077;
    if ( v75[2] && *(_DWORD *)v75[2] == 418153288 )
      v75[12] = v75[2] + 4;
    v43[0] = 72;
    v43[1] = -119;
    v43[2] = 69;
    v43[3] = 88;
    v43[4] = 72;
    v43[5] = -117;
    v43[6] = -51;
    v43[7] = 72;
    v43[8] = -117;
    v43[9] = 67;
    v43[10] = 88;
    v43[11] = 72;
    v43[12] = -119;
    v43[13] = 69;
    v43[14] = 96;
    v43[15] = 72;
    v43[16] = -117;
    v43[17] = 83;
    v43[18] = 88;
    v43[19] = 72;
    v43[20] = -117;
    qmemcpy(v44, "CP", 2);
    v44[2] = -1;
    v44[3] = 21;
    v69 = v50 + *(int *)(v50 + 60) + 24;
    v67 = *(unsigned int *)(v69 + 20) + v50;
    for ( k = 0; k + 25i64 <= (unsigned __int64)*(unsigned int *)(v69 + 4); ++k )
    {
      for ( m = 0; (unsigned __int64)m < 0x19 && *(unsigned __int8 *)(v67 + m + k) == (unsigned __int8)v43[m]; ++m )
        ;
      if ( m == 25i64 )
      {
        v75[13] = k + v67 + m - 2;
        break;
      }
    }
    strcpy(v31, "ucrtbase.dll");
    v59 = a3(v31);
    if ( v59 )
    {
      strcpy(v21, "sqrtf");
      v75[14] = a4(v59, v21);
      strcpy(v45, "__stdio_common_vsprintf_s");
      v75[15] = a4(v59, v45);
    }
    strcpy(v24, "dxgi.dll");
    v55 = a3(v24);
    if ( v55 )
    {
      v22[0] = 72;
      v22[1] = -125;
      v22[2] = -63;
      v22[3] = 0x80;
      v22[4] = 72;
      v22[5] = -1;
      v22[6] = 37;
      v62 = v55 + *(int *)(v55 + 60) + 24;
      v63 = *(unsigned int *)(v62 + 20) + v55;
      for ( n = 0; n + 7i64 <= (unsigned __int64)*(unsigned int *)(v62 + 4); ++n )
      {
        for ( ii = 0; (unsigned __int64)ii < 7 && *(unsigned __int8 *)(v63 + ii + n) == (unsigned __int8)v22[ii]; ++ii )
          ;
        if ( ii == 7i64 )
        {
          v75[16] = n + v63;
          break;
        }
      }
    }
    v19[14] = 65;
    v75[18] = a4(v52, v19);
    strcpy(v26, "d3d11.dll");
    v54 = a3(v26);
    if ( v54 )
    {
      v25[0] = 0;
      v25[1] = 0;
      v25[2] = 69;
      v25[3] = 51;
      v25[4] = -55;
      v25[5] = 68;
      v25[6] = 59;
      v25[7] = -48;
      v25[8] = 119;
      v25[9] = 8;
      v60 = v54 + *(int *)(v54 + 60) + 24;
      v53 = *(unsigned int *)(v60 + 20) + v54;
      for ( jj = 0; jj + 10i64 <= (unsigned __int64)*(unsigned int *)(v60 + 4); ++jj )
      {
        for ( kk = 0; (unsigned __int64)kk < 0xA && *(unsigned __int8 *)(v53 + kk + jj) == (unsigned __int8)v25[kk]; ++kk )
          ;
        if ( kk == 10i64 )
        {
          v75[19] = v53 + jj - 19;
          break;
        }
      }
      v23[0] = 72;
      v23[1] = -125;
      v23[2] = -63;
      v23[3] = 16;
      v23[4] = 72;
      v23[5] = -1;
      v23[6] = 37;
      for ( mm = 0; mm + 7i64 <= (unsigned __int64)*(unsigned int *)(v60 + 4); ++mm )
      {
        for ( nn = 0; (unsigned __int64)nn < 7 && *(unsigned __int8 *)(v53 + nn + mm) == (unsigned __int8)v23[nn]; ++nn )
          ;
        if ( nn == 7i64 )
        {
          v75[20] = mm + v53;
          break;
        }
      }
    }
    strcpy(v20, "Sleep");
    v57 = (void (__fastcall *)(__int64))a4(v58, v20);
    strcpy(v41, "NtProtectVirtualMemory");
    v71 = (int (__fastcall *)(__int64, __int64 *, __int64 *, __int64, unsigned int *))a4(v50, v41);
    result = (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)()))v64(1i64, v49);
    v70 = result;
    if ( result )
    {
      for ( i1 = 0; *v61 && (unsigned __int64)i1 < 0x16; ++i1 )
      {
        if ( v75[i1] )
        {
          v65 = 1i64;
          v72 = v75[i1];
          if ( v71(-1i64, &v72, &v65, 64i64, &v51) >= 0 )
          {
            *((_BYTE *)v49 + 61) = i1;
            v7 = *(_BYTE *)v75[i1];
            *((_BYTE *)v49 + 66) = v7;
            *(_BYTE *)v75[i1] = -52;
            if ( i1 == 6 || i1 == 7 || i1 == 8 || i1 == 22 )
            {
              v57(1000i64);
            }
            else
            {
              for ( i2 = 0; *v61 && i2 < 200; ++i2 )
              {
                v57(5i64);
                if ( *(unsigned __int8 *)v75[i1] != 204 )
                  *(_BYTE *)v75[i1] = -52;
              }
            }
            *(_BYTE *)v75[i1] = v7;
            v57(1000i64);
            v71(-1i64, &v72, &v65, v51, &v51);
          }
        }
      }
      strcpy(v47, "RemoveVectoredExceptionHandler");
      v73 = (void (__fastcall *)(__int64 (__fastcall *)(__int64, __int64 (__fastcall *)())))a4(v58, v47);
      v73(v70);
      return (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)()))((__int64 (__fastcall *)(__int64))v57)(100i64);
    }
  }
  return result;
}