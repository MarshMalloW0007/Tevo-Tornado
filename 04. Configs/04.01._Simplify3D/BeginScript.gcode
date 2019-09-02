;Init 181010
;G28 			; Home all axes
;G1 Z5 F3000 ; lift
;G92 E0			; Reset extrusion distance

; // From Cura 181010
; // Update 190823 (GueroLoco)
; // Start_gcode
M117 *Start Clean*		; Indicate nozzle clean in progress on LCD
;
M104 S[extruder0_temperature] 
M109 S[extruder0_temperature] 
M109 R[extruder0_temperature] 
;
M107			; Turn layer fan off
G21			; Set to metric [change to G20 if you want Imperial]
G90			; Force coordinates to be absolute relative to the origin
G28			; Home X/Y/Z axis
;
;G1 X3 Y1 Z15 F9000		; Move safe Z height to shear strings
;G0 X1 Y1 Z0.2 F9000		; Move in 1mm from edge and up [z] 0.2mm
;G92 E0			; Set extruder to [0] zero
;G1 X100 E12 F500		; Extrude 30mm filiment along X axis 100mm long to prime and clean the nozzle
;G92 E0			; Reset extruder to [0] zero end of cleaning run
;G1 E-1 F500			; Retract filiment by 1 mm to reduce string effect
;G1 X180 F4000		; Quick wipe away from the filament line / purge
;
G92 E0			; Set Extruder to 0 
G1 X0 Y0 F2000		; Move X and Y to 0 with speed 2000 (mm/min)
G1 Z0.1 F1000		; Move Z to 0.1
G1 X8.0 F2000		; Move X to 8.0
G1 Y60.0 E4.0 F1000.0		; Prime - Move Y to 60 and Extruder with 4.0
G1 Y100.0 E8.5 F1000.0		; Prime - Move Y to 100 and Extruder with 8.5
G92 E0			; Set extruder to 0
M117 *End Clean*		; Indicate nozzle clean in progress on LCD
G1 Z5 F3000			; Lift - Move Z to 5
; 
M117 *Printing...*		; start msg
; // Begin printing with sliced GCode after here
;