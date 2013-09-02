
// ALLGEMEIN
char * read_deviceid( void );

// KESSEL
char * read_K_abgas_temp( void ); // �C
char * read_K_ist_temp( void ); // �C
char * read_K_istTP_temp( void ); // �C
char * read_K_soll_temp( void ); // �C

// WARMWASSER
char * read_WW_soll_temp( void); // �C
int write_WW_soll_temp( int temp );
char * read_WW_offset( void ); // K
char * read_WW_istTP_temp( void ); // �C
char * read_WW_ist_temp( void ); // �C

// AUSSENTEMPERATUR
char * read_outdoor_TP_temp( void ); // �C
char * read_outdoor_smooth_temp( void ); // �C
char * read_outdoor_temp( void ); // �C

// BRENNER
char * read_starts( void ); // Z�hler
char * read_runtime( void ); // Laufzeit in Sekunden
char * read_power( void ); // Leistung in %