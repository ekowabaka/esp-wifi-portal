#ifndef WIFI_H
#define WIFI_H

#define CONNECTION_STATUS_DISCONNECTED  0
#define CONNECTION_STATUS_WAITING       1
#define CONNECTION_STATUS_CONNECTING    2
#define CONNECTION_STATUS_CONNECTED     3
#define CONNECTION_STATUS_FAILED        4

#define DEFAULT_SCAN_LIST_SIZE          16

int wifi_get_connection_status();
esp_err_t wifi_scan(wifi_ap_record_t *ap_info);
esp_err_t wifi_start_station(char * ssid, char * password);
void wifi_end_ap();

#endif
