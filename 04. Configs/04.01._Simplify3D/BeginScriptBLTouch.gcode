;
; -]H.P.B[- MarshMalloW  
; $VER: StartScript 1.01 (13.11.2019) MarshMalloW
;
; Begin Startcode
;
M117 *Start Clean*     ; Indicate nozzle clean in progress on LCD
;
;extruder0_temperature
M104 S[extruder0_temperature]  
M109 S[extruder0_temperature] 
M109 R[extruder0_temperature] 
;
M107                   ; Turn layer fan off
G21                    ; Set to metric [change to G20 if you want Imperial]
G90                    ; Force coordinates to be absolute relative to the origin
G28                    ; Home X/Y/Z axis
G29                    ; Auto-leveling (BL-Touch)
;
G92 E0                 ; Set Extruder to 0 
G1 X0 Y0 F2000         ; Move X and Y to 0 with speed 2000 (mm/min)
G1 Z0.1 F1000          ; Move Z to   0.1 with speed 1000 (mm/min)
G1 X8.0 F2000          ; Move X to   8.0 with speed 2000 (mm/min)
G1 Y60.0 E4.0 F1000.0  ; Move Y to  60 and Extruder with 4.0 with speed 1000 (mm/min)
G1 Y100.0 E8.5 F1000.0 ; Move Y to 100 and Extruder with 8.5 with speed 1000 (mm/min)
G92 E0                 ; Set extruder to 0
G1 X16.0 F3000         ; Move X to 16.0 with speed 3000 (mm/min)
G1 Y60.0 F3000         ; Move Y to 60.0 with speed 3000 (mm/min)
M117 *End Clean*       ; Indicate nozzle clean in progress on LCD
G1 Z5 F3000            ; Move Z to  5.0 with speed 3000 (mm/min)
G1 X20.0 F3000         ; Move X to 20.0 with speed 3000 (mm/min)
; 
M117 *Printing...*     ; Start printing msg on LCD
;
; End Startcode
;
; Begin printing with sliced GCode after here
;