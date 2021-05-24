# ws2812b
Diesen Sketch benutze ich auf einem Arduino UNO mit einem WS2812b LED Streichen für die 
Visualisierung meiner WALLBOX. Der LED Streifen ist nur 29 LED`s lang.

Pinbelegung:
Pin 6 = Daten Pin für WS2812b LED Streifen
Pin 7 = Steuerpin von WALLBOX (LOW = läd nicht, HIGH = läd) 
Pin 8 = Lichtsensor (LOW = TAG, HIGH = Nacht)
Pin 10 = Störung (LOW = STÖRUNG, HIGH = OK)

Funktion:
Wenn das Hauptschütz der Wallbox anzieht laufen die LED`s von LED 0 bis 28
Schaltet das Hauptschütz ab und es ist TAG gehen die LED`s von 28 bis 0 aus.
Schaltet das Hauptschütz ab und es ist NACHT laufen die LED`s von 28 nach 0 auf WEIß zurück.

Geht in egal welcher Stellung der Pin 10 auf LOW schaltet der LED Streifen auf ROT um.
