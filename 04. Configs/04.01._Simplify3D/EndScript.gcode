;
; init 181010
;
;M107 			; Fan off
;G1 E-1 F300 			; Retract the filament a bit before lifting the nozzle
;M104 S0 			; Turn off extruder
;M140 S0 			; Turn off bed
;G91			; Relative positioning
;G28 X0 Y0 			; Move X/Y to min endstops so the head is out of teh way
;M84 			; Disable motors
;G90 			; Absolute positioning
;M117 Print ready...

;
; // From Cura 181010
; // End_gcode
G92 E0			; Zero the extruded length
G1 E-30 F300			; Retract E -30
M106 S0			; Turn off cooling fan
M104 S0			; Turn off temperature
M140 S0		     	; Turn off bed
G91			; Relative positioning
G1 E-1 F300			; Retract the filament a bit before lifting the nozzle to release some of the pressure
G1 Z+20 E-5 X-20 Y-20 F7200	; Move Z up a bit and retract filament even more
G1 X0 Y150 F10000		; Move right min
M107			; Turn off layer fan
M84			; Disable motors
G90			; Absolute positioning
M117 *The-End* 		; End msg