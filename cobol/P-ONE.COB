000100* P-ONE.COB
000200 IDENTIFICATION DIVISION.
000300 PROGRAM-ID. P-ONE.
000400 DATA DIVISION.
000500 WORKING-STORAGE SECTION.
000600 01 CT PIC 9999 VALUE 0.
000610 01 SM PIC 9(9) VALUE 0.
000620 01 TH PIC 9999 VALUE 0.
000630 01 FV PIC 9999 VALUE 0.
000700
000800 PROCEDURE DIVISION.
001000 P-ONE-MAIN SECTION.
001100  PERFORM 1000 TIMES
001109    IF CT < 1000
001110    THEN IF TH = 3
001111        THEN ADD CT TO SM
001112        IF FV = 5
001113          THEN COMPUTE FV = 0
001114        END-IF
001119        COMPUTE TH = 0
001120      ELSE IF FV = 5
001121        THEN ADD CT TO SM
001129        COMPUTE FV = 0
001190      END-IF
001199    END-IF
001200    ADD 1 TO CT
001210    ADD 1 TO FV
001220    ADD 1 TO TH
001300  END-PERFORM
001400 DISPLAY SM
001500 STOP RUN.
