#Corne RGB Underglow
    # CONFIG_ZMK_RGB_UNDERGLOW=y
    # CONFIG_WS2812_STRIP=y

# OLED Display
    CONFIG_ZMK_DISPLAY=n

#Config power
    CONFIG_ZMK_EXT_POWER=n

#Sleep
    CONFIG_ZMK_SLEEP=y
    CONFIG_ZMK_IDLE_TIMEOUT=900000
    CONFIG_ZMK_IDLE_SLEEP_TIMEOUT=900000

# Configuracion de Soft_off
    CONFIG_ZMK_PM_SOFT_OFF=y
    
#Mouse
    CONFIG_ZMK_MOUSE=n

#Battery
    CONFIG_ZMK_BATTERY_REPORTING=y
    CONFIG_ZMK_BATTERY_REPORT_INTERVAL=120
    CONFIG_ZMK_SPLIT_BLE_CENTRAL_BATTERY_LEVEL_PROXY=y
    CONFIG_ZMK_SPLIT_BLE_CENTRAL_BATTERY_LEVEL_FETCHING=y

#Bluetooth
    CONFIG_BT=y
    CONFIG_ZMK_BLE=y    
    CONFIG_BT_PERIPHERAL=y
    CONFIG_BT_BAS=y

#Stronger Bluetooth
    # CONFIG_BT_CTLR_TX_PWR_PLUS_8=y   # +8 dBm | Alcance: ~20-30 metros (sin interferencias)
    CONFIG_BT_CTLR_TX_PWR_PLUS_4=y     # +4 dBm | Alcance: ~10-15 metros (sin interferencias)
    # CONFIG_BT_CTLR_TX_PWR_0=y        # 0 dBm  | Alcance: ~5-10 metros (sin interferencias)
    # CONFIG_BT_CTLR_TX_PWR_MINUS_8=y  # -8 dBm | Alcance: ~1-5 metros (sin interferencias)